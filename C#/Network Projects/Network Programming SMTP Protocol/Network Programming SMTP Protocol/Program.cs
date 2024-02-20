using System.Net;
using System.Net.Mail;


var email = "reeljett@gmail.com";
var applicationToken = "mpdg mgax mxnt aysh";

var host = "smtp.gmail.com";
var port = 587;

SmtpClient smtpClient = new SmtpClient() {

    Host = host,
    Port = port,
    EnableSsl = true,
    Credentials = new NetworkCredential(email, applicationToken),
    DeliveryMethod = SmtpDeliveryMethod.Network
};


try {
    smtpClient.Send(email, "catamoglanov@gmail.com", "SMTP Message", "Smtp Isledi.");
    Console.WriteLine("Sent");
}
catch (SmtpException ex) {
    Console.WriteLine(ex.Message);
}