using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Net.Http;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using HtmlAgilityPack;

namespace WPF_Scrape_Movie_Link {
    public partial class MainWindow : Window, INotifyPropertyChanged {
        private string _url;

        public event PropertyChangedEventHandler? PropertyChanged;

        public MainWindow() {
            InitializeComponent();




            //string url = "https://www.dizifilmbox.pw/filmler/baslangic-inception-full-hd-izle/";
            //var httpClient = new HttpClient();
            //var html = httpClient.GetStringAsync(url).Result;
            //var htmlDocument = new HtmlDocument();
            //htmlDocument.LoadHtml(html);

            //var nodes = htmlDocument.DocumentNode.SelectNodes("//div[@class='keremiya_part']//span");
            ////var nodes = node.SelectNodes("//div[@class='keremiya_part']//span");
            //foreach(var n in nodes) {
            //    MessageBox.Show(n.InnerText);
            //}
            //HtmlAttribute scr = node.Attributes["src"];

            //string url = "https://www.fullhdizle.me/inception-izle/";
            //var httpclient = new httpclient();
            //var html = httpclient.getstringasync(url).result;
            //var htmldocument = new htmldocument();
            //htmldocument.loadhtml(html);

            //var node = htmldocument.documentnode.selectsinglenode("//iframe[@src]");
            //htmlattribute scr = node.attributes["src"];

            //string url = "https://www.dizifilmbox.pw/?s=inception";
            //var httpClient = new HttpClient();
            //var html = httpClient.GetStringAsync(url).Result;
            //var htmlDocument = new HtmlDocument();
            //htmlDocument.LoadHtml(html);

            //var nodes = htmlDocument.DocumentNode.SelectNodes("//a[@href]");
            //HtmlAttribute scr = null;

            //foreach ( var node in nodes ) {
            //    try {

            //        if (node.Attributes["href"]!.Value.Substring(0, 35) == "https://www.dizifilmbox.pw/filmler/") { 
            //            scr = node.Attributes["href"];
            //            break;
            //        }
            //    }catch( Exception e) { }
            //}
            //MessageBox.Show(scr.Value);
            //_url = scr.Value;

            //string url = "https://hdfilmhit.org/filmi/lust-stories/";
            //var httpClient = new HttpClient();
            //var html = httpClient.GetStringAsync(url).Result;
            //var htmlDocument = new HtmlDocument();
            //htmlDocument.LoadHtml(html);

            //var nodes = htmlDocument.DocumentNode.SelectNodes("//iframe[@src]");
            //int count = 0;
            //HtmlAttribute scr = null;

            //foreach ( var node in nodes ) { 
            //    count++;
            //    if (count == 2) scr = node.Attributes["src"];
            //}
            //MessageBox.Show(scr.Value);

        }


        public string URL { get => _url; 
            set { 
                _url = value;
                OnPropertyChanged();
            } 
        }

        private void Button_Click(object sender, RoutedEventArgs e) {
            string url = "https://hdfilmhit.org/?s=spider-man+no+way+home";
            var httpClient = new HttpClient();
            var html = httpClient.GetStringAsync(url).Result;
            var htmlDocument = new HtmlDocument();
            htmlDocument.LoadHtml(html);

            HtmlAttribute? scr = null;
            HtmlNodeCollection htmlNodes = htmlDocument.DocumentNode.SelectNodes("//div[@class='movie-details existing-details']");

            foreach (var node in htmlNodes) {
                try {
                    if (node.InnerText.Contains("2022")) {
                        var doc = new HtmlDocument();
                        doc.LoadHtml(node.InnerHtml);

                        var nameDiv = doc.DocumentNode.SelectSingleNode("//span[@class='movie-title']");
                        var anchorElement = nameDiv.SelectSingleNode("a");
                        scr = anchorElement.Attributes["href"];
                        break;
                    }
                }
                catch { }
            }
            html = httpClient.GetStringAsync(scr!.Value).Result;
            htmlDocument = new HtmlDocument();
            htmlDocument.LoadHtml(html);
            var nodes = htmlDocument.DocumentNode.SelectNodes("//iframe[@src]");
            HtmlNode? node2 = null;

            foreach(var node in nodes) {
                try {
                    if (node.Attributes["src"].Value.Contains("https://theclosedaddy.com/embed/"))
                        node2 = node;
                }
                catch { }
            }

            HtmlAttribute scr2 = node2!.Attributes["src"];
            if (scr2.Value.Substring(0, 5) == "https") URL = scr2.Value;
            else URL = "https:" + scr2.Value;
            Uri uri = new Uri(URL);
            web.Source = uri;


            //string url = "https://fullfilmizle.net/?s=spider-man:+no+way+home";
            //var httpClient = new HttpClient();
            //var html = httpClient.GetStringAsync(url).Result;
            //var htmlDocument = new HtmlDocument();
            //htmlDocument.LoadHtml(html);

            //var nodes = htmlDocument.DocumentNode.SelectNodes("//a[@href]");
            //HtmlAttribute scr = null;

            //foreach (var node in nodes) {
            //    try {
            //        if (node.Attributes["href"]!.Value.Contains("-izle/")) { 
            //            scr = node.Attributes["href"];
            //            break;
            //        }
            //    }
            //    catch {
            //    }
            //}
            //html = httpClient.GetStringAsync(scr.Value).Result;
            //htmlDocument = new HtmlDocument();
            //htmlDocument.LoadHtml(html);
            //var node2 = htmlDocument.DocumentNode.SelectSingleNode("//iframe[@src]");
            //HtmlAttribute scr2 = node2.Attributes["src"];
            //if (scr2.Value.Substring(0,5) == "https") URL = scr2.Value;
            //else URL = "https:" + scr2.Value;
            //Uri uri = new Uri(URL);
            //web.Source = uri;


        }
        protected void OnPropertyChanged([CallerMemberName] string name = null)
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
        }
    }
}
