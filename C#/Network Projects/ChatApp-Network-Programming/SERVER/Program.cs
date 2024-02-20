using System.Net;
using System.Net.Sockets;

var ip = IPAddress.Parse("127.0.0.1");
var port = 27001;

var listener = new TcpListener(ip, port);

Dictionary<string, TcpClient> clients = new Dictionary<string, TcpClient>();

listener.Start();

while (true) 
{
    var client = listener.AcceptTcpClient();

    Task.Run(() =>
    {
        bool islogin = true;
        var clientStream = client.GetStream();

        var binaryReader = new BinaryReader(clientStream);

        var sender = "";

        if (islogin)
        {
           sender = binaryReader.ReadString();
            clients.Add(sender, client);

            islogin = false;
        }

        while (true)
        {
            var readString = binaryReader.ReadString();
            var starIindex = readString.IndexOf(" ");
            var username = readString.Substring(0, starIindex);

            var receiver = clients.FirstOrDefault(p => p.Key.ToString() == username).Value;

            var stream = receiver.GetStream();
            var binaryWriter = new BinaryWriter(stream);

            var message = sender + ":  " + readString.Substring(starIindex + 1);

            binaryWriter.Write(message);
        }
    });

}
