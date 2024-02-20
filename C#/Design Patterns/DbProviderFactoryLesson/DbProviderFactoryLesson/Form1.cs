using System.Data.Common;
using System.Data.SqlClient;
using System.Data.OleDb;
using System.Data;
using Microsoft.Extensions.Configuration;

namespace DbProviderFactoryLesson;

public partial class Form1 : Form
{
    DbConnection? connection = null;
    DbProviderFactory? providerFactory = null;
    IConfigurationRoot? configuration = null;
    string providerName = string.Empty;

    public Form1()
    {
        InitializeComponent();

        Configuration();
    }

    private void Configuration()
    {
        DbProviderFactories.RegisterFactory("System.Data.SqlClient", typeof(SqlClientFactory));
        DbProviderFactories.RegisterFactory("System.Data.OleDb", typeof(OleDbFactory));

        configuration = new ConfigurationBuilder().AddJsonFile("appsettings.json").Build();
    }

    private void btn_getAllProviders_Click(object sender, EventArgs e)
    {


        DataTable table = DbProviderFactories.GetFactoryClasses();

        // dataGridView1.DataSource = table;
        cmboxProviders.Items.Clear();
        foreach (DataRow row in table.Rows)
            cmboxProviders.Items.Add(row["InvariantName"].ToString());
    }

    private void cmboxProviders_SelectedIndexChanged(object sender, EventArgs e)
    {
        providerName = cmboxProviders.SelectedItem.ToString();


        var connectionString = configuration.GetConnectionString(providerName);





        textConStr.Text = connectionString;

        // ** connection
        providerFactory = DbProviderFactories.GetFactory(providerName);

        connection = providerFactory.CreateConnection();
        connection.ConnectionString = connectionString;

    }

    private void btn_execute_Click(object sender, EventArgs e)
    {
        //NormalExecuteQuery();


        if (string.IsNullOrWhiteSpace(textRequest.Text) || string.IsNullOrWhiteSpace(textConStr.Text))
            return;


        using var command = connection.CreateCommand();
        command.CommandText = textRequest.Text;

        var adapter = providerFactory.CreateDataAdapter();
        adapter.SelectCommand = command;


        //// way 1
        //adapter.TableMappings.Add("table", "Books");
        //adapter.TableMappings.Add("table1", "Authors");
        //adapter.TableMappings.Add("table2", "Teacherx");


        //// way 2
        //DataTableMapping dataTableMapping = new DataTableMapping();
        //dataTableMapping.SourceTable = "table";
        //dataTableMapping.DataSetTable = "Books";


        ////DataTableMapping dataTableMapping1 = new DataTableMapping();
        ////dataTableMapping1.SourceTable = "table1";
        ////dataTableMapping1.DataSetTable = "Authors";


        //DataColumnMapping dataColumnMapping = new DataColumnMapping();
        //dataColumnMapping.SourceColumn = "Id";
        //dataColumnMapping.DataSetColumn = "sira No";

        //dataTableMapping.ColumnMappings.Add(dataColumnMapping);


        //adapter.TableMappings.Add(dataTableMapping);
        ////adapter.TableMappings.Add(dataTableMapping1);







        DataSet table = new DataSet();
        adapter.Fill(table);

        dataGridView1.DataSource = table.Tables["table"];


    }

    void NormalExecuteQuery()
    {
        if (string.IsNullOrWhiteSpace(textRequest.Text) || string.IsNullOrWhiteSpace(textConStr.Text))
            return;


        using var command = connection.CreateCommand();
        command.CommandText = textRequest.Text;

        var adapter = providerFactory.CreateDataAdapter();
        adapter.SelectCommand = command;

        DataTable table = new DataTable();
        adapter.Fill(table);

        dataGridView1.DataSource = table;
    }
}