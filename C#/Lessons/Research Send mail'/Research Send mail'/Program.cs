using System;
using System.Net;
using System.Net.Mail; // this namespace is required to send emails with SMTP


namespace Research_Send_mail_ {
    internal class Program {
        static void Main() {
            MailAddress to = new MailAddress("clientrustem2000@gmail.com");
            MailAddress from = new MailAddress("instagramconsoleapp@gmail.com");

            MailMessage email = new MailMessage(from, to);
            email.Subject = "Testing out email sending";
            email.Body = "Hello all the way from the land of C#";

            SmtpClient smtp = new SmtpClient();
            smtp.Host = "smtp.gmail.com";
            smtp.Port = 25;
            smtp.Credentials = new NetworkCredential("instagramconsoleapp@gmail.com", "eydutgiswpexleel");
            smtp.DeliveryMethod = SmtpDeliveryMethod.Network;
            smtp.EnableSsl = true;

            try
            {
                /* Send method called below is what will send off our email 
                 * unless an exception is thrown.
                 */
                smtp.Send(email);
            }
            catch (SmtpException ex)
            {
                Console.WriteLine(ex.ToString());
            }
        }
    }
}   