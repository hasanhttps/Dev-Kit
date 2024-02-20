using static AnonymFunctions.models.AnonymLambda;
using AnonymFunctions.models.Event;

namespace AnonymFunctions {
    public class Program {
        static void Main() {
            // Anonym

            a();
            Console.WriteLine(func(1));

            // Event  =>  Eventler = isaresi ile islenmir += ile islenir. 

            NumberControl numberControl = new(a => a > 10);
        }
    }
}