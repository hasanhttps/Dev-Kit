#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <Windows.h>
#include <thread>
using namespace std;
// Global Variables

int row = 14, column = 14, Color = 12, defColor = 7, curColor = 2, notField = 5, hitCol = 10, missC = 12, vanished = 9;// Default Area Size and Color
int destroyer = 4, submarine = 3, battleship = 2, carrier = 1, bd = 4, bs = 3, bb = 2, bc = 1, logoC = 0, logogcolor = 5, botlevel = 2;// Ship counts and types
int playerScore = destroyer + submarine * 2 + battleship * 3 + carrier * 4, botScore = bd + bs * 2 + bb * 3 + bc * 4;// Scores
char symbol = 250, ship = 208, cursor = 42, dest = 126;// Choose Symbol
bool start = true, asistMode = true, killed = false, notPlace = false;

#include "Prototypes.h";
#include "Functions.h";
#include "Settings.h";
#include "Logos.h";
#include "Animations.h";

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
			if (choose == 0) {
				animations();
				color(defColor);
				area();
				system("cls");
				logo();
			}
			if (choose == 1) {
				help();
				system("cls");
				color(defColor);
				logo();
			}
			if (choose == 2) {
				settings();
				system("cls");
				color(defColor);
				logo();
			}
			if (choose == 3) {
				exit(1);
			}
		}
	}
}
