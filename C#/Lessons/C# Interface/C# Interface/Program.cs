using C__Interface.models;

namespace C__Interface {
    public class Program {
        static void Main() {
            
            Some some = new Some();

            Console.WriteLine(some[1]);

            // Interface

            Interface a = new Interface();
            Interface b = new Interface();

            IShow s = a; // Burada classin objecti yaradilmir sadece pointer yaradilir.
            IShow[] arr = {a, b};

            a.foo(); // Burada base class Ishow oldugu ucun ve bodysi olmadigi ucun gedir onun derivedindaki funksiyani isledir.


            InterfaceBody i = new InterfaceBody();
            IA c = i;
            c.foo(); // doo funksiyasi islemir cunki pointerimiz IB deil ki onun methodunu desteklesin.

            // Kodda deisiklik var yeni IA.foo metodur ve IB.foo() elave olunub ona gore yazilnalar deyisir.

            IA d = i;
            IB e = i;

            d.foo(); // Bu zaman bizim eger IA ucun ayri bir metodumuz varsa onu isledir. Yoxdursa umumi olani isledir.
            e.foo(); // Eger Overload varsa IB ucun isledir yoxdursa interfacebody'nin overloadini isledir.


        }
    }
}