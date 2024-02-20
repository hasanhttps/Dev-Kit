using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Patient_Manager.models     {
    public static class JsonHandling {

        public static string path = "";

        public static void WriteData<T>(T? list, string filename) {
            JsonSerializerOptions op = new JsonSerializerOptions();
            op.WriteIndented = true;

            File.WriteAllText(path + filename + ".json", JsonSerializer.Serialize(list, op));
        }

        public static T ReadData<T>(string filename) {
            JsonSerializerOptions op = new JsonSerializerOptions();
            op.WriteIndented = true;
            using FileStream fs = new FileStream(path + filename + ".json", FileMode.OpenOrCreate);

            T? readData = JsonSerializer.Deserialize<T>(fs, op);
            return readData!;
        }
    }
}
