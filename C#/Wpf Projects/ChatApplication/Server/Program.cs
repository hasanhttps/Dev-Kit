using System.Net;
using System.Net.Sockets;

namespace Server {
    public class Program {
        static void Main(string[] args) {

            // Socket System.Net.Sockets'den gelir.
            var listener = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);

            // IpAdress System.Net'den gelir.
            var Ip = IPAddress.Parse("127.0.0.1");
            var port = 27001;

            // Binding Process
            var endPoint = new IPEndPoint(Ip, port);
            listener.Bind(endPoint);

            // It is genereate how much client you can listen at the same time. If you write backlog 1 One client wait another client to accept.
            listener.Listen(1);

            while (true) {
                Console.WriteLine($"Server EndPoint: {listener.LocalEndPoint}");
                //new Client.Program();
                var client = listener.Accept(); // client'in socket ve datasi

                Console.WriteLine($"Client EndPoint: {listener.RemoteEndPoint}");
            }
        }
    }
}