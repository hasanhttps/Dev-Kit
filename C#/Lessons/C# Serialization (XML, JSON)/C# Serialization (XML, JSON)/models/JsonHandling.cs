using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using System.Xml;

namespace XMLJSON.models {
    public static class JsonHandling {

        public static void WriteData<T>(T? list) {
            JsonSerializerOptions op = new JsonSerializerOptions();
            op.WriteIndented = true;

            File.WriteAllText("cars.json", JsonSerializer.Serialize(list, op));
        }
    }
}
