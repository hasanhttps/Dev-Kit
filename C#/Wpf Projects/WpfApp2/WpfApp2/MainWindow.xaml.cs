using System;
using System.Collections.Generic;
using System.Linq;
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
using Newtonsoft.Json;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Windows;


namespace WpfApp2 {
    public partial class MainWindow : Window {
        public MainWindow() {
            InitializeComponent();
        }

        private void ScrapeButton_Click(object sender, RoutedEventArgs e)
        {
            // Specify the URL of the Turbo.az page you want to scrape
            string url = "https://www.turbo.az";

            // Create a WebClient to download the HTML content of the page
            WebClient client = new WebClient();
            string htmlContent = client.DownloadString(url);

            // Use HtmlAgilityPack to parse the HTML
            HtmlDocument document = new HtmlDocument();
            document.LoadHtml(htmlContent);

            // Find the elements containing the data you want to scrape
            HtmlNodeCollection carNodes = document.DocumentNode.SelectNodes("//div[contains(@class, 'tz-container')]//div[contains(@class, 'products')]");
            // //div[contains(@class, 'products-i vipped salon')]//div[contains(@class, 'products-i__top')]//div[contains(@class, 'products-i__label-container tz-d-flex tz-gap-5 tz-wrap-wrap')]

            if (carNodes != null)
            {
                // Create a list to store the scraped data
                List<object> cars = new List<object>();

                // Iterate over the car nodes and extract the desired information
                foreach (HtmlNode carNode in carNodes)
                {
                    string title = "";
                    string image = "";
                    try
                    {
                        title = carNode.SelectSingleNode(".//div[contains(@class, 'products-i__label-container tz-d-flex tz-gap-5 tz-wrap-wrap')]//div[contains(@class, 'products-i__label products-i__label--salon')]").InnerText.Trim();
                        image = carNode.SelectSingleNode(".//img").InnerText.Trim();

                    }
                    catch
                    {

                    }
                    //string price = carNode.SelectSingleNode(".//div[contains(@class, 'product-prices')]//span[contains(@class, 'price')]").InnerText.Trim();
                    //string location = carNode.SelectSingleNode(".//div[contains(@class, 'product-location')]//span").InnerText.Trim();

                    // Create a dictionary to store the car information
                    var carInfo = new Dictionary<string, string>
                {
                    { "Title", title },
                    { "Image", image }
                };

                    // Add the car information to the list
                    cars.Add(carInfo);
                }

                // Convert the list of cars to JSON
                string json = JsonConvert.SerializeObject(cars, Formatting.Indented);

                // Save the JSON data to a file
                File.WriteAllText("turbo_data.json", json);

                MessageBox.Show("Data has been scraped and saved as turbo_data.json");
            }
            else
            {
                MessageBox.Show("No data found on the page.");
            }
        }
    }
}
