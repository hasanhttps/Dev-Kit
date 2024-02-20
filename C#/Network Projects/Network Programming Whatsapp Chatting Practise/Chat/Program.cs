using System.Net;
using System.Net.Sockets;

namespace Chat {
    internal class Program {
        static void Main(string[] args)  {

            var Ip = IPAddress.Parse("10.2.241.1");
            var Port = 27001;

            var client = new TcpClient(Ip.ToString(), Port);

            var listenerStream = client.GetStream();

            var binaryReader = new BinaryReader(listenerStream);
            var binaryWriter = new BinaryWriter(listenerStream);

            Task.Run(() => {
                while (true) {

                    Console.WriteLine(binaryReader.ToString());
                }
            });

            // Message Send

            while (true) {

                var msg = Console.ReadLine();
                binaryWriter.Write(msg);
            }
        }
    }
}