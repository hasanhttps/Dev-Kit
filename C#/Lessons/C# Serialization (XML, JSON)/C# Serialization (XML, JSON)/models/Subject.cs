using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace XMLJSON.models {
    [Serializable] // It help us to use XML more compact
    public class Subject {
        [XmlAttribute]
        public string SubName { get; set; }
        [XmlAttribute] 
        public string Degree { get; set; }

        public override string ToString() {
            return $"Subject Name : {SubName}\nDegree : {Degree}\n";
        }
    }
}
