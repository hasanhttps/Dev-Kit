#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
#include "Prototypes.h";
#include "Functions.h";
#define Color 9

int main() {
	int choose = 0;
	int set[] = { 7,7,7,7 };// Default Colors
	logo();// It Print BattleShip Label.
	while (true){
		if (choose == 0) set[0] = Color;// It is color to our arrey
		if (choose == 1) set[1] = Color;// It is color to our arrey
		if (choose == 2) set[2] = Color;// It is color to our arrey
		if (choose == 3) set[3] = Color;// It is color to our arrey
		menu(set);
		char asciiArrow = _getch();
		set[0] = 7;// Default Color Datas
		set[1] = 7;// Default Color Datas
		set[2] = 7;// Default Color Datas
		set[3] = 7;// Default Color Datas
		if (asciiArrow == 72) {
			if (choose != 0) --choose;
			else choose = 3;
		}
		if (asciiArrow == 80) {
			if (choose != 3) ++choose;
			else choose = 0;
		}
		if (asciiArrow == '\r') {
			system("cls");
			if (choose == 0) {
				system("pause");
				area();
			}
			if (choose == 1) cout << "Help" << endl;
			if (choose == 2) cout << "Settings" << endl;
			if (choose == 3) {
				exit(1);
			}
			break;
		}
	}
}
