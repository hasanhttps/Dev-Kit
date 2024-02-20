using System.Net;
using System.Net.Sockets;
using System.Text;


IPAddress multicastIPAddress = IPAddress.Parse("239.0.0.1");
int port = 27001;

UdpClient udpClient = new UdpClient();
udpClient.JoinMulticastGroup(multicastIPAddress);

Console.WriteLine("Multicast server working...");

while (true)
{
    Console.Write("Enter the message to be sent: ");
    string? message = Console.ReadLine();

    if (message is null)
        continue;

    byte[] bytes = Encoding.Default.GetBytes(message);

    udpClient.Send(bytes, bytes.Length, new IPEndPoint(multicastIPAddress, port));

    Console.WriteLine("Message sent.");
}