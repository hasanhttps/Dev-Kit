#include <iostream>
#include <conio.h>
using namespace std;

int userSize = 0;

int main() {
	FILE* file;
	try {
		fopen_s(&file, "C:/Users/hasan/OneDrive/Masaüstü/Size.txt", "r");
		char symbol = getc(file);
		int size = 0;
		while (symbol != EOF) {
			size = (size * 10) + (int(symbol) - 48);
			symbol = getc(file);
		}fclose(file);
		userSize = size;
	}
	catch (exception) {
		fopen_s(&file, "C:/Users/hasan/OneDrive/Masaüstü/Size.txt", "w");
		fclose(file);
	}
	while (true) {
		int choose;

		cout << "1) Sign in\n2) Sign Up\nPlease enter argument : ";
		cin >> choose;
		cin.ignore(1);
		if (choose == 1) {
			bool isCheck = true, status = false, pass = true, statusPass = false;
			char* username = new char[] {""};
			char* password = new char[] {""};
			cout << "Please enter the username : ";
			cin.getline(username, 20);
			cout << "Please enter the password : ";
			cin.getline(password, 20);
			fopen_s(&file, "C:/Users/hasan/OneDrive/Masaüstü/Sign Up.txt", "r");
			char symbol = getc(file);
			int count = 0;
			for (int i = 0; i < userSize * 2; i++) {
				isCheck = true, pass = true;
				if (symbol == ' ') {
					count++;
					symbol = getc(file);
				}
				if (count % 2 == 0 && status == false) {
					for (int j = 0; symbol != ' '; j++) {
						if (username[j] != symbol) isCheck = false;
						symbol = getc(file);
					}
					if (isCheck) status = true;
				}
				else if (statusPass == false) {
					for (int j = 0; symbol != ' '; j++) {
						if (password[j] != symbol) pass = false;
						symbol = getc(file);
					}
					if (pass) statusPass = true;
				}
				if (status == true && statusPass == true) break;
			}
			if (status == true && statusPass == true) cout << "Welcome Home" << endl;
			else cout << "Datas are not valid !" << endl;
		}
		else if (choose == 2) {
			char* username = new char[] {""};
			char* password = new char[] {""};
			cout << "Please enter the username : ";
			cin.getline(username, 20);
			cout << "Please enter the password : ";
			cin.getline(password, 20);
			fopen_s(&file, "C:/Users/hasan/OneDrive/Masaüstü/Sign Up.txt", "a");
			fputs(username, file);
			putc(' ', file);
			fputs(password, file);
			putc(' ', file);
			fclose(file);
			userSize++;
			fopen_s(&file, "C:/Users/hasan/OneDrive/Masaüstü/Size.txt", "w");
			while (true) {
				putc((userSize % 10) + 48, file);
				if (userSize / 10 == 0) break;
				userSize /= 10;
			}
			fclose(file);
		}
	}
	
	
}