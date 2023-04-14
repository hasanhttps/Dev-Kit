#include <iostream>
#include <stdio.h>
using namespace std;

struct Person {
	char* name = new char[] {};
	char* surname = new char[] {};
};


int main() {
	FILE* file;
	while (true) {
		int choose;
		cout << "1) Log In Students\n2) Print Students\n3) Exit\n";
		cout << "Choose parametr from above : ";
		cin >> choose;
		cin.ignore(1);
		if (choose == 1) {
			char* name = new char[] {};
			char* surname = new char[] {};
			char* password = new char[] {};
			
			cout << "Please enter your name : ";
			cin.getline(name, 10);
			cout << "Please enter your surname : ";
			cin.getline(surname, 15);
			cout << "Please enter your password : ";
			cin.getline(password, 8);

			fopen_s(&file, "C:\\Users\\hasan\\OneDrive\\Masaüstü\\Log in.txt", "a+");
			for (int i = 0; i < strlen(name); i++){
				cout << name[i] << endl;
				putc(name[i], file);
			}
			putc(' ', file);
			for (int i = 0; i < strlen(surname); i++) {
				putc(surname[i], file);
			}
			putc(' ', file);
			for (int i = 0; i < strlen(password); i++) {
				putc(password[i], file);
			}
			putc('\n', file);
			fclose(file);
		}
		else if (choose = 2) {
			fopen_s(&file, "C:\\Users\\hasan\\OneDrive\\Masaüstü\\Log in.txt", "r");
			fseek(file, 0, 0);
			char symbol = getc(file);
			while (symbol != EOF) {
				cout << symbol;
				symbol = getc(file);
			}
			fclose(file);
		}
		else {
			break;
		}
	}

	/*FILE* file;
	fopen_s(&file, "C:\\Users\\hasan\\OneDrive\\Masaüstü\\Students.txt", "w+");
	Person hesen = Person{ new char[] {"Hesen"}, new char[] {"Abdullazade"} };
	Person amin = Person{ new char[] {"Amin"}, new char[] {"Bennayev"} };
	Person cavid = Person{ new char[] {"Cavid"}, new char[] {"Atamoghlanov"} };
	Person** persons = new Person * [3] {};
	*(persons[0]) = hesen;
	*(persons[1]) = amin;
	*(persons[2]) = cavid;
	cout << persons[2]->name << endl;
	for (int i = 0; i < 3 && file != nullptr; i++){
		fputs(persons[i]->name, file);
		putc(' ', file);
		fputs(persons[i]->surname, file);
		putc('\n', file);
	}
	fclose(file);
	FILE* fil = nullptr;
	fopen_s(&fil, "C:\\Users\\hasan\\OneDrive\\Masaüstü\\Students.txt", "r+");
	char symbol = getc(fil);
	while (symbol != EOF && fil != nullptr) {
		cout << symbol;
		symbol = getc(fil);
	}
	fclose(fil);*/
}