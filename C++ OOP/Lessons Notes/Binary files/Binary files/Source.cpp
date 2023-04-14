#include <iostream>
#include <conio.h>
using namespace std;

struct person {
    char* name = new char[] {""};
    char* surname = new char[] {""};
    int age;
    char* gmail = new char[] {""};
    char* password = new char[] {""};
};

int main() {
    int size = 0;
    FILE* file;
    person** persons = new person * [] {};
    try {
        fopen_s(&file, "Persons.txt", "rb");
        size = 2;
        fread(persons, sizeof(person), size, file);
        fclose(file);
    }
    catch (exception) {
        fopen_s(&file, "Persons.txt", "w");
        fclose(file);
    }
    while (true) {
        int choose;
        cout << "\t\tMENU\n";
        cout << "1) Create Person\n2) Print Persons\n3) Write file\n4) exit\n";
        cout << "Please enter the argument : ";
        cin >> choose;
        cin.ignore(1);
        if (choose == 1) {
            person* newPerson = new person;
            char* name = new char[] {""};
            char* surname = new char[] {""};
            int age;
            char* gmail = new char[] {""};
            char* password = new char[] {""};
            cout << "Please enter the name : ";
            cin >> name;
            cout << "Please enter the surname : ";
            cin >> surname;
            cout << "Please enter age : ";
            cin >> age;
            cout << "Please enter the gmail : ";
            cin >> gmail;
            cout << "Please enter the password : ";
            cin >> password;
            newPerson->name = name;
            newPerson->surname = surname;
            newPerson->age = age;
            newPerson->gmail = gmail;
            newPerson->password = password;
            persons[size] = newPerson;
            size++;
        }
        else if (choose == 2) {
            system("cls");
            cout << "\t\tPersons\n";
            for (int i = 0; i < size; i++) {
                cout << i << " Person\n";
                cout << "Name : " << persons[i]->name << endl;
                cout << "Surname : " << persons[i]->surname << endl;
                cout << "Age : " << persons[i]->age << endl;
                cout << "Gmail : " << persons[i]->gmail << endl;
                cout << "Password : " << persons[i]->password << endl << endl;
            }
        }
        else if (choose == 3) {
            fopen_s(&file, "Persons.txt", "wb");
            for (int i = 0; i < size; i++) fwrite(persons, sizeof(person), size, file);
            fclose(file);
        }
        else if (choose == 4) break;
    }
    

}