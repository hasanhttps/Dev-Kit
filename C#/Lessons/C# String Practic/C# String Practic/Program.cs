namespace C__String_Practic
{
    internal class Program {
        static void Main(string[] args) {
            string website = "http://www.google.com";
            string course = "Our course is best in the World, STEP IT ACADEMY Azerbaijan";

            string hello = " Hello World ";
            hello = hello.Trim();
            Console.WriteLine(hello);

            // 2.

            Console.WriteLine(course.ToLower());

            // 3.

            var count = 0;

            for (int i = 0; i < website.Length; i++) {
                if (website[i] == 'a') count++;
            }

            Console.WriteLine($"The count is {count}");

            // 4

            Console.WriteLine(website.StartsWith("www"));
            Console.WriteLine(website.EndsWith("com"));

            // 5

            Console.WriteLine(website.Contains(".com"));

            // 6

            Console.WriteLine(course.All(Char.IsLetter));

            // 8

            Console.WriteLine(course.Replace(' ', '-'));

            // 9

            hello = "Hello World";
            Console.WriteLine(hello.Replace("World", "there"));

        }
    }
}