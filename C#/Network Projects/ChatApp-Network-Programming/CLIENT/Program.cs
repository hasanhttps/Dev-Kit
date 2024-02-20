using System.Net.Sockets;
using System.Net;

var port = 27001;

var client = new TcpClient("127.0.0.1", port);

var stream = client.GetStream();

var binaryReader = new BinaryReader(stream);
var binaryWriter = new BinaryWriter(stream);

Task.Run(async () =>
{

    Console.Write("Your Name: ");
    var name = Console.ReadLine();
    binaryWriter.Write(name);

    while (true)
    {
        Console.Write($"To: ");
        var username = Console.ReadLine();

        Console.Write($"Message: ");
        var message = Console.ReadLine();

        binaryWriter.Write(username + " " + message);
    }

});

while (true)
{
    var message = binaryReader.ReadString();
    Console.WriteLine(message);
}

