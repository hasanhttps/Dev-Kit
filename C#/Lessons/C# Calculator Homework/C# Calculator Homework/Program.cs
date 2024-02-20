using System;

namespace Calculator {

    class Program {
        static bool resulta, resultb, status = true;

        static public void setConsoleColor(string parametr) {
            Console.BackgroundColor = ConsoleColor.DarkGray;
            Console.WriteLine(parametr);
            Console.BackgroundColor = ConsoleColor.Black;
        }

        static public void setab(out int a, out int b){
            Console.Clear();
            Console.Write("Please enter a : ");
            string astring = Console.ReadLine();
            resulta = int.TryParse(astring, out a);
            Console.Write("Please enter b : ");
            string bstring = Console.ReadLine();
            resultb = int.TryParse(bstring, out b);
        }

        static public void add() {
            setab(out int a, out int b);
            Console.WriteLine(a.ToString(), b.ToString());
            if (resulta && resultb) {
                Console.WriteLine($"The result is {a + b}");
            }else {
                Console.WriteLine("Char can't be operand!");
            }
        }

        static public void substraction() {
            setab(out int a, out int b);
            Console.WriteLine(a.ToString(), b.ToString());
            if (resulta && resultb){
                Console.WriteLine($"The result is {a - b}");
            }else{
                Console.WriteLine("Char can't be operand!");
            }
        }

        static public void multiply() {
            setab(out int a, out int b);
            Console.WriteLine(a.ToString(), b.ToString());

            if (resulta && resultb){
                Console.WriteLine($"The result is {a * b}");
            }else{
                Console.WriteLine("Char can't be operand!");
            }
        }

        static public void division() {
            setab(out int a, out int b);
            Console.WriteLine(a.ToString(), b.ToString());
            if (resulta && resultb){
                Console.WriteLine($"The result is {a / b}");
            }else{
                Console.WriteLine("Char can't be operand!");
            }
        }
        static void Main() {
            dynamic key;
            int choose = 0;
            Console.BackgroundColor = ConsoleColor.DarkGray;
            Console.WriteLine("Add");
            Console.BackgroundColor = ConsoleColor.Black;
            Console.WriteLine("Substraction");
            Console.WriteLine("Multiply");
            Console.WriteLine("Division");

            while (status) {
                key = Console.ReadKey();

                switch (key.Key) {
                    case 27:
                        status = false;
                        break;
                    case ConsoleKey.UpArrow:
                        if (choose != 0) choose--;
                        else choose = 3;
                        break;
                    case ConsoleKey.DownArrow:
                        if (choose != 3) choose++;
                        else choose = 0;
                        break;
                    case ConsoleKey.Enter:  
                        Console.Clear();
                        if (choose == 0) add();
                        else if (choose == 1) substraction();
                        else if (choose == 2) multiply();
                        else if (choose == 3) division();
                        Console.Write("Press any key to continue...");
                        Console.ReadKey();
                        break;
                }
                Console.Clear();
                Console.ResetColor();
                if (choose == 0) setConsoleColor("Add");
                else Console.WriteLine("Add");
                if (choose == 1) setConsoleColor("Substracktion");
                else Console.WriteLine("Substracktion");
                if (choose == 2) setConsoleColor("Multiply");
                else Console.WriteLine("Multiply");
                if (choose == 3) setConsoleColor("Division");
                else Console.WriteLine("Division");

            }
        }
    }
}