using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__Interface.models {

    interface IA {
        public string Name { get; set; }
        public void foo();
    }

    interface IB {
        public void doo();
        public void foo();

    }


    public class InterfaceBody : IA, IB {

        public string Name { get; set; }

        void IA.foo() { // Bu sekilde verdikde acsess modifier vere bilmirik. Avtomatik IA'daki acsess modifier'i goturur.
            Console.WriteLine("IA Fooo");
        }

        void IB.foo() { // Bu sekilde verdikde acsess modifier vere bilmirik. Avtomatik IA'daki acsess modifier'i goturur.
            Console.WriteLine("IB Fooo");
        }

        public void foo() {
            Console.WriteLine("Fooo");

        }

        public void doo() {
            Console.WriteLine("Dooo");
        }

    }
}
