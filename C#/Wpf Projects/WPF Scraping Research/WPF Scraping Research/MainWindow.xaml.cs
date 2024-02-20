using System;
using System.Windows;
using System.Net.Http;
using HtmlAgilityPack;
using Newtonsoft.Json;
using System.Collections.Generic;
using System.IO;

namespace WPF_Scraping_Research {
    public partial class MainWindow : Window {
        public MainWindow() {
            InitializeComponent();
        }

        public void ScrapeButtonClicked(object sender, RoutedEventArgs e) {

            // Send get request to turbo.az

            string url = "https://turbo.az";
            var httpClient = new HttpClient();
            var html = httpClient.GetStringAsync(url).Result;
            var htmlDocument = new HtmlDocument();
            htmlDocument.LoadHtml(html);

            // Get Products

            var carNodes = htmlDocument.DocumentNode.SelectNodes("//div[contains(@class, 'products')]");
            MessageBox.Show(carNodes.Nodes().ToString());
            if (carNodes != null) {

                // Create a list to store the scraped data
                List<object> cars = new List<object>();

                foreach(var carNode in carNodes) {
                    string price = carNode.SelectSingleNode(".//div[@class='product-price']").InnerText.Trim();
                    //string model = carNode.SelectSingleNode("//div[@class='products-i__name products-i__bottom-text']").InnerText.Trim();
                    //string attributes = carNode.SelectSingleNode("//div[@class='products-i__attributes products-i__bottom-text']").InnerText.Trim();

                    // Create a dictionary to store the car information
                    var carInfo = new Dictionary<string, string> {
                        { "Price", price },
                        //{ "Model", model },
                        //{ "Attributes", attributes }
                    };
                    cars.Add(carInfo);
                }

                // Convert the list of cars to JSON
                string json = JsonConvert.SerializeObject(cars, Formatting.Indented);

                // Save the JSON data to a file
                File.WriteAllText("turbo_data.json", json);

                // Add the car information to the list

                MessageBox.Show("Data has been scraped and saved as turbo_data.json");
            }
            else {
                MessageBox.Show("No data found on the page.");
            }

            // Get Elements
        }
    }
}
