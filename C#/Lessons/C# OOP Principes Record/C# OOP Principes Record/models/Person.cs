using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP.models {
    public class Person {
        private string name;

        public string getName() { return name; }
        public void setName(string name) { if (name.Length >= 3) this.name = name; else throw new Exception("Ad minimum 3 symbol olmalidir."); }
        public string Name {
            get { return name; }
            set {
                

            }
        }
    }
}
