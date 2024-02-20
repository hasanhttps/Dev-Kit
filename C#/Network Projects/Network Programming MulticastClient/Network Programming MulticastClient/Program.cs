using System.Net;
using System.Net.Sockets;
using System.Text;

IPAddress multicastIPAddress = IPAddress.Parse("239.0.0.1");
int port = 27001;

UdpClient udpClient = new UdpClient(port);

udpClient.JoinMulticastGroup(multicastIPAddress);

Console.WriteLine("Multicast client working...");

while (true)
{

    IPEndPoint? remoteEP = null;
    byte[] bytes = udpClient.Receive(ref remoteEP);
    string message = Encoding.Default.GetString(bytes);

    Console.WriteLine($"Incoming message: {message}");
}