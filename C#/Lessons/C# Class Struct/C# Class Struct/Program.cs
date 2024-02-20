using System;

namespace ClassStruct {

    public struct Point {
        public int x, y;
        public Point(int x, int y) {
            this.x = x; 
            this.y = y;
        }
    }

    public class PointClass {
        public int x, y;

        public PointClass(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    internal class Program {
        static void Main() {

            // Build-In Structs
            // DateTime, DateOnly, TimeOnly, Random, TimeSpan

            Console.WriteLine(DateTime.Now); // Showing date from local computer
            DateOnly date = new DateOnly(2020, 10, 5);
            Console.WriteLine(date);

            // Bir setire sadece return ucun funksiya sintaksisi
            int a() => 5;

            // Random

            Random rand = new Random();
            // Next bize random bir eded verir
            // Next'e deyer versek maksimum deyere kimi random eded verir.
            // Next'e iki dene deyer versek birincini min deyer ikinscini maksimum deyer goturur ve onlarin arasindan random bir eded verir.

            // Struct

            Point p; // It create reference
            Point point = new Point(1, 2);

            p = point;
            p.x = 100;

            Console.WriteLine(point.x); // 10 cixacaq cunki value type shallow copy edir yani diger tip ile elqesi yoxdur.

            // Class

            PointClass pcd = new PointClass(10, 2);
            PointClass pc = new PointClass(1, 2);// Mutleq Parametr vermeliyik cunki default constructor silinib.
            pc = pcd;
            pcd.y += 1;

            Console.WriteLine(pc.y);
        }// Reference type'dir buna gore 3w cixacaq digerini deyisende bu'da deyisecek. Deep Copy edir.

        // Property  =>  Set ve get'i qisa yazmaq ucundur

        private int age;

        // Full property

        public int Age {
            get { return age; }
            set { age = value; }
        }
        
        // Auto Property

        public int Birth { get; set; } // Normal deyisen yaratmaq kimidir.

        // set'in yerine init'de yaza bilerik bu zaman fielde bir defe deyer vere bileciyik ancaq construtor'da isleyir.
    }
}