
namespace Threading_Lesson_1 {
    internal class Program {
        static void Main(string[] args) {

            System.Media.SoundPlayer player = new System.Media.SoundPlayer();
            player.SoundLocation = AppDomain.CurrentDomain.BaseDirectory + "\\Harry_Potter_-_More_potions_-_www.BiG.AZ.wav";
            player.Play();

            var t = new Thread(() => {
                while (true) {
                    Console.WriteLine("                ");
                }
            });

            t.Start();

            while (true) {
                Console.WriteLine("It step");
            }
        }
    }
}