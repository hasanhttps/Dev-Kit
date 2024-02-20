using System.Net;
using System.Net.Sockets;
using System.Text;

namespace Server {
    internal class Program {
        static void Main(string[] args) {

            var listener = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);

            var Ip = IPAddress.Parse("10.2.24.18");
            var Port = 27001;

            var listenerEP = new IPEndPoint(Ip, Port);

            listener.Bind(listenerEP);

            var msg = "";
            var len = 0;
            var buffer = new byte[ushort.MaxValue - 29];

            EndPoint remoteEp = new IPEndPoint(IPAddress.Parse("10.2.24.18"), 27002);

            while (true) {
                len = listener.ReceiveFrom(buffer, ref remoteEp);

                msg = Encoding.Default.GetString(buffer, 0, len);
                Console.WriteLine($"{remoteEp} : {msg}");
            }
        }
    }
}