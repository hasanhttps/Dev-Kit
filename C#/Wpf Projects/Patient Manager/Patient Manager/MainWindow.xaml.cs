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
using Patient_Manager.models;
using static Patient_Manager.models.JsonHandling;

namespace Patient_Manager {
    public partial class MainWindow : Window {
        Patient currentPatient = new();
        private List<Patient> patients = new();

        public MainWindow() {
            InitializeComponent();
            Patient.patients = ReadData<List<Patient>>("patients");
            DataContext = new Patient();
        }

        private void SerachButton_Click(object sender, RoutedEventArgs e) {
            checkname();
        }

        private void SaveButton_Click(object sender, RoutedEventArgs e) {

            string[] fullname = this.fullname.Text.Split(' ');
            string name = fullname[0];
            string surname = fullname[1];
            string fatherName = fullname[2];

            string[] birthdate = this.birthdate.Text.Split('/');
            int day = Convert.ToInt32(birthdate[0]);
            int month = Convert.ToInt32(birthdate[1]);
            int year = Convert.ToInt32(birthdate[2]);

            Patient newpatient = new(123, name, surname, fatherName, "yoxdur", day, month, year);
            Patient.patients.Add(newpatient);

            WriteData<List<Patient>>(Patient.patients, "patients");
        }

        //private void Gender_SelectionChanged(object sender, SelectionChangedEventArgs e) { 

        //}

        private void fullname_TextChanged(object sender, TextChangedEventArgs e) {
            checkname();
        }

        private void checkname() {
            patients.Clear();
            if (this.fullname.Text.Length == 0) {
                dataListBox.Items.Refresh();
                return;
            }
            string text = this.fullname.Text;
            text += " ";
            string[] fullname = text.Split(' ');
            string name = fullname[0];
            string? surname = null;
            string? fatherName = null;
            int len = name.Length;
            int lens = 0;
            int lenf = 0;

            try {
                surname = fullname[1];
                fatherName = fullname[2];
                lens = surname.Length;
                lenf = fatherName.Length;
            }catch(Exception ex) {

            }

            foreach (var patient in Patient.patients) {
                if (patient.Name!.Length >= len && patient.Name!.Substring(0, len).ToUpper() == name.ToUpper()) {
                    if (lens > 0) {
                        if (patient.Surname!.Length >= lens && patient.Surname!.Substring(0, lens).ToUpper() == surname!.ToUpper()) {
                            if (lenf > 0) {
                                if (patient.FatherName!.Length >= lenf && patient.FatherName!.Substring(0, lenf).ToUpper() == fatherName!.ToUpper()) {
                                    patients.Add(patient);
                                }
                            }else patients.Add(patient);
                        }
                    }else patients.Add(patient);
                }
            }

            dataListBox.Items.Refresh();
            dataListBox.ItemsSource = patients;
        }

        private void selectedindex_Changed(object sender, EventArgs e) {
            MessageBox.Show("Selected Patient", "Info", MessageBoxButton.OK, MessageBoxImage.Information, MessageBoxResult.OK);

        }
    }
}