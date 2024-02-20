using System.Data.SqlClient;
using System.Collections.Generic;

namespace Reading_Data_From_DB_To_Class;

internal class Program {



    static void Main() {
        SqlConnection? connection = null;
        connection = new SqlConnection("Data Source=ASUSTUFGAMING\\SQLEXPRESS;Integrated Security=True;Initial Catalog=Library;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");

        connection.Open();
        SqlCommand command = new("SELECT * FROM Books", connection);

        SqlDataReader reader = command.ExecuteReader();

        List<Books> books = new();

        while (reader.Read()) {
            books.Add(new Books(Convert.ToInt32(reader["Id"]), reader["Name"] as string, Convert.ToInt32(reader["Pages"]), Convert.ToInt32(reader["YearPress"]), Convert.ToInt32(reader["Id_Themes"]), Convert.ToInt32(reader["Id_Category"]), Convert.ToInt32(reader["Id_Author"]), Convert.ToInt32(reader["Id_Press"]), reader["Comment"] as string, Convert.ToInt32(reader["Quantity"])));
        }

        foreach (Books book in books) {
            Console.WriteLine(book.Id);
            Console.WriteLine(book.Name);
            Console.WriteLine(book.Pages);
        }
    }
}