using System.Net.Sockets;
using System.Net;
using System.Text;

namespace ClientUdp {
    internal class Program {
        static void Main(string[] args) {

            var client = new Socket(AddressFamily.InterNetwork,
                          SocketType.Dgram,
                          ProtocolType.Udp);


            var Ip = IPAddress.Parse("10.2.24.18");
            var Port = 27001;

            var remoteEP = new IPEndPoint(Ip, Port);

            var msg = "";
            var len = 0;
            var buffer = Array.Empty<byte>();

            while (true) {
                Console.Write("Message Daxil edin: ");
                msg = Console.ReadLine();

                buffer = Encoding.Default.GetBytes(msg);

                client.SendTo(buffer, remoteEP);

            }
        }
    }
}