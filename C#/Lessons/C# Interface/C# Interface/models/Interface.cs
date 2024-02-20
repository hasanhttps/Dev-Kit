using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__Interface.models {

    // Inheritance (is a)
    // Association (has a)
    // Interface (can do)

    interface IShow {
        public void foo();
    }

    public class Interface : IShow {

        // Mutleq class daxilinde overloadi edilmelidir. Abstracti daha qisa hisselere bolmek ucunudur cunki multiple inheritance mumkundur.
        public void foo() {
            Console.WriteLine("Hi");
        }
    }
}
