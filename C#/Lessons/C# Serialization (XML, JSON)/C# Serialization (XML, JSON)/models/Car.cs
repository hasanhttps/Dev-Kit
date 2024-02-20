using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace XMLJSON.models {
    public class Car {
        public int Id { get; set; }
        public string? Vendor { get; set; }
        public string? Maker { get; set; }

        public override string ToString() {
            return $"Car ID: {Id}\nVendor: {Vendor}\nMaker: {Maker}";
        }
    }
}
