using System.Text.Json;

namespace json_file_test {

    class Item {
        public int id { get; set; }
        public string first_name { get; set; }
        public string last_name { get; set; }
        public string email { get; set; }
        public string gender { get; set; }

        public override string ToString() {
            return $"{id}\n{first_name}\n{last_name}\n{email}\n{gender}\n\n";
        }

    }

    internal class Program {
        static void Main() {
            List<Item> list = JsonFileReader.Read<List<Item>>(@"C:\Users\hasan\Downloads\MOCK_DATA.json");
            foreach (var item in list) {
                Console.WriteLine(item);
            }
        }
    }

    public static class JsonFileReader {
        public static T Read<T>(string filePath) {
            string text = File.ReadAllText(filePath);
            return JsonSerializer.Deserialize<T>(text);
        }
    }
}