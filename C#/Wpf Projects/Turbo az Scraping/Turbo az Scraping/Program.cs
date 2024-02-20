using System.Net.Http;
using HtmlAgilityPack;

namespace Turbo_az_Scraping {
    internal class Program {
        static void Main() {
            string url = "https://turbo.az/";
            var httpClient = new HttpClient();
            var html = httpClient.GetStringAsync(url).Result;
            var htmlDocument = new HtmlDocument();
            htmlDocument.LoadHtml(html);

            HtmlAttribute? scr = null;
            HtmlNodeCollection movieDetailNodes = htmlDocument.DocumentNode.SelectNodes("//div[@class='products products--featured js-import-container']");

            foreach (var node in movieDetailNodes) {
                try {
                    var doc = new HtmlDocument();
                    doc.LoadHtml(node.InnerHtml);

                    var nameDiv = doc.DocumentNode.SelectSingleNode("//div[@class='products-i vipped featured']");
                    var anchorElement = nameDiv.SelectSingleNode("//a['products-i__link']");
                    scr = anchorElement.Attributes["href"];
                }
                catch { }
                Console.WriteLine(scr.Value);
            }
            
        }
    }
}