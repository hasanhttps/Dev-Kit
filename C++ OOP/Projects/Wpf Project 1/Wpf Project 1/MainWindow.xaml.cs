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

namespace Wpf_Project_1 {

    public partial class MainWindow : Window {
        public MainWindow() {

            InitializeComponent();
        }

        private void ResetButton_Click(object sender, RoutedEventArgs e) {
            this.Weld.IsChecked = this.Assembly.IsChecked = this.Plasma.IsChecked = this.Laser.IsChecked = this.Purchase.IsChecked =
            this.Lathe.IsChecked = this.Drill.IsChecked = this.Fold.IsChecked = this.Roll.IsChecked = this.Saw.IsChecked = false;
            this.Length.Text = "";
        }
       
        private void ApplyButton_Click(object sender, RoutedEventArgs e) {
            MessageBox.Show($"The description is {this.Description.Text}");
            
        }

        private void RefreshButton_Click(object sender, RoutedEventArgs e) {
            

        }

        private void CheckBox_Checked(object sender, RoutedEventArgs e) {
            this.Length.Text += (string)((CheckBox)sender).Content;
            this.Length.Text += " ";
        }

        private void Finish_SelectionChanged(object sender, SelectionChangedEventArgs e) {
            if (this.Note == null) return;
            var combo = (ComboBox)sender;
            var value = (ComboBoxItem)combo.SelectedValue;
            this.Note.Text = (string)value.Content;
        }

        private void Window_Loaded(object sender, RoutedEventArgs e) {
            Finish_SelectionChanged(this.Finish, null);
        }
    }
}
