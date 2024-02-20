using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__Interface.models {
    public class Some {

        public string Name { get; set; }
        public string Surname { get; set; }
        public List<int> Marks = new List<int>() { 10, 10, 12 };

        // Indexer  =>  Property'e oxsayir.

        public int this[int index] => Marks[index];


    }
}
