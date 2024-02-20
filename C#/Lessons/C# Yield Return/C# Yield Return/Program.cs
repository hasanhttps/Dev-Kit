namespace C__Yield_Return {
    internal class Program {
        static void Main(string[] args) {
            var list = Yield_Return.Foo();
            foreach (var item in list) {
                Console.WriteLine(item);
            }

            // Delegate


        }
    }
}