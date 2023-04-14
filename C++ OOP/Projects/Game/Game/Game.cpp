#include <iostream>
#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <Windows.h>
using namespace std;

// Global Variables

int row = 15, column = 15, Color = 12;// Default Area Size and Color
int destroyer = 4, submarine = 3, battleship = 2, carrier = 1;
char symbol = 250, ship = 208;// Choose Symbol

void logo();
inline void color();
void gotoXy();
void menu(int*);
void area();
void settings();
void printAreas(char**, char**);
void printArea(char**);
void fillChoose(char**&);
void fillRand(char**&);
void fillManual(char**&);
void showChange(char**&, int);
void sleep(float);
bool check(char, int, char**);
bool checkSub(char, int, char**);
bool checkRotateS(char, int, char**);
bool checkBShip(char, int, char**);
bool checkRotateB(char, int, char**);
bool checkC(char, int, char**);
bool checkRotateC(char, int, char**);

int locX, locY;

void logo() {
	char** labelDesign_italic = new char* [] {
		new char[] {"  ______      ______      ______      ______      __        ______      ______      __  __      __      ______"},
			new char[] {" /\\  == \\    /\\  __ \\    /\\__  _\\    /\\__  _\\    /\\ \\      /\\  ___\\    /\\  ___\\    /\\ \\_\\ \\    /\\_\\    /\\  == )"},
			new char[] {" \\ \\  __<    \\ \\  __ \\   \\/_/\\ \\/    \\/_/\\ \\/    \\ \\ \\____ \\ \\  __\\    \\ \\___  \\   \\ \\  __ \\   \\ \\ \\   \\ \\ \\-"},
			new char[] {"  \\ \\_____\\   \\ \\_\\ \\_\\     \\ \\_\\       \\ \\_\\     \\ \\_____\\ \\ \\_____\\   \\ \\_____\\   \\ \\_\\ \\_\\   \\ \\_\\   \\ \\ \\"},
			new char[] {"   \\/_____/    \\/_/ /_/      \\/_/        \\/_/      \\/_____/  \\/_____/    \\/_____/    \\/_/\\/_/    \\/_/    \\/_/"}
	};
	for (int i = 0; i < 5; i++) cout << labelDesign_italic[i] << endl;
	delete[] labelDesign_italic;
}

inline void color(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoXy(int x, int y) {
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void menu(int* set) {
	int x = 52;
	int y = 14;
	gotoXy(x, y);
	color(set[0]);
	cout << "New Game";
	gotoXy(x, y + 1);
	color(set[1]);
	cout << "Help";
	gotoXy(x, y + 2);
	color(set[2]);
	cout << "Settings";
	gotoXy(x, y + 3);
	color(set[3]);
	cout << "Exit";
	gotoXy(2, 1);
}

void area() {
	system("cls");
	char** playerArea = new char* [row] {};
	for (int i = 0; i < row; i++) {
		playerArea[i] = new char[column] {};
		for (int j = 0; j < column; j++) {
			if ((j == 0 || j == column - 1) && i != 0 && i != row - 1) playerArea[i][j] = 186;
			else if (i == 0 && j == 0) playerArea[i][j] = 201;
			else if (i == 0 && j == column - 1) playerArea[i][j] = 187;
			else if (j > 0 && j < column - 1 && i == 0 || i == row - 1 && j > 0 && j < column - 1)  playerArea[i][j] = 205;
			else if (i == row - 1 && j == column - 1) playerArea[i][j] = 188;
			else if (i == row - 1 && j == 0) playerArea[i][j] = 200;
			else  playerArea[i][j] = ' ';
		}
	}
	fillChoose(playerArea);
	char** botArea = new char* [row] {};
	for (int i = 0; i < row; i++) {
		botArea[i] = new char[column] {};
		for (int j = 0; j < column; j++) {
			if ((j == 0 || j == column - 1) && i != 0 && i != row - 1) botArea[i][j] = 186;
			else if (i == 0 && j == 0) botArea[i][j] = 201;
			else if (i == 0 && j == column - 1) botArea[i][j] = 187;
			else if (j > 0 && j < column - 1 && i == 0 || i == row - 1 && j > 0 && j < column - 1)  botArea[i][j] = 205;
			else if (i == row - 1 && j == column - 1) botArea[i][j] = 188;
			else if (i == row - 1 && j == 0) botArea[i][j] = 200;
			else  botArea[i][j] = ' ';
		}
	}
	printAreas(playerArea, botArea);

}

void delay(float seconds) {
	clock_t startClock = clock();
	float secondsAhead = seconds * CLOCKS_PER_SEC;
	// do nothing until the elapsed time has passed.
	while (clock() < startClock + secondsAhead);
	return;
}

void settings() {// You can change all variables from there
	/*char arrow = _getch();
	switch (arrow){
	default:
		break;
	}*/
}

void printArea(char** area) {
	cout << setw(column / 2 + 15) << "Player's Board" << endl;
	for (int i = 0; i < row; i++) {
		if (i > 0 && i < row - 1) cout << setw(2) << row - 1 - i;
		else cout << "  ";
		if (i == 0) {
			cout << "  ";
			for (int i = 0; i < column - 2; i++) cout << char(i + 65) << ' ';
			cout << "\n  ";
		}
		for (int j = 0; j < column; j++) {
			if (i == 0 && j < column - 1 || i == row - 1 && j < column - 1) cout << area[i][j] << char(205);
			else cout << area[i][j] << ' ';
		}cout << endl;
	}
}

void printAreas(char** area, char** botArea) {
	printArea(area);
	gotoXy(column + 18, 0);
	cout << setw(column + 15) << "Bot's Board" << endl;
}

void fillChoose(char**& playerArea) {
	cout << "\t\tWELCOME TO BATTLESHIPS\n";
	cout << "Would you like fill your area manual or random ? " << endl;
	bool status = false, enter = false;
	int set[3] = { 7, 7, 7 };
	set[0] = Color;
	gotoXy(1, 2);
	color(set[0]);
	cout << symbol << " <<Random>>";
	gotoXy(1, 3);
	color(set[1]);
	cout << " " << " <<Manually>>";
	while (true) {
		int arrow = _getch();
		if (status == true) set[1] = Color;
		else set[0] = Color;
		set[0] = 7;// Default all lines
		set[1] = 7;
		switch (arrow) {
		case 72:// Up
			set[0] = Color;
			gotoXy(1, 2);
			color(set[0]);
			cout << symbol << " <<Random>>";
			gotoXy(1, 3);
			color(set[1]);
			cout << " " << " <<Manually>>";
			status = false;
			break;
		case 80:// Down
			set[1] = Color;
			gotoXy(1, 2);
			color(set[0]);
			cout << " " << " <<Random>>";
			gotoXy(1, 3);
			color(set[1]);
			cout << symbol << " <<Manually>>";
			status = true;
			break;
		case '\r':
			enter = true;
			break;
		default:
			break;
		}
		if (enter == true) break;
	}
	system("cls");
	if (status == false) fillRand(playerArea);
	else fillManual(playerArea);
}

void fillRand(char**& area) {

}

void showChange(char**& area, int choose) {
	int command, num = -1;
	bool status = false, rotate = true;
	system("cls");

	if (choose == 0 && destroyer != 0) {
		destroyer--;
		num = destroyer;
		for (int i = 1; i < row - 1; i++) {
			for (int j = 1; j < column - 1; j++) {
				locX = i, locY = j;
				if (area[i][j] != ship && area[i - 1][j - 1] != ship && area[i - 1][j] != ship && area[i - 1][j + 1] != ship && area[i][j - 1] != ship &&
					area[i][j + 1] != ship && area[i + 1][j - 1] != ship && area[i + 1][j] != ship && area[i + 1][j + 1] != ship && locY < column - 1) status = true;
				if (status) break;
			}if (status) break;
		}status = false;
		area[locX][locY] = ship;
	}
	else if (choose == 1 && submarine != 0) {
		submarine--;
		num = submarine;
		for (int i = 1; i < row - 1; i++) {
			for (int j = 1; j < column - 1; j++) {
				locX = i, locY = j;
				if (area[i][j] != ship && area[i - 1][j - 1] != ship && area[i - 1][j] != ship && area[i - 1][j + 1] != ship && area[i - 1][j + 2] != ship &&
					area[i][j - 1] != ship && area[i][j + 1] != ship && area[i][j + 2] != ship && area[i + 1][j - 1] != ship && area[i + 1][j] != ship &&
					area[i + 1][j + 1] != ship && area[i + 1][j + 2] != ship && locY < column - 2) status = true;
				if (status) break;
			}if (status) break;
		}status = false;
		area[locX][locY] = ship;
		area[locX][locY + 1] = ship;
	}
	else if (choose == 2 && battleship != 0) {
		battleship--;
		num = battleship;
		for (int i = 1; i < row - 1; i++) {
			for (int j = 1; j < column - 1; j++) {
				locX = i, locY = j;
				if (area[i][j] != ship && area[i - 1][j - 1] != ship && area[i - 1][j] != ship && area[i - 1][j + 1] != ship && area[i - 1][j + 2] != ship &&
					area[i - 1][j + 3] != ship && area[i][j - 1] != ship && area[i][j + 1] != ship && area[i][j + 2] != ship && area[i][j + 3] != ship &&
					area[i + 1][j - 1] != ship && area[i + 1][j] != ship && area[i + 1][j + 1] != ship && area[i + 1][j + 2] != ship && area[i + 1][j + 3] != ship && locY < column - 3) status = true;
				if (status) break;
			}if (status) break;
		}status = false;
		for (int i = 0; i < 3; i++) area[locX][locY + i] = ship;
	}
	else if (choose == 3 && carrier != 0) {
		carrier--;
		num = carrier;
		for (int i = 1; i < row - 1; i++) {
			for (int j = 1; j < column - 1; j++) {
				locX = i, locY = j;
				if (area[i][j] != ship && area[i - 1][j - 1] != ship && area[i - 1][j] != ship && area[i - 1][j + 1] != ship && area[i - 1][j + 2] != ship &&
					area[i - 1][j + 3] != ship && area[i - 1][j + 4] != ship && area[i][j - 1] != ship && area[i][j + 1] != ship && area[i][j + 2] != ship && area[i][j + 3] != ship &&
					area[i][j + 4] != ship && area[i + 1][j - 1] != ship && area[i + 1][j] != ship && area[i + 1][j + 1] != ship && area[i + 1][j + 2] != ship && area[i + 1][j + 3] != ship && area[i + 1][j + 4] != ship && locY < column - 4) status = true;
				if (status) break;
			}if (status) break;
		}status = false;
		for (int i = 0; i < 4; i++) area[locX][locY + i] = ship;
	}printArea(area);

	while (num != -1) {
		system("cls");
		printArea(area);
		delay(0.025);
		command = _getch();
		switch (command) {
		case 72:
			if (rotate == false) {
				if (choose == 1) {
					if (checkRotateS('r', -1, area)) {
						area[locX][locY] = ' ';
						area[--locX - 1][locY] = ship;
					}
					else cout << '\a';// It's signal alert.
				}
				else if (choose == 2) {
					if (checkRotateB('r', -2, area)) {
						area[locX][locY] = ' ';
						area[--locX - 2][locY] = ship;
					}
					else cout << '\a';
				}
				else if (choose == 3) {
					if (checkRotateC('r', -5, area)) {
						area[locX][locY] = ' ';
						area[--locX - 3][locY] = ship;
					}
					else cout << '\a';
				}
			}
			else if (choose == 0) {
				if (check('r', -1, area)) {
					area[locX][locY] = ' ';
					area[--locX][locY] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 1) {
				if (checkSub('r', -1, area)) {
					area[locX][locY] = ' ';
					area[locX][locY + 1] = ' ';
					area[--locX][locY] = ship;
					area[locX][locY + 1] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 2) {
				if (checkBShip('r', -1, area)) {
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ' '; locX--;
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 3) {
				if (checkC('r', -1, area)) {
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ' '; locX--;
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			break;
		case 75:// Left
			if (rotate == false) {
				if (choose == 1) {
					if (checkRotateS('c', -1, area)) {
						area[locX][locY] = ' ';
						area[locX - 1][locY] = ' ';
						area[locX][--locY] = ship;
						area[locX - 1][locY] = ship;
					}
					else cout << '\a';
				}
				else if (choose == 2) {
					if (checkRotateB('c', -2, area)) {
						for (int i = 0; i < 3; i++) area[locX - i][locY] = ' '; locY--;
						for (int i = 0; i < 3; i++) area[locX - i][locY] = ship;
					}
					else cout << '\a';
				}
				else if (choose == 3) {
					if (checkRotateC('c', -2, area)) {
						for (int i = 0; i < 4; i++) area[locX - i][locY] = ' '; locY--;
						for (int i = 0; i < 4; i++) area[locX - i][locY] = ship;
					}
					else cout << '\a';
				}
			}
			else if (choose == 0) {
				if (check('c', -1, area)) {
					area[locX][locY] = ' ';
					area[locX][--locY] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 1) {
				if (checkSub('c', -1, area)) {
					area[locX][locY + 1] = ' ';
					area[locX][--locY] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 2) {
				if (checkBShip('c', -1, area)) {
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ' '; locY--;
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 3) {
				if (checkC('c', -1, area)) {
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ' '; locY--;
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			break;
		case 77:// Right
			if (rotate == false) {
				if (choose == 1) {
					if (checkRotateS('c', 1, area)) {
						area[locX][locY] = ' ';
						area[locX - 1][locY] = ' ';
						area[locX][++locY] = ship;
						area[locX - 1][locY] = ship;
					}
					else cout << '\a';
				}
				else if (choose == 2) {
					if (checkRotateB('c', 2, area)) {
						for (int i = 0; i < 3; i++) area[locX - i][locY] = ' '; locY++;
						for (int i = 0; i < 3; i++) area[locX - i][locY] = ship;
					}
					else cout << '\a';
				}
				else if (choose == 3) {
					if (checkRotateC('c', 2, area)) {
						for (int i = 0; i < 4; i++) area[locX - i][locY] = ' '; locY++;
						for (int i = 0; i < 4; i++) area[locX - i][locY] = ship;
					}
					else cout << '\a';
				}

			}
			else if (choose == 0) {
				if (check('c', 1, area)) {
					area[locX][locY] = ' ';
					area[locX][++locY] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 1) {
				if (checkSub('c', 1, area)) {
					area[locX][locY] = ' ';
					area[locX][locY + 1] = ' ';
					area[locX][++locY] = ship;
					area[locX][locY + 1] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 2) {
				if (checkBShip('c', 3, area)) {
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ' '; locY++;
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 3) {
				if (checkC('c', 4, area)) {
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ' '; locY++;
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			break;
		case 80:
			if (rotate == false) {
				if (choose == 1) {
					if (checkRotateS('r', 1, area)) {
						area[locX - 1][locY] = ' ';
						area[++locX][locY] = ship;
					}
					else cout << '\a';
				}
				else if (choose == 2) {
					if (checkRotateB('r', 1, area)) {
						area[locX - 2][locY] = ' '; locX++;
						area[locX][locY] = ship;
					}
					else cout << '\a';
				}
				else if (choose == 3) {
					if (checkRotateC('r', 2, area)) {
						area[locX - 3][locY] = ' '; locX++;
						area[locX][locY] = ship;
					}
					else cout << '\a';
				}
			}
			else if (choose == 0) {
				if (check('r', 1, area)) {
					area[locX][locY] = ' ';
					area[++locX][locY] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 1) {
				if (checkSub('r', 1, area)) {
					area[locX][locY] = ' ';
					area[locX][locY + 1] = ' ';
					area[++locX][locY] = ship;
					area[locX][locY + 1] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 2) {
				if (checkBShip('r', 1, area)) {
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ' '; locX++;
					for (int i = 0; i < 3; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 3) {
				if (checkC('r', 1, area)) {
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ' '; locX++;
					for (int i = 0; i < 4; i++) area[locX][locY + i] = ship;
				}
				else cout << '\a';
			}
			break;
		case 32:
			if (choose == 1) {
				if (locY != column - 2 && area[locX][locY + 2] != ship && area[locX - 1][locY + 2] != ship && area[locX + 1][locY + 2] != ship) {
					rotate = true;
					area[locX - 1][locY] = ' ';
					area[locX][locY + 1] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 2) {
				if (locY < column - 3 && area[locX - 1][locY + 2] != ship && area[locX - 1][locY + 3] != ship && area[locX][locY + 2] != ship && area[locX][locY + 3] != ship && area[locX + 1][locY + 2] != ship && area[locX + 1][locY + 3] != ship) {
					rotate = true;
					for (int i = 1; i < 3; i++) area[locX][locY + i] = ship;
					for (int i = 1; i < 3; i++) area[locX - i][locY] = ' ';
				}
				else cout << '\a';
			}
			else if (choose == 3) {
				if (locY < column - 4 && area[locX - 1][locY + 2] != ship && area[locX - 1][locY + 3] != ship && area[locX - 1][locY + 4] != ship && area[locX][locY + 2] != ship && area[locX][locY + 3] != ship && area[locX][locY + 4] != ship && area[locX + 1][locY + 2] != ship && area[locX + 1][locY + 3] != ship && area[locX + 1][locY + 4] != ship) {
					rotate = true;
					for (int i = 1; i < 4; i++) area[locX][locY + i] = ship;
					for (int i = 1; i < 4; i++) area[locX - i][locY] = ' ';
				}
				else cout << '\a';
			}
			break;
		case 82:
		case 114:
			if (choose == 1) {
				if (locX != 1 && area[locX - 2][locY] != ship && area[locX - 2][locY + 1] != ship && area[locX - 2][locY - 1] != ship) {
					rotate = false;
					area[locX][locY + 1] = ' ';
					area[locX - 1][locY] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 2) {
				if (locX > 2 && area[locX - 2][locY] != ship && area[locX - 2][locY - 1] != ship && area[locX - 2][locY + 1] != ship && area[locX - 3][locY] != ship && area[locX - 3][locY - 1] != ship && area[locX - 3][locY + 1] != ship) {
					rotate = false;
					for (int i = 1; i < 3; i++) area[locX][locY + i] = ' ';
					for (int i = 1; i < 3; i++) area[locX - i][locY] = ship;
				}
				else cout << '\a';
			}
			else if (choose == 3) {
				if (locX > 3 && area[locX - 2][locY] != ship && area[locX - 2][locY - 1] != ship && area[locX - 2][locY + 1] != ship && area[locX - 3][locY] != ship && area[locX - 3][locY - 1] != ship && area[locX - 3][locY + 1] != ship && area[locX - 4][locY] != ship && area[locX - 4][locY - 1] != ship && area[locX - 4][locY + 1] != ship) {
					rotate = false;
					for (int i = 1; i < 4; i++) area[locX][locY + i] = ' ';
					for (int i = 1; i < 4; i++) area[locX - i][locY] = ship;
				}
				else cout << '\a';
			}
			break;
		case '\r':
			status = true;
			break;
		default:
			break;
		}if (status) break;
	}
}

bool check(char checkVal, int change, char** area) {
	if (checkVal == 'r') if (locX + change < row - 1 && locX + change > 0 && area[locX + 2 * change][locY] != ship && area[locX + change][locY] != ship &&
		area[locX + 2 * change][locY + 1] != ship && area[locX + 2 * change][locY - 1] != ship) return true;
	if (checkVal == 'c') if (locY + change < column - 1 && locY + change > 0 && area[locX][locY + 2 * change] != ship && area[locX][locY + change] != ship &&
		area[locX + 1][locY + 2 * change] != ship && area[locX - 1][locY + 2 * change] != ship) return true;
	return false;
}

bool checkSub(char checkV, int change, char** area) {
	if (checkV == 'r') if (check('r', change, area) && area[locX + 2 * change][locY + 2] != ship) return true;
	if (change == 1 && checkV == 'c') if (locY + 1 < column - 2 && area[locX][locY + 2] != ship && area[locX][locY + 3] != ship &&
		area[locX - 1][locY + 3] != ship && area[locX + 1][locY + 3] != ship) return true;
	if (change == -1 && checkV == 'c') if (locY - 1 > 0 && area[locX][locY - 1] != ship && area[locX][locY - 2] != ship &&
		area[locX - 1][locY - 2] != ship && area[locX + 1][locY - 2] != ship) return true;
	return false;
}

bool checkRotateS(char checkVal, int change, char** area) {
	if (change == -1 && checkVal == 'r') if (locX - 1 + change > 0 && area[locX + 2 * change][locY] != ship && area[locX + 3 * change][locY + change] != ship && area[locX + 3 * change][locY + change * -1] != ship &&
		area[locX + 3 * change][locY] != ship) return true;
	if (change == 1 && checkVal == 'r') if (locX - 1 + change < row - 2 && area[locX + 1][locY] != ship && area[locX + 2][locY] != ship && area[locX + 2][locY - 1] != ship && area[locX + 2][locY + 1] != ship) return true;
	if (checkVal == 'c') if (locY + change < column - 1 && locY + change > 0 && area[locX][locY + change] != ship && area[locX - 1][locY + change] != ship && area[locX - 1][locY + 2 * change] != ship &&
		area[locX][locY + 2 * change] != ship && area[locX - 2][locY + 2 * change] != ship && area[locX + 1][locY + 2 * change] != ship) return true;
	return false;
}

bool checkBShip(char checkV, int change, char** area) {
	int modul; if (change == 3) modul = 1; else modul = -1;
	if (checkV == 'r') if (area[locX + change][locY + 1] != ship && area[locX + change][locY + 2] != ship && checkSub('r', change, area) && area[locX + 2 * change][locY + 3] != ship) return true;
	if (checkV == 'c') if (locY + change < column - 1 && locY + change > 0 && area[locX][locY + change] != ship && area[locX][locY + change + modul] != ship && area[locX - 1][locY + change + modul] != ship &&
		area[locX + 1][locY + change + modul] != ship) return true;
	return false;
}

bool checkRotateB(char checkV, int change, char** area) {
	if (checkV == 'r') if (locX + change > 1 && locX + change < row - 1 && area[locX + 2 * change][locY - 1] != ship && area[locX + 2 * change][locY] != ship && area[locX + 2 * change][locY + 1] != ship) return true;
	if (checkV == 'c') if (locY + change < column && locY + change > 0 && area[locX - 3][locY + change] != ship && area[locX - 2][locY + change] != ship && area[locX - 1][locY + change] != ship && area[locX][locY + change] != ship && area[locX + 1][locY + change] != ship) return true;
	return false;
}

bool checkC(char checkV, int change, char** area) {
	int modul; if (change == 4) modul = 1; else modul = -1;
	if (checkV == 'r') if (checkBShip('r', change, area) && area[locX + 2 * change][locY + 4] != ship && locX + change > 0) return true;
	if (checkV == 'c') if (locY + change < column && locY + change > 0 && area[locX][locY + change] != ship && area[locX][locY + change + modul] != ship && area[locX - 1][locY + change + modul] != ship &&
		area[locX + 1][locY + change + modul] != ship) return true;
	return false;
}

bool checkRotateC(char checkV, int change, char** area) {
	if (checkV == 'r') if (locX + change >= 0 && locX + change < row && area[locX + change][locY - 1] != ship && area[locX + change][locY] != ship && area[locX + change][locY + 1] != ship) return true;
	if (checkV == 'c') if (checkRotateB('c', change, area) && area[locX - 4][locY + change] != ship) return true;
	return false;
}

void fillManual(char**& area) {
	color(7);// Change color for new frame.
	printArea(area);// For print area

	int set[4] = { 7, 7, 7, 7 }, choose = 0;// Initializing check datas
	bool status = false;

	while (true) {
		if (choose == 0) set[0] = Color;
		if (choose == 1) set[1] = Color;
		if (choose == 2) set[2] = Color;
		if (choose == 3) set[3] = Color;
		gotoXy(0, row + 3);
		color(7);
		cout << "Remaining Fleets :\n";
		color(set[0]);
		if (choose == 0) cout << symbol << " <<Destroyer - 1>> " << char(176) << " " << destroyer << endl;
		else cout << " " << " <<Destroyer - 1>> " << char(176) << " " << destroyer << endl;
		color(set[1]);
		if (choose == 1) cout << symbol << " <<SubMarine - 2>>" << char(176) << " " << submarine << endl;
		else cout << " " << " <<SubMarine - 2>>" << char(176) << " " << submarine << endl;
		color(set[2]);
		if (choose == 2) cout << symbol << " <<Battleship - 3>>" << char(176) << " " << battleship << endl;
		else cout << " " << " <<Battleship - 3>>" << char(176) << " " << battleship << endl;
		color(set[3]);
		if (choose == 3) cout << symbol << " <<Carrier - 4>>" << char(176) << " " << carrier << endl;
		else cout << " " << " <<Carrier - 4>>" << char(176) << " " << carrier << endl;
		int arrow = _getch();
		switch (arrow) {
		case 72:
			if (choose != 0) choose--;
			else choose = 3;
			break;
		case 80:
			if (choose != 3) choose++;
			else choose = 0;
			break;
		case '\r':
			color(7);
			showChange(area, choose);
			if (submarine + destroyer + battleship == 0) status = true;
			break;
		default:
			break;
		}if (status) break;
		set[0] = 7;// Default Color Datas
		set[1] = 7;// Default Color Datas
		set[2] = 7;// Default Color Datas
		set[3] = 7;// Default Color Datas
	}
	system("cls");
}

int main(){
	srand(time(0));
	int choose = 0;
	int set[] = { 7,7,7,7 };// Default Colors for menu lines
	logo();// It Print BattleShip Label.
	while (true) {
		if (choose == 0) set[0] = Color;// It is color to our arrey
		if (choose == 1) set[1] = Color;// It is color to our arrey
		if (choose == 2) set[2] = Color;// It is color to our arrey
		if (choose == 3) set[3] = Color;// It is color to our arrey
		menu(set);
		int asciiArrow = _getch();
		set[0] = 7;// Default Color Datas
		set[1] = 7;// Default Color Datas
		set[2] = 7;// Default Color Datas
		set[3] = 7;// Default Color Datas
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
