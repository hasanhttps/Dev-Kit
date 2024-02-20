using Inheritance.models;
using OOP;

namespace Inheritance {
    internal class Program {
        static void Main() {
            // Inheritance
            // Burada multiple inheritance yoxdur. (Diamond Problem'i yoxdur) Yalnizca interface multiple inheritance'de istirak ede biler.

            Person p1 = new Person(Guid.NewGuid(), "Hesen", "Abdullazade", 14);
            Person p2 = new Student(); // DownCasting

            // Bu errorlu yoldur.
            //Console.WriteLine(((Student)p1)._marks);


            // if (p1 is Student st) {
            //     // Burada eger p1 Student'e type cast oluna bilinirse adini st verir
            //     Console.WriteLine(st._marks);
            // }
               
               
            // as => type cast ede bilse edir ve bize refernce verir ede bilmese null verir.
               
            // Student? s = p1 as Student;
               
            // s!._marks = new int[5] { 1, 2, 3, 4, 5 };// Assign zamani ! isaresi ile null error aradan qaldirilir.
               
            // Console.WriteLine(s?._marks); // get processinde ? ile yazilir.


        }
    }
}