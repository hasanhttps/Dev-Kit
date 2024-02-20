using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static Patient_Manager.models.JsonHandling;

namespace Patient_Manager.models {
    public class Patient : IDisposable {

        // Static Fields

        public static List<Patient> patients = new();

        // Properties

        public int CardId { get; set; }
        public string? Name { get; set; }
        public string? Surname { get; set; }
        public string? FatherName { get; set; }
        public string? Sick { get; set; }
        public int? Day { get; set; }
        public int? Month { get; set; }
        public int? Year { get; set; }

        // Constructors

        public Patient() {
            
        }
        public Patient(int cardId, string name, string surname,
            string fatherName, string sick, int day, int month, int year) : this() { 
            CardId = cardId;
            Name = name;
            Surname = surname;
            FatherName = fatherName;
            Sick = sick;
            Day = day;
            Month = month;
            Year = year;
        }

        // Destructor

        public override string ToString() {
            return $"{Name} {Surname} {FatherName} {Year}\n";
        }

        public void Dispose() {
            WriteData<List<Patient>>(Patient.patients, "patients");
        }

    }
}
