#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
	map<string, string> englishAz;

	while (true) {
		int choose;
		cout << "Please enter the number : ";
		cin >> choose;
		cin.ignore(1);
		if (choose == 1) {
			int count = 0;
			string english, az;
			cout << "Please enter the word : ";
			getline(cin, english);
			for (auto& i : englishAz) {
				if (i.first == english) cout << "This Data include in the dictionary!";
				else count++;
			}
			if (count == englishAz.size()) {
				cout << "Please enter the translation : ";
				getline(cin, az);
				englishAz[english] = az;

			}
		}
		else if (choose == 2) {
			string english, az;
			cout << "Please enter the word : ";
			getline(cin, english);
			cout << "Please enter the new translation : ";
			getline(cin, az);
			englishAz[english] = az;
		}
		else if (choose == 3) {
			for (auto& i : englishAz) {
				cout << i.first << " : " << i.second << endl;
			}
		}
		else if (choose == 0) break;

	}

}