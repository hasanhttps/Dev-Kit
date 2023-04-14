#pragma once


#pragma once

int locX = row / 2, locY = column / 2, curX = row / 2, curY = column / 2, hitC = 0, hitBotC = 0;

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
	}destroyer = bd, submarine = bs, battleship = bb, carrier = bc;
	fillRand(botArea);
	char** chooseArea = new char* [row] {};
	for (int i = 0; i < row; i++) {
		chooseArea[i] = new char[column] {};
		for (int j = 0; j < column; j++) {
			if ((j == 0 || j == column - 1) && i != 0 && i != row - 1) chooseArea[i][j] = 186;
			else if (i == 0 && j == 0) chooseArea[i][j] = 201;
			else if (i == 0 && j == column - 1) chooseArea[i][j] = 187;
			else if (j > 0 && j < column - 1 && i == 0 || i == row - 1 && j > 0 && j < column - 1)  chooseArea[i][j] = 205;
			else if (i == row - 1 && j == column - 1) chooseArea[i][j] = 188;
			else if (i == row - 1 && j == 0) chooseArea[i][j] = 200;
			else  chooseArea[i][j] = ' ';
		}
	}
	while (true) {
		system("cls");
		cout << setw(column / 2 + column) << "Player's Board" << endl;
		printArea(playerArea);
		printChoose(chooseArea, botArea);
		gotoXy(0, row + 3);
		cout << setw(column / 2 + column) << "Bot Hit ~ " << hitBotC;
		gotoXy(column * 2 + column, row + 3);
		cout << setw(column / 2) << "Player Hit ~ " << hitC;
		gotoXy(0, row + 4);
		cout << setw(column * 2 - 5) << "Remaining Fleets ~ " << playerScore - hitBotC;
		gotoXy(column * 2, row + 4);
		cout << setw(column * 2) << "Remaining Fleets ~ " << botScore - hitC;

		if (start) guessCoord(chooseArea, botArea);
		else if (botlevel == 0) easyBotHit(playerArea);
		else if (botlevel == 1) normalBotHit(playerArea);
		else if (botlevel == 2) HardBotHit(playerArea);
		if (hitC == botScore) {
			delay(0.1);
			system("cls");
			win();
			break;
		}
		else if (hitBotC == playerScore) {
			delay(0.1);
			system("cls");
			cout << "Bot win";
			delay(5);
			break;
		}
	}
}

void HardBotHit(char**& area) {
	static bool hit = false;
	static int r, c, ifRev = -1, current = 0;
	static int* xCordinates = new int[row * column] {};
	static int* yCordinates = new int[row * column] {};
	int randR = 1 + (rand() % (row - 2));
	int randC = 1 + (rand() % (column - 2));
	bool st = true;
	while (true) {
		for (int i = 0; i < current; i++) {
			if (xCordinates[i] == randR && yCordinates[i] == randC) st = false;
		}
		if (st) break;
		else if (st == false) {
			randR = 1 + (rand() % (row - 2));
			cout << randR << endl;
			randC = 1 + (rand() % (column - 2));
		}
	}

	if (hit) {
		if (area[r][c + 1] != ' ' && area[r][c - 1] != ' ' && area[r - 1][c] != ' ' && area[r + 1][c] != ' ') hit = false;
		else {
			int randRotation = rand() % 4;
			if (((randRotation == 2 && ifRev == -1) || ifRev == 2) && c + 1 < column - 1) {
				if (area[r][c + 1] == ship) {
					area[r][++c] = 'H';
					xCordinates[current] = r;
					yCordinates[current++] = c;
					hitBotC++;
					ifRev = 2;
				}else if (area[r][c + 1] == ' ') {
					area[r][c + 1] = 'M';
					hit = false;
					start = true;
					ifRev = -1;
				}else if (area[r][c + 1] == 'M' || area[r][c + 1] == 'H') {
					hit = false;
					ifRev = -1;
				}else hit = true;
			}
			else if (((randRotation == 3 && ifRev == -1) || ifRev == 3) && c - 1 > 0) {
				if (area[r][c - 1] == ship) {
					area[r][--c] = 'H';
					xCordinates[current] = r;
					yCordinates[current++] = c;
					hitBotC++;
					ifRev = 3;
				}else if (area[r][c - 1] == ' ') {
					area[r][c - 1] = 'M';
					hit = false;
					start = true;
					ifRev = -1;
				}else if (area[r][c - 1] == 'M' || area[r][c - 1] == 'H') {
					hit = false;
					ifRev = -1;
				}else hit = true;
			}else if (((randRotation == 1 && ifRev == -1) || ifRev == 1) && r - 1 > 0){
				if (area[r - 1][c] == ship) {
					area[--r][c] = 'H';
					xCordinates[current] = r;
					yCordinates[current++] = c;
					hitBotC++;
					ifRev = 1;
				}else if (area[r - 1][c] == ' ') {
					area[r - 1][c] = 'M';
					hit = false;
					start = true;
					ifRev = -1;
				}else if (area[r - 1][c] == 'M' || area[r - 1][c] == 'H') {
					hit = false;
					ifRev = -1;
				}else hit = true;
			}else if (((randRotation == 0 && ifRev == -1) || ifRev == 0) && r + 1 < row - 1){
				if (area[r + 1][c] == ship) {
					area[++r][c] = 'H';
					xCordinates[current] = r;
					yCordinates[current++] = c;
					hitBotC++;
					ifRev = 0;
				}else if (area[r + 1][c] == ' ') {
					area[r + 1][c] = 'M';
					hit = false;
					start = true;
					ifRev = -1;
				}else if (area[r + 1][c] == 'M' || area[r + 1][c] == 'H') {
					hit = false;
					ifRev = -1;
				}else hit = true;
			}
		}
	}
	else if (area[randR][randC] == ship) {
		area[randR][randC] = 'H';
		xCordinates[current] = randR;
		yCordinates[current++] = randC;
		hitBotC++;
		hit = true;
		r = randR;
		c = randC;
	}
	else if (area[randR][randC] == ' ') {
		hit = false;
		area[randR][randC] = 'M';
		start = true;
	}
}

void normalBotHit(char**& area) {
	static bool hit = false, notRev = true;
	static int r, c;
	int randR = 1 + (rand() % (row - 2));
	int randC = 1 + (rand() % (column - 2));

	if (hit) {
		if (area[r][c + 1] != ' ' && area[r][c - 1] != ' ' && area[r - 1][c] != ' ' && area[r + 1][c] != ' ') hit = false;
		else {
			int randRotation = rand() % 4;
			if (randRotation == 2 && c + 1 < column - 1) if (area[r][c + 1] == ship) { area[r][++c] = 'H'; hitBotC++; }
			else if (area[r][c + 1] == ' ') {
				area[r][c + 1] = 'M'; hit = false; start = true;
			}
			else hit = true;
			else if (randRotation == 3 && c - 1 > 0) if (area[r][c - 1] == ship) { area[r][--c] = 'H';  hitBotC++; }
			else if (area[r][c - 1] == ' ') {
				area[r][c - 1] = 'M'; hit = false; start = true;
			}
			else hit = true;
			else if (randRotation == 1 && r - 1 > 0) if (area[r - 1][c] == ship) { area[--r][c] = 'H'; hitBotC++; }
			else if (area[r - 1][c] == ' ') {
				area[r - 1][c] = 'M'; hit = false; start = true;
			}
			else hit = true;
			else if (randRotation == 0 && r + 1 < row - 1) if (area[r + 1][c] == ship) { area[++r][c] = 'H'; hitBotC++; }
			else if (area[r + 1][c] == ' ') {
				area[r + 1][c] = 'M'; hit = false; start = true;
			}
			else hit = true;
		}
	}
	else if (area[randR][randC] == ship) {
		area[randR][randC] = 'H';
		hitBotC++;
		hit = true;
		r = randR;
		c = randC;
	}
	else if (area[randR][randC] == ' ') {
		hit = false;
		area[randR][randC] = 'M';
		start = true;
	}
}

void easyBotHit(char**& area) {
	int randR = 1 + (rand() % (row - 2));
	int randC = 1 + (rand() % (column - 2));

	if (area[randR][randC] == ship) {
		area[randR][randC] = 'H';
		hitBotC++;
	}
	else if (area[randR][randC] == ' ') {
		area[randR][randC] = 'M';
		start = true;
	}
}

void guessCoord(char**& chooseArea, char**& botArea) {
	bool status = true;

	while (status) {
		printChoose(chooseArea, botArea);

		int arrow = _getch();
		switch (arrow) {
		case 72:
			if (curX > 1) curX--;
			break;
		case 75:
			if (curY > 1) curY--;
			break;
		case 77:
			if (curY < column - 2) curY++;
			break;
		case 80:
			if (curX < row - 2) curX++;
			break;
		case '\r':
			if (botArea[curX][curY] == ship && chooseArea[curX][curY] != 'H' && chooseArea[curX][curY] != dest) {
				chooseArea[curX][curY] = 'H';
				hitC++;
				if (hitC == botScore) return;
			}
			else if (chooseArea[curX][curY] == ' ' && notPlace == false) {
				chooseArea[curX][curY] = 'M';
				if (start) start = false;
				else start = true;
				status = false;
			}
			else cout << '\a';
			break;
		default:
			break;
		}
	}

}

void win() {
	system("cls");
	cout << "Congratulations you win !!!" << endl;
	delay(10);
}

void delay(float seconds) {
	clock_t startClock = clock();
	float secondsAhead = seconds * CLOCKS_PER_SEC;
	// do nothing until the elapsed time has passed.
	while (clock() < startClock + secondsAhead);
	return;
}

void printArea(char** area) {
	for (int i = 0; i < row; i++) {
		if (i > 0 && i < row - 1) cout << setw(2) << i;
		else cout << "  ";
		if (i == 0) {
			cout << "  ";
			for (int i = 0; i < column - 2; i++) cout << char(i + 65) << ' ';
			cout << "\n  ";
		}
		for (int j = 0; j < column; j++) {
			if (area[i][j] == 'M') {
				color(missC);
				cout << 'M' << ' ';
				color(defColor);
			}
			else if (area[i][j] == 'H') {
				color(hitCol);
				cout << 'H' << ' ';
				color(defColor);
			}
			else if (i == 0 && j < column - 1 || i == row - 1 && j < column - 1) cout << area[i][j] << char(205);
			else cout << area[i][j] << ' ';
		}cout << endl;
	}
}

void printChoose(char** area, char** botArea) {
	gotoXy(column * 2 + column, 0);
	cout << setw(column / 2) << "Bot's Board" << endl;
	for (int i = 0; i < row; i++) {
		gotoXy(column * 2 + 5, i + 2);
		if (i > 0 && i < row - 1) cout << setw(2) << i;
		else cout << "  ";
		if (i == 0) {
			gotoXy(column * 2 + 7, 1);
			cout << "  ";
			for (int i = 0; i < column - 2; i++) cout << char(i + 65) << ' '; gotoXy(column * 2 + 7, 2);
		}for (int j = 0; j < column; j++) {
			if (asistMode && i == curX && j == curY && area[i][j] == ' ' && (area[i][j + 1] == dest || area[i][j - 1] == dest || area[i - 1][j + 1] == dest || area[i - 1][j] == dest || area[i - 1][j - 1] == dest || area[i + 1][j] == dest || area[i + 1][j + 1] == dest || area[i + 1][j - 1] == dest)) {
				notPlace = true;
				color(notField);
				cout << symbol << " ";
				color(defColor);
			}
			else if (i == curX && j == curY && area[i][j] == ' ') {
				notPlace = false;
				color(curColor);
				cout << char(cursor) << ' ';
				color(defColor);
			}
			else if (i == curX && j == curY && area[curX][curY] == 'H') {
				color(notField);
				cout << 'H' << ' ';
				color(defColor);
			}
			else if (i == curX && j == curY && area[curX][curY] == dest) {
				color(notField);
				cout << dest << ' ';
				color(defColor);
			}
			else if (area[i][j] == dest) {
				color(vanished);
				cout << dest << ' ';
				color(defColor);
			}
			else if (i == curX && j == curY && area[curX][curY] == 'M') {
				color(notField);
				cout << 'M' << ' ';
				color(defColor);
			}
			else if (area[i][j] == 'H' && area[i - 1][j] == 'H' && botArea[i - 2][j] != ship && botArea[i + 1][j] != ship || area[i][j] == 'H' && area[i + 1][j] == 'H' && botArea[i - 1][j] != ship && botArea[i + 2][j] != ship ||
				area[i][j] == 'H' && area[i - 1][j] == 'H' && area[i - 2][j] == 'H' && botArea[i - 3][j] != ship && botArea[i + 1][j] != ship || area[i][j] == 'H' && area[i + 1][j] == 'H' && area[i + 2][j] == 'H' && botArea[i - 1][j] != ship && botArea[i + 3][j] != ship || area[i][j] == 'H' && area[i + 1][j] == 'H' && area[i - 1][j] == 'H' && botArea[i + 2][j] != ship && botArea[i - 2][j] != ship ||
				area[i][j] == 'H' && area[i - 1][j] == 'H' && area[i - 2][j] == 'H' && area[i - 3][j] == 'H' && botArea[i + 1][j] != ship && botArea[i - 4][j] != ship || area[i][j] == 'H' && area[i + 1][j] == 'H' && area[i - 1][j] == 'H' && area[i - 2][j] == 'H' && botArea[i - 3][j] != ship && botArea[i + 2][j] != ship || area[i][j] == 'H' && area[i + 1][j] == 'H' && area[i + 2][j] == 'H' && area[i - 1][j] == 'H' && botArea[i + 3][j] != ship && botArea[i - 2][j] != ship || area[i][j] == 'H' && area[i + 1][j] == 'H' && area[i + 2][j] == 'H' && area[i + 3][j] == 'H' && botArea[i - 1][j] != ship && botArea[i + 4][j] != ship) {
				int row = i;
				while (area[row][j] == 'H') area[row++][j] = dest; row = i;
				while (area[--row][j] == 'H') area[row][j] = dest;
				color(vanished);
				cout << dest << ' ';
				color(defColor);
			}
			else if (area[i][j] == 'H' && botArea[i][j + 1] != ship && botArea[i][j - 1] != ship && botArea[i - 1][j] != ship && botArea[i + 1][j] != ship ||
				area[i][j] == 'H' && area[i][j + 1] == 'H' && botArea[i][j - 1] != ship && botArea[i][j + 2] != ship || area[i][j] == 'H' && area[i][j - 1] == 'H' && botArea[i][j + 1] != ship && botArea[i][j - 2] != ship ||
				area[i][j] == 'H' && area[i][j + 1] == 'H' && area[i][j + 2] == 'H' && botArea[i][j + 3] != ship && botArea[i][j - 1] != ship || area[i][j] == 'H' && area[i][j + 1] == 'H' && botArea[i][j + 2] != ship && area[i][j - 1] == 'H' && botArea[i][j - 2] != ship || area[i][j] == 'H' && botArea[i][j + 1] != ship && area[i][j - 1] == 'H' && area[i][j - 2] == 'H' && botArea[i][j - 3] != ship ||
				area[i][j] == 'H' && area[i][j + 1] == 'H' && area[i][j + 2] == 'H' && area[i][j + 3] == 'H' && botArea[i][j - 1] != ship && botArea[i][j + 4] != ship || area[i][j] == 'H' && area[i][j + 1] == 'H' && area[i][j + 2] == 'H' && area[i][j - 1] == 'H' && botArea[i][j + 3] != ship && botArea[i][j - 2] != ship || area[i][j] == 'H' && area[i][j + 1] == 'H' && area[i][j - 1] == 'H' && area[i][j - 2] == 'H' && botArea[i][j - 3] != ship && botArea[i][j + 2] != ship || area[i][j] == 'H' && area[i][j - 1] == 'H' && area[i][j - 2] == 'H' && area[i][j - 2] == 'H' && area[i][j - 3] == 'H' && botArea[i][j - 4] != ship && botArea[i][j + 1] != ship) {
				int col = j;
				while (area[i][col] == 'H') area[i][col++] = dest; col = j;
				while (area[i][--col] == 'H') area[i][col] = dest;
				color(vanished);
				cout << dest << ' ';
				color(defColor);
			}
			else if (area[i][j] == 'H') {
				color(hitCol);
				cout << 'H' << ' ';
				color(defColor);
			}
			else if (area[i][j] == 'M') {
				color(missC);
				cout << 'M' << ' ';
				color(defColor);
			}
			else if (i == 0 && j < column - 1 || i == row - 1 && j < column - 1) {
				cout << area[i][j] << char(205);
			}
			else cout << area[i][j] << ' ';
		}
	}
}

void fillChoose(char**& playerArea) {
	cout << "\t\tWELCOME TO BATTLESHIPS\n";
	cout << "Would you like fill your area manual or random ? ";
	bool status = false, enter = false;
	int set[3] = { defColor,defColor,defColor };
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
		set[0] = defColor;// Default all lines
		set[1] = defColor;
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
		}if (enter == true) break;
	}
	system("cls");
	if (status == false) fillRand(playerArea);
	else fillManual(playerArea);
}

void fillRand(char**& area) {
	int randR, randC;
	bool status = true, isreverse = false;

	while (destroyer--) {
		while (status) {
			randR = 1 + (rand() % (row - 2));
			randC = 1 + (rand() % (column - 2));
			if (area[randR][randC] != ship && area[randR - 1][randC - 1] != ship && area[randR - 1][randC] != ship && area[randR - 1][randC + 1] != ship && area[randR][randC - 1] != ship &&
				area[randR][randC + 1] != ship && area[randR + 1][randC - 1] != ship && area[randR + 1][randC] != ship && area[randR + 1][randC + 1] != ship && randC < column - 1) status = false;
		}status = true;
		area[randR][randC] = ship;
	}while (submarine--) {
		isreverse = rand() % 2;
		while (true) {
			randR = 1 + (rand() % (row - 2));
			randC = 1 + (rand() % (column - 2));
			if (isreverse) {
				if (randR < row - 1 && randC < column - 1 && randR > 2 && randC > 0 && area[randR][randC] != ship && area[randR - 1][randC] != ship && area[randR - 2][randC] != ship && area[randR][randC - 1] != ship && area[randR][randC + 1] != ship && area[randR - 1][randC + 1] != ship &&
					area[randR - 1][randC - 1] != ship && area[randR - 2][randC - 1] != ship && area[randR - 2][randC + 1] != ship && area[randR + 1][randC] != ship && area[randR + 1][randC + 1] != ship && area[randR + 1][randC - 1] != ship) {
					area[randR][randC] = ship;
					area[randR - 1][randC] = ship;
					break;
				}
			}
			else if (isreverse == false) if (area[randR][randC] != ship && area[randR - 1][randC - 1] != ship && area[randR - 1][randC] != ship && area[randR - 1][randC + 1] != ship && area[randR - 1][randC + 2] != ship &&
				area[randR][randC - 1] != ship && area[randR][randC + 1] != ship && area[randR][randC + 2] != ship && area[randR + 1][randC - 1] != ship && area[randR + 1][randC] != ship &&
				area[randR + 1][randC + 1] != ship && area[randR + 1][randC + 2] != ship && randC < column - 2) {
				area[randR][randC] = ship;
				area[randR][randC + 1] = ship;
				break;
			}
		}
	}while (battleship--) {
		isreverse = rand() % 2;
		while (true) {
			randR = 1 + (rand() % (row - 2));
			randC = 1 + (rand() % (column - 2));
			if (isreverse) {
				if (randR < row - 1 && randC < column - 1 && randR > 3 && randC > 0 && area[randR][randC] != ship && area[randR][randC + 1] != ship && area[randR][randC - 1] != ship && area[randR - 1][randC] != ship && area[randR - 1][randC - 1] != ship && area[randR - 1][randC + 1] != ship &&
					area[randR - 2][randC] != ship && area[randR - 2][randC - 1] != ship && area[randR - 2][randC + 1] != ship && area[randR - 3][randC] != ship && area[randR - 3][randC - 1] != ship && area[randR - 3][randC + 1] != ship && area[randR + 1][randC] != ship && area[randR + 1][randC + 1] != ship && area[randR + 1][randC - 1] != ship) {
					for (int i = 0; i < 3; i++) area[randR - i][randC] = ship;
					break;
				}
			}
			else if (isreverse == false) if (area[randR][randC] != ship && area[randR - 1][randC - 1] != ship && area[randR - 1][randC] != ship && area[randR - 1][randC + 1] != ship && area[randR - 1][randC + 2] != ship &&
				area[randR - 1][randC + 3] != ship && area[randR][randC - 1] != ship && area[randR][randC + 1] != ship && area[randR][randC + 2] != ship && area[randR][randC + 3] != ship &&
				area[randR + 1][randC - 1] != ship && area[randR + 1][randC] != ship && area[randR + 1][randC + 1] != ship && area[randR + 1][randC + 2] != ship && area[randR + 1][randC + 3] != ship && randC < column - 3) {
				for (int i = 0; i < 3; i++) area[randR][randC + i] = ship;
				break;
			}
		}
	}while (carrier--) {
		isreverse = rand() % 2;
		while (true) {
			randR = 1 + (rand() % (row - 2));
			randC = 1 + (rand() % (column - 2));
			if (isreverse) {
				if (randR < row - 1 && randC < column - 1 && randR > 4 && randC > 0 && area[randR][randC] != ship && area[randR][randC + 1] != ship && area[randR][randC - 1] != ship && area[randR - 1][randC] != ship && area[randR - 1][randC - 1] != ship && area[randR - 1][randC + 1] != ship &&
					area[randR - 2][randC] != ship && area[randR - 2][randC - 1] != ship && area[randR - 2][randC + 1] != ship && area[randR - 3][randC] != ship && area[randR - 3][randC - 1] != ship && area[randR - 3][randC + 1] != ship && area[randR + 1][randC] != ship && area[randR + 1][randC + 1] != ship && area[randR + 1][randC - 1] != ship &&
					area[randR - 4][randC] != ship && area[randR - 4][randC - 1] != ship && area[randR - 4][randC + 1] != ship) {
					for (int i = 0; i < 4; i++) area[randR - i][randC] = ship;
					break;
				}
			}
			else if (isreverse == false) {
				if (area[randR][randC] != ship && area[randR - 1][randC - 1] != ship && area[randR - 1][randC] != ship && area[randR - 1][randC + 1] != ship && area[randR - 1][randC + 2] != ship &&
					area[randR - 1][randC + 3] != ship && area[randR - 1][randC + 4] != ship && area[randR][randC - 1] != ship && area[randR][randC + 1] != ship && area[randR][randC + 2] != ship && area[randR][randC + 3] != ship &&
					area[randR][randC + 4] != ship && area[randR + 1][randC - 1] != ship && area[randR + 1][randC] != ship && area[randR + 1][randC + 1] != ship && area[randR + 1][randC + 2] != ship && area[randR + 1][randC + 3] != ship && area[randR + 1][randC + 4] != ship && randC < column - 4) {
					for (int i = 0; i < 4; i++) area[randR][randC + i] = ship;
					break;
				}
			}
		}status = true;
	}
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
}bool checkSub(char checkV, int change, char** area) {
	if (checkV == 'r') if (check('r', change, area) && area[locX + 2 * change][locY + 2] != ship) return true;
	if (change == 1 && checkV == 'c') if (locY + 1 < column - 2 && area[locX][locY + 2] != ship && area[locX][locY + 3] != ship &&
		area[locX - 1][locY + 3] != ship && area[locX + 1][locY + 3] != ship) return true;
	if (change == -1 && checkV == 'c') if (locY - 1 > 0 && area[locX][locY - 1] != ship && area[locX][locY - 2] != ship &&
		area[locX - 1][locY - 2] != ship && area[locX + 1][locY - 2] != ship) return true;
	return false;
}bool checkRotateS(char checkVal, int change, char** area) {
	if (change == -1 && checkVal == 'r') if (locX - 1 + change > 0 && area[locX + 2 * change][locY] != ship && area[locX + 3 * change][locY + change] != ship && area[locX + 3 * change][locY + change * -1] != ship &&
		area[locX + 3 * change][locY] != ship) return true;
	if (change == 1 && checkVal == 'r') if (locX - 1 + change < row - 2 && area[locX + 1][locY] != ship && area[locX + 2][locY] != ship && area[locX + 2][locY - 1] != ship && area[locX + 2][locY + 1] != ship) return true;
	if (checkVal == 'c') if (locY + change < column - 1 && locY + change > 0 && area[locX][locY + change] != ship && area[locX - 1][locY + change] != ship && area[locX - 1][locY + 2 * change] != ship &&
		area[locX][locY + 2 * change] != ship && area[locX - 2][locY + 2 * change] != ship && area[locX + 1][locY + 2 * change] != ship) return true;
	return false;
}bool checkBShip(char checkV, int change, char** area) {
	int modul; if (change == 3) modul = 1; else modul = -1;
	if (checkV == 'r') if (area[locX + change][locY + 1] != ship && area[locX + change][locY + 2] != ship && checkSub('r', change, area) && area[locX + 2 * change][locY + 3] != ship) return true;
	if (checkV == 'c') if (locY + change < column - 1 && locY + change > 0 && area[locX][locY + change] != ship && area[locX][locY + change + modul] != ship && area[locX - 1][locY + change + modul] != ship &&
		area[locX + 1][locY + change + modul] != ship) return true;
	return false;
}bool checkRotateB(char checkV, int change, char** area) {
	if (checkV == 'r') if (locX + change > 1 && locX + change < row - 1 && area[locX + 2 * change][locY - 1] != ship && area[locX + 2 * change][locY] != ship && area[locX + 2 * change][locY + 1] != ship) return true;
	if (checkV == 'c') if (locY + change < column && locY + change > 0 && area[locX - 3][locY + change] != ship && area[locX - 2][locY + change] != ship && area[locX - 1][locY + change] != ship && area[locX][locY + change] != ship && area[locX + 1][locY + change] != ship) return true;
	return false;
}bool checkC(char checkV, int change, char** area) {
	int modul; if (change == 4) modul = 1; else modul = -1;
	if (checkV == 'r') if (checkBShip('r', change, area) && area[locX + 2 * change][locY + 4] != ship && locX + change > 0) return true;
	if (checkV == 'c') if (locY + change < column - 1 && locY + change > 0 && area[locX][locY + change] != ship && area[locX][locY + change + modul] != ship && area[locX - 1][locY + change + modul] != ship &&
		area[locX + 1][locY + change + modul] != ship) return true;
	return false;
}bool checkRotateC(char checkV, int change, char** area) {
	if (checkV == 'r') if (locX + change >= 0 && locX + change < row && area[locX + change][locY - 1] != ship && area[locX + change][locY] != ship && area[locX + change][locY + 1] != ship) return true;
	if (checkV == 'c') if (checkRotateB('c', change, area) && area[locX - 4][locY + change] != ship) return true;
	return false;
}

void fillManual(char**& area) {
	color(7);// Change color for new frame.
	printArea(area);// For print area

	int set[4] = { defColor,defColor,defColor,defColor }, choose = 0;// Initializing check datas
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
			if (submarine + destroyer + battleship + carrier == 0) status = true;
			break;
		default:
			break;
		}if (status) break;
		set[0] = defColor;// Default Color Datas
		set[1] = defColor;// Default Color Datas
		set[2] = defColor;// Default Color Datas
		set[3] = defColor;// Default Color Datas
	}
	system("cls");
}