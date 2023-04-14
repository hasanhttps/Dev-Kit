#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <thread>
using namespace std;

#include "Contact.h"
#include "Database.h"
#include "Functions.h"


int main() {
	string fileName;
	cout << "Please enter the file name : ";// Hesen yazin .txt yazmaga ehtiyyac yoxdur.
	cin >> fileName;
	fileName.append(".txt");

	string file = "notepad \"" + fileName + "\"";
	thread worker(system, file.c_str());

	Database* database = new Database();
	setDatas(fileName, database);

	while (true) {
		system("cls");
		int choose;
		cout << "Contacts\n\n\n";
		cout << "\t\tAdd New Contact    [1]\n\t\tDelete Contact     [2]\n\t\tShow contacts      [3]\n\t\tSearch contact     [4]\n\t\tExit               [0]\n\n";
		cout << "Please enter the number : ";
		cin >> choose;
		system("cls");

		if (choose == 1) {
			Contact* newContact;
			string name;
			string gmail;
			string number;
			bool isName;
			cout << "Do you want to register by name [1] or gmail [0] : ";
			cin >> isName;
			if (isName) {
				cout << "Please enter the name : ";
				cin >> name;
			}
			else {
				cout << "Please enter the gmail : ";
				cin >> gmail;
			}
			cout << "Please enter the phone number : ";
			cin >> number;
			if (isName) newContact = new Contact(name, number);
			else newContact = new Contact(gmail, number, isName);
			database->addContact(newContact);
		}
		else if (choose == 2) {
			int id;
			database->showContacts();
			cout << "Please enter the id : ";
			cin >> id;
			if (id < 0 || id > database->getConatcts().size()) {
				cout << "Id couldn't be found!" << endl;
			}
			else database->deleteContact(database->getConatcts()[id - 1]);
		}
		else if (choose == 3) {
			database->showContacts();
			system("pause");
		}
		else if (choose == 4) {
			cout << "\t\tSearch by id        [1]\n\t\tSearch by name      [2]\n\t\tSearch by gmail     [3]\n\t\tSearch by number    [4]\n\t\tExit                [0]\n\n";
			cout << "Please enter the number : ";
			cin >> choose;
			if (choose == 1) {
				database->showContacts();
				cout << "Please enter the id : ";
				cin >> choose;
				if (choose < 1 || choose > database->getConatcts().size()) {
					cout << "It's not valid id !";
				}
				else {
					Contact* foundContact = database->searchById(choose);
					cout << *foundContact << endl;
					system("pause");
				}
			}
			else if (choose == 2) {
				string name;
				cout << "Please enter the name : ";
				cin >> name;
				Contact* foundContact = database->searchByName(name);
				cout << *foundContact << endl;
				system("pause");
			}
			else if (choose == 3) {
				string gmail;
				cout << "Please enter the gmail : ";
				cin >> gmail;
				Contact* foundContact = database->searchByGmail(gmail);
				cout << *foundContact << endl;
				system("pause");
			}
			else if (choose == 4) {
				string number;
				cout << "Please enter the number : ";
				cin >> number;
				Contact* foundContact = database->searchByNumber(number);
				cout << *foundContact << endl;
				system("pause");
			}
			else if (choose == 0) {}
		}
		else if (choose == 0) break;
	}
	string filec = "taskkill /IM Notepad.exe >nul";
	worker.detach();
	system(filec.c_str());
	system("cls");
	saveChange(fileName, database);

}