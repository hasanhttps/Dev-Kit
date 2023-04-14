#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <Windows.h>
using namespace std;

// Global Variables

int row = 19, column = 19, Color = 12, defColor = 7, curColor = 2, notField = 5, hitCol = 10, missC = 12, vanished = 9;// Default Area Size and Color
int destroyer = 4, submarine = 3, battleship = 2, carrier = 1, bd = 4, bs = 3, bb = 2, bc = 1;// Ship counts and types
int playerScore = destroyer + submarine * 2 + battleship * 3 + carrier * 4, botScore = bd + bs * 2 + bb * 3 + bc * 4;// Scores
char symbol = 250, ship = 208, cursor = 42;// Choose Symbol
bool start = true;

#include "Prototypes.h";
#include "Functions.h";
#include "Settings.h";

int main() {
	srand(time(0));
	int choose = 0;
	int set[4] = { defColor,defColor,defColor,defColor };// Default Colors for menu lines
	logo();// It Print BattleShip Label.
	while (true) {
		if (choose == 0) set[0] = Color;// It is color to our arrey
		if (choose == 1) set[1] = Color;// It is color to our arrey
		if (choose == 2) set[2] = Color;// It is color to our arrey
		if (choose == 3) set[3] = Color;// It is color to our arrey
		menu(set);
		int asciiArrow = _getch();
		set[0] = defColor;// Default Color Datas
		set[1] = defColor;// Default Color Datas
		set[2] = defColor;// Default Color Datas
		set[3] = defColor;// Default Color Datas
		if (asciiArrow == 72 || asciiArrow == 119 || asciiArrow == 87) {// Up Arrow
			if (choose != 0) --choose;
			else choose = 3;
		}
		if (asciiArrow == 80 || asciiArrow == 115 || asciiArrow == 83) {// Down Arrow
			if (choose != 3) ++choose;
			else choose = 0;
		}
		if (asciiArrow == '\r') {// Enter ascii code
			system("cls");
			color(7);
			if (choose ==  0) {
				system("pause");
				area();
			}
			if (choose == 1) cout << "Help" << endl;
			if (choose == 2) {
				settings();
			}
			if (choose == 3) {
				exit(1);
			}
			break;
		}
	}
}
