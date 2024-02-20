using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AnonymFunctions.models {
    public static class AnonymLambda {
        // Anonym Function

        public static Action a = delegate () { Console.WriteLine("Anonym Function"); };

        // Parametr and return type Anonym Function

        public static Func<int, string> func = delegate (int x) { return x.ToString(); };

        // Lambda (=> arrow operator) Function
    }
}
