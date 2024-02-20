using Microsoft.Data.SqlClient;



namespace ADO_Introduction {

    class Application {

        SqlConnection _connection = null;

        public Application() {

            // First Way

            string connectionstr = "Data Source=ASUSTUFGAMING\\SQLEXPRESS01;Initial Catalog=Academy_DB;Integrated Security=True;Connect Timeout=30;Encrypt=False;Trust Server Certificate=False;Application Intent=ReadWrite;Multi Subnet Failover=False";

            // Second Way

            SqlConnectionStringBuilder builder = new SqlConnectionStringBuilder();
            builder.DataSource = "ASUSTUFGAMING\\SQLEXPRESS01";
            builder.InitialCatalog = "Academy_DB";
            builder.IntegratedSecurity = true;
            builder.ConnectTimeout = 30;
            builder.Encrypt = false;
            builder.TrustServerCertificate = false;
            Console.WriteLine(builder.ConnectionString);

            _connection = new SqlConnection(connectionstr); // Microsoft.Data.SqlClient
        }

        public void InsertDataToSql() {
            try {
                _connection.Open();
                string insertData = "INSERT INTO Teachers (EmploymentDate, Name, Premium, Salary, Surname, IsProfessor, Position, IsAssistant) VALUES ('2.02.1990', 'Rustem', 100, 1100, 'Hesenli', 1, 'Professor', 0)";
               
                using SqlCommand command = new SqlCommand(insertData, _connection);

                command.ExecuteNonQuery();
            }
            catch (Exception ex) {
                Console.WriteLine(ex.Message);
            }
            finally {
                _connection.Close();
            }
        }
    }

    internal class Program {
        static void Main(string[] args) {
            Application application = new Application();
            application.InsertDataToSql();
        }
    }
}