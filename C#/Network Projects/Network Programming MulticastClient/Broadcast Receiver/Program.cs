using System.Net;
using System.Net.Sockets;
using System.Text;


UdpClient receiver = new UdpClient(27001);
IPEndPoint endPoint = new IPEndPoint(IPAddress.Any, 0);

while (true) { 
    byte[] bytes = receiver.Receive(ref endPoint);
    string message = Encoding.Default.GetString(bytes, 0, bytes.Length);
    Console.WriteLine($"Message received: {message}");
}