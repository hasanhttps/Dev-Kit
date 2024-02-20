using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__Yield_Return {
    public class Yield_Return {

        public static IEnumerable<int> Foo() {
            yield return 1;
            yield return 2;
            yield return 3;
        }
    }
}
