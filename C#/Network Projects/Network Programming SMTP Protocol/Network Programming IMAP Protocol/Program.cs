using MailKit;
using System.Net;
using System.Net.Mail;
using MailKit.Net.Imap;

var email = "reeljett@gmail.com";
var applicationToken = "mpdg mgax mxnt aysh";

var host = "imap.gmail.com";
var port = 993;

using ImapClient imapClient = new ImapClient();
imapClient.Connect(host, port);
imapClient.Authenticate(email, applicationToken);

imapClient.Inbox.Open(FolderAccess.ReadOnly);
Console.WriteLine(imapClient.Inbox.Count);

var message = imapClient.Inbox.GetMessage(imapClient.Inbox.Count - 1);

imapClient.Disconnect(true);

var hostsmtp = "smtp.gmail.com";
var portsmtp = 587;

SmtpClient smtpClient = new SmtpClient() {

    Host = hostsmtp,
    Port = portsmtp,
    EnableSsl = true,
    Credentials = new NetworkCredential(email, applicationToken),
    DeliveryMethod = SmtpDeliveryMethod.Network,
};

try {
    smtpClient.Send(email, "catamoglanov@gmail.com", message.Subject,$"From: {message.From}\nTo: {message.To}\n Body: {message.TextBody}");
    Console.WriteLine("Sent");
}
catch (SmtpException ex) {
    Console.WriteLine(ex.Message);
}