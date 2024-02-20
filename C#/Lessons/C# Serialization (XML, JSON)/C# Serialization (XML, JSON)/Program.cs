using System;
using System.Text;
using XMLJSON.models;
using Newtonsoft.Json;
using System.Xml.Serialization;
using System.Text.Json.Serialization;
using static XMLJSON.models.XmlHandling;
using static XMLJSON.models.JsonHandling;

namespace XMLJSON {
    internal class Program {
        static void Main() {

            // Write Data

            // XMLWriteData(new List<Car>() {
            //     new() {Id=1,Vendor="Tesla",Maker="Model 3" },
            //     new() {Id=2,Vendor="Aston Martin",Maker="Rapid"},
            //     new() {Id=3,Vendor="Pajero",Maker="Sport"},
            // });

            // Read Data

            // List<Car> cars = XMLReadData();
            // foreach (var item in cars) {
            //     Console.WriteLine(item);
            // }

            // Basic way of XML

            // Write

            // var xml = new XmlSerializer(typeof(List<Subject>));
            // using FileStream fs = new("subjects.xml", FileMode.Create);
            // xml.Serialize(fs, new List<Subject> {
            //     new() {SubName = "Math", Degree = "94"},
            //     new() {SubName = "Az", Degree = "54"},
            // });

            // Read

            // var xml = new XmlSerializer(typeof(List<Subject>));
            // using FileStream fs = new("subjects.xml", FileMode.Open);
            // var subjects = xml.Deserialize(fs) as List<Subject>;
               
            // foreach (var subject in subjects!) {
            //     Console.WriteLine(subject);
            // }

            // Json

            // var cars = new List<Car>() {
            //     new() { Id = 1, Vendor = "Tesla", Maker = "Model 3" },
            //     new() { Id = 2, Vendor = "Aston Martin", Maker = "Rapid" },
            //     new() { Id = 3, Vendor = "Pajero", Maker = "Sport" },
            // };

            // First Way

            // WriteData<List<Car>>(cars);

            // Second Way

            // This way relies on NuGet download

            // string str = JsonConvert.SerializeObject(cars, Newtonsoft.Json.Formatting.Indented);
            // File.WriteAllText("cars2.json", str);

            // Third Way

            // List<Car>? list = new();

            // using FileStream fs = new FileStream("cars.json", FileMode.Open);
            // list = System.Text.Json.JsonSerializer.Deserialize<List<Car>>(fs);

            // foreach(var item in list) {
            //     Console.WriteLine(item);
            // }

        }
    }
}