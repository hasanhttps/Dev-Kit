using System;

namespace C_Arrays {
    internal class Program{
        static unsafe public void foo(){
            // You can destroy smart pointer acsess to delete and you must delete with free in local.
            
            int number = 10;
            int* ptr = &number;
        }
        static public void param(params int[] a) {
            Console.WriteLine(a);

        }

        static void Main(){

            // Other Operators

            // Unsafe  -  It can use to destroy the smart pointer acseess to delete at end scope
            // Sizeof  -  It calculate the byte of type

            Console.WriteLine(sizeof(int));

            // Typeof  -  Gives the il value of any type

            Console.WriteLine(typeof(int));

            // Nameof  -  It gives you name of any variable with its name

            int num;
            Console.WriteLine(nameof(num));

            // Params  -  You don't have to give array with new int[] {} symbol

            param(1, 2, 3, 4);// It automaticly create array and elements in heap.

            // Array

            int[] ints = { 1, 2, };// Stack
            int[] inth = new int[3] { 1, 2, 3}; // Heap

            // For

            for (int i = 0; i < ints.Length; i++) {
                Console.WriteLine(ints[i]);
            }

            // Foreach

            foreach (int i in ints) {
                Console.WriteLine(i);
            }

            // Multi Array

            // Have two type :

            // 1. Rectangle  -->  Setir ve sutun sayi eyni olmalidir.
            // 2. Jagged  -->  Her setirde eyni sayda element olmalidir.

            // Rectangle array initialize

            int[,] arr1 = { { 1, 2, 3 }, { 5, 6, 7 }, { 8, 9, 10 } };
            int[,] arr2 = new int[3, 3] { { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 } };
            // burada new int yazanda adi int array yaradir heapde.

            // Jagged array initialize

            int[][] arr = new int[2][];
            // new int yazanda bizde pointer array yaradir.

            arr[0] = new int[2];
            arr[1] = new int[4];

            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < arr[i].Length; j++) {
                    Console.Write(arr[i][j]);
                } Console.WriteLine();
            }


            // Jagged ve rectangle rray ferqleri 
            // Jagged heapde yaranarkan onun setirlerinin her biri heapde ki ayri arraylerdir.
            // Rectangle array ise heapde yan yana saxlanan deyerlerdir.

            // Nullable   --   deyisen null alarken yoxlanislar ucundur

            // string name = "Hesen";
            // Console.WriteLine(name.Length); // 5
               
            // string name = null;
            // Console.WriteLine(name.Length); // error nullrefernce.
            // sebebi ise nullun uzerinde islemek menasizidir.

            // !   --   ! isaresi ile errorun altindaki xettin qarsisini alir. Databse'den null gelse ve gelmesede yasil xett olacaqini bildiyimiz ucun bunu edirik.
            // Console.WriteLine(name!.Length);

            // nullable parametr goturmeyen funksiyalara null vermek olmaz.
            // ?   --   ? isaresi nullable deyisen oldugunu bildirir.

            // nullable isaresi ile value type'ida nullable ede bilerik.

            int? nullable = null;

            // Istifadesi ise meselen egerki databasdan bize name gelir ve onu funksiyaya veririkse eger funksiyanin name argumenti nullable deilse
            // mutleq dolu deyisen gondermeliyik nullable deyisen gondermey olmaz. Cunki nullable olsa funksiyanin daxilinde type'in fieldlerine catanda
            // null deyerli deyisen error atir eger funksiyanin argumenti olaraq nullable'dirsa demeli biz rahat ola bilerik ki iceride null olmasi nezere alinib.

            // ? isarsi hem de errorun qarsisini ala biler.

            string name = null;
            Console.WriteLine(name?.Length);// eger sual qoysaq name nulldursa onun length fieldini cagirmayacaq.

            string str = "Hesen";
            string a = str ?? "Sagol";// Bu isare bizde deyisen eger null olmasa onu a'ya assign edir eger null'dursa yanina yazan eger null deilse onu yazir.

            Console.WriteLine(a);


            // Eger class ve ya funksiya yaradiriqsa ve bunu object'den toredirikse mutleq ToString override edilmelidir.


            // String  --  Reference type'dir refernce type bizim stackdaki deyisenin adresidir ve ona gore isleyir string default olaraq heapde yaratmir.

            // String Situation

            string name1 = "Hesen";
            string name2 = "Hesen";

            // Yuxaridaki deyisenler stackde sadece bir dene Hesen saxlayir stringin icerisinde yoxlanis ile eger hemin string yaradilibsa yeniden yaratmir.
            // Eger aralarindan birini deyisirikse yenisini yaradilir ve o'na baxmasi saglanilir.

            // GetHashCode   --   Deyisenin id'sini verir

            Console.WriteLine(name1.GetHashCode());
            Console.WriteLine(name2.GetHashCode());

            // Ikisininde id'si eynidir cunki ikiside stackde eyni deyere beraberdir. Bu optimalliq ucun beledir.

        }
    }
}