using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.IO;
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

namespace Rich_Text_Editor
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        string allText = "";
        public MainWindow()
        {
            InitializeComponent();
        }

        private void FileDialogButton_Click(object sender, RoutedEventArgs e)
        {
            
            OpenFileDialog openFileDialog = new();
            openFileDialog.FileName = FileDialogTextBox.Text;
            openFileDialog.Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
            if(openFileDialog.ShowDialog()==true)
            {
                var str = File.ReadAllText(openFileDialog.FileName);
                MainTextBox.Text = str;
                FileDialogTextBox.Text = openFileDialog.FileName;   
            } 
            
        }
    }
}
