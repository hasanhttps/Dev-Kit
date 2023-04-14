using System;

namespace Cvaluetype { 
    
    // Struct enum interface class => saxlamaq olar ancaq namespace'da

    enum DasAuto {
        Tekerlek,
        Kalite,
        Auto
    }

    internal class Program {

        static public void change(int num) {
            num = 1;
        }

        static public void changeref(ref int num) {
            num = 1;
        }

        static public void changeout(out int num) {
            num = 1;
        }

        static public void changein(in int num){
            Console.WriteLine(num);
        }

        static void Main() {

            // Static Keyword  ->  Bir classin methoduna . qoymadan(object yaratmadan) istifade etmek ucundur.

            // Console
            // System namespaceinden gelen bir static classdir. Icerisinde coxlu static methodlar ve olmayanlarda var.

            // Write  ->  Console'un ekrana yazi cixartmaq ucun lazim olan methodudur. Sonunda \n yoxdur.
            // WriteLine  ->  Console'un ekrana yazi cixartmaq ucun lazim olan methodudur. Sonunda \n vardir.

            Console.WriteLine("Hello World!");
            Console.Write("Hakuna ");
            Console.WriteLine("Matata!");

            // ConsoleColor bir enumdir ve icerisinde rengler ve onlarin kodlari vardir.

            Console.BackgroundColor = ConsoleColor.Green;// Burada ekranin rengini deyisilir.
            Console.WriteLine(Console.BackgroundColor);// Burada bize ekranin rengini verir.

            Console.Title = "Hesen"; // Console'un adini verilen data'ni edir.

            Thread.Sleep(1000); // Burada 1 saniye compileri saxlayiriq.
            Console.BackgroundColor = ConsoleColor.Black;// Burada ekranin rengini deyisilir.

            //Console.WindowHeight = 20; // Uzunlugu deyismey ucundur.
            //Console.WindowWidth = 20; // Eni deyismey ucundur.

            // Interpolation Format

            int age = 10;
            Console.WriteLine($"My age {age}"); // Format For printing
            Console.WriteLine("My age {0}", age); // Format For printing

            // Multiple Printing - Verbatim

            Console.WriteLine(@"
                Salam Hesen Necesen?
                Yaxsi sen?
            ");


            // ----------------------------------------------------------------------------


            // Data Types

            /*
                1. Value Type      =>   Data saxlayir. Stackda saxlayir.
                2. Reference Type  =>   Data saxlayir lakin adrese gore ve heapde saxlanilir.
            */

            // Value Type

            // We can't create value type in heap

            // Struct (Inheritance'de istirak etmir), enum       =>  Value type'dir,
            // Class, Interface  =>  Reference type'dir.

            Int32 a = 5; // Int allocationun arxasinda il code olaraq int32 isleyir

            // Butun c# keywordlerin object classindan torenir yani upcasting ile herseyi object tipinde yarada bilerik.

            object ab = 10;

            Console.WriteLine(ab);

            int b = 10;
            change(b);

            Console.WriteLine(b);

            // Ref keyword  =>  It is use for accept data as refernce type

            // Value typelar NULL ola bilmez. (Eger nullable data type'dirsa ola biler.)

            // Default Keyword  =>  Deyer default data verir yani 0'i. Reference type'larda default NULL'dur.

            int data = default;// Value type'larin hamisinda default deyer 0'dir.
            Console.WriteLine(data);

            // C# is strongly-typed and type safe language.

            int max = int.MaxValue; // maxvalue + 1 qaydanin pozulmasidir.
            //Console.WriteLine(max + 1); // Qaydalar pozuldugu zaman bize reqem ile error atir.

            checked { // Bu ise bize qaydalari pozdugumuz zaman reqem ile deil yazi ile error atmasi ucundur.
                //Console.WriteLine(max + 1);
            }

            // Checked scope  =>  Check if type safe.

            // Parse   =>   Intin methoduudur. Stringi inte cevirir. Eger char versek error verir.
            // TryParse  =>  Intin methodudur. Return type bool'dur. Eger type cast etse deyeri deyisecek ve true qaytaracaq, etmese false qaytarir.

            int typecast = int.Parse("12");
            // typecast = int.Parse("12a"); Error
            Console.WriteLine(typecast);

            Console.WriteLine(int.TryParse("12", out typecast)); // true
            Console.WriteLine(int.TryParse("12a", out typecast)); // false

            // Out biz reference xaricden bir deyisen gondererken eger funksiya refernce qebul edirse out yazilir.

            // CompareTo  =>  Intin methodudur. Verdiyimiz her hansi deyeri eger eynidirse 0 qaytarir eger deyer deyisenden boyukdurse - 1, kicikdirse 1 qaytarir.

            int compare = 15;
            Console.WriteLine(compare.CompareTo(15)); // 0
            Console.WriteLine(compare.CompareTo(17)); // -1
            Console.WriteLine(compare.CompareTo(13)); // 1


            // Anonym type  =>  Keeps all data types

            // var      =>  Compiler-time define data type.
            // dynamic  =>  Run-time define data type.

            var str = "salam";
            Console.WriteLine(str);

            // Console

            //Console.Read(); // Bir symbol ile isleyir.
            Console.Write("Please enter the name : ");
            string name = Console.ReadLine();

            Console.WriteLine($"Name is {name}.");

            // First Way to typecast

            int _age;
            Console.Write("Please enter your age : ");
            _age = int.Parse(Console.ReadLine());
            Console.WriteLine($"Age is {_age}.");

            // Second Way

            _age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"Age is {_age}.");


            // Type Coversion

            // Ashkar (Explicite)
            // Qeyri-A (Implicite)

            // C#'da boyuk data'dan kicik dataya type casting zamani problem bas verecek. Cunki data itkisi olur. Convert ise bunun qarsisini alir.

            // Getch in c#

            dynamic btn; // We can't define variable with var data type because of we didn't define value that's why var can't define in compiler-time.
            while (true) {
                btn = Console.ReadKey(true);// yazdigimiz char'in gorsenmemeyi ucun true yaziriq.
                if (btn.Key == ConsoleKey.Escape) break;
                Console.WriteLine(btn.Key);
            }

            // Convert  =>  Istenilen type-casting eden class'dir.

            // KEYWORDS

            // Out ve Ref ferqleri 

            // Ref  =>  Variable'in original refernci funksiyaya gedir.
            // Out  =>  Variable'in original refernci funksiyaya gedir.

            int c = 10;
            changeref(ref c);// Bu refernce ile cagirmadir
            Console.WriteLine(c);
            changeout(out c);
            Console.WriteLine(c);

            // Out'un refden ferqi out'da mutleq icerisinde assign process olmalidir.
            // Diger ferqi ise out'da data veren zaman yaradib vere bilerik lakin initialize etmeye icaze verir. Lakin ref icaze vermir.

            // in  =>  readonly. Const kimidir deisile bilmez funksiya daxilinde ancaq adi ile istifade edile biler.

            changein(in c);

            // as  =>  reference type ile isleyir. Type cast edir.

            string d = "salam"; // Reference type
            string n = d as string; // Type cast ede bildikde edir ede bilmirse NULL qaytarir buna gore de reference type ile isleyir ancaq.

            // is  =>  gelen deyerin tipini yoxlanis ucundur.

            dynamic f;
            f = Console.ReadLine();
            if (f is int) {
                Console.WriteLine("It is int type!");
            }
            if (f is not string){
                Console.WriteLine("It is not string!");
            }

            // discard  =>  legv etmek

            _ = int.TryParse("123", out int h); // ramda h = 123
            bool result = int.TryParse("123", out int _); // _ ile ramdaki h'i unudur.
            Console.WriteLine(h);


            // discard operator (_)
        }
    }
}