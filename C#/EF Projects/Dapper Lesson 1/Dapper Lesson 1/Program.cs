using Dapper;
using System.Data.SqlClient;

namespace Dapper_Lesson_1;

public class Program {
    static void Main(string[] args) {

        var connection = new SqlConnection("Data Source=ASUSTUFGAMING\\SQLEXPRESS;Integrated Security=True;Initial Catalog=Library;Connect Timeout=30;Encrypt=False;");

        Console.WriteLine("Zehmet olmasa Id'i daxil edin : ");
        string Id = Console.ReadLine();
        Console.WriteLine("Zehmet olmasa Fullname'i daxil edin : ");
        string Fullname = Console.ReadLine();
        Console.WriteLine("Zehmet olmasa Surname'i daxil edin : ");
        string Surname = Console.ReadLine();
        Console.WriteLine("Zehmet olmasa Id_Lib'i daxil edin : ");
        string Id_lib = Console.ReadLine();

        var sql = $"INSERT INTO Teachers VALUES(@id, @fullname, @surname, @id_lib)";
        connection.Execute(sql, new object[] { new { id = Id, fullname = Fullname, surname = Surname, id_lib = Id_lib} });


    }
}