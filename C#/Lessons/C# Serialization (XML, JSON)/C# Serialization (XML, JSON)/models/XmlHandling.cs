using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace XMLJSON.models {
    public static class XmlHandling {

        public static void XMLWriteData(List<Car>? cars) {

            using XmlTextWriter xml = new("cars.xml", Encoding.UTF8);

            xml.Formatting = Formatting.Indented;// Bu xml file'a seliqeli sekilde kocurmek ucundur.

            xml.WriteStartDocument();
            xml.WriteStartElement("Cars");
            foreach (var item in cars) { 
                xml.WriteStartAttribute("Car");
                xml.WriteAttributeString(nameof(item.Id), item.Id.ToString());
                xml.WriteAttributeString(nameof(item.Vendor), item.Vendor.ToString());
                xml.WriteAttributeString(nameof(item.Maker), item.Maker.ToString());
                xml.WriteEndAttribute();
            }
            xml.WriteEndElement();
            xml.WriteEndDocument();
        }

        public static List<Car>? XMLReadData() {
            List<Car>? cars = new();
            XmlDocument document = new XmlDocument();
            document.Load("cars.xml");

            var root = document.DocumentElement;
            if (root != null) {
                if (root.HasChildNodes) {
                    foreach (XmlNode node in root.ChildNodes) {
                        var car = new Car() {
                            Id = int.Parse(node!.Attributes![0].Value),
                            Vendor = node.Attributes[1].Value,
                            Maker = node.Attributes[2].Value,
                        };
                        cars.Add(car);
                    }
                }
            }
            return cars;
        }
    }
}
