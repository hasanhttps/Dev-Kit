#pragma once

void settings() {// You can change all variables from there
	cout << "\t\t\t\t\t\t\tSETTINGS\n";
	int set[8] = { defColor, defColor, defColor, defColor, defColor, defColor, defColor, defColor };
	char** settings = new char* [8] {
		new char[] {"Board Size"},
			new char[] {"Logos"},
			new char[] {"Color"},
			new char[] {"Symbol"},
			new char[] {"Ship Count"},
			new char[] {"Bot Level"},
			new char[] {"Asist Mode"},
			new char[] {"Exit"}
	}; set[0] = Color;
	for (int i = 0; i < 8; i++) {
		gotoXy(10, i + 5);
		color(set[i]);
		cout << settings[i];
		color(defColor);
		gotoXy(35, i + 5); cout << "|";
	}int choose = 0, rowC = 0, colC = 0, ch = 0;
	while (true) {
		if (choose == 0) set[0] = Color;
		else if (choose == 1) set[1] = Color;
		else if (choose == 2) set[2] = Color;
		else if (choose == 3) set[3] = Color;
		else if (choose == 4) set[4] = Color;
		else if (choose == 5) set[5] = Color;
		else if (choose == 6) set[6] = Color;
		else if (choose == 7) set[7] = Color;
		for (int i = 0; i < 8; i++) {
			gotoXy(10, i + 5);
			color(set[i]);
			cout << settings[i];
		}int arrow = _getch();
		set[0] = defColor;
		set[1] = defColor;
		set[2] = defColor;
		set[3] = defColor;
		set[4] = defColor;
		set[5] = defColor;
		set[6] = defColor;
		set[7] = defColor;
		switch (arrow) {
		case 72:
			if (choose > 0) choose--;
			else choose = 8;
			break;
		case 80:
			if (choose < 8) choose++;
			else choose = 0;
			break;
		case '\r':
			if (choose == 0) {
				rowC = row, colC = column, ch = 0;
				int setrc[3] = { defColor, defColor, defColor };
				setrc[0] = Color;
				while (true) {
					if (ch == 0) setrc[0] = Color;
					else if (ch == 1) setrc[1] = Color;
					else setrc[2] = Color;
					color(setrc[0]);
					gotoXy(55, 10);
					cout << "Row size       --    " << row - 2;
					color(setrc[1]);
					gotoXy(55, 11);
					cout << "Column size    --    " << column - 2;
					gotoXy(86, 14);
					color(setrc[2]);
					cout << "Save";
					int boardarr = _getch();
					setrc[0] = defColor; setrc[1] = defColor; setrc[2] = defColor;
					if (boardarr == 72) {
						if (ch > 0) ch--;
						else ch == 2;
					}
					else if (boardarr == 80) {
						if (ch < 2) ch++;
						else ch == 0;
					}
					else if (boardarr == '\r') {
						if (ch == 0) {
							while (true) {
								int change = _getch();
								if (change == 72 && rowC < 47) rowC++;
								else if (change == 80 && rowC > 12) rowC--;
								else if (change == '\r') {
									row = rowC;
									break;
								}
								color(Color);
								gotoXy(76, 10);
								cout << setw(2) << rowC - 2;
								color(defColor);
							}
						}
						else if (ch == 1) {
							while (true) {
								int change = _getch();
								if (change == 72 && colC < 47) colC++;
								else if (change == 80 && colC > 12) colC--;
								else if (change == '\r') {
									column = colC;
									break;
								}
								color(Color);
								gotoXy(76, 11);
								cout << setw(2) << colC - 2;
								color(defColor);
							}
						}
						else {
							gotoXy(55, 10);
							cout << "                             ";
							gotoXy(55, 11);
							cout << "                             ";
							gotoXy(86, 14);
							cout << "                             ";
							break;
						}
					}

				}
			}
			else if (choose == 1) {
				int logoCol[4] = { defColor, defColor, defColor, defColor };
				gotoXy(50, 6);
				cout << "You can change logos (Default logo is italic)";
				while (true) {
					if (logoC == 0) logoCol[0] = Color;
					else if (logoC == 1) logoCol[1] = Color;
					else if (logoC == 2) logoCol[2] = Color;
					else logoCol[3] = Color;
					gotoXy(65, 9);
					color(logoCol[0]);
					cout << "Italic";
					gotoXy(65, 10);
					color(logoCol[1]);
					cout << "Blackie";
					gotoXy(65, 11);
					color(logoCol[2]);
					cout << "X992";
					gotoXy(65, 12);
					color(logoCol[3]);
					cout << "Slant";
					int arrow = _getch();
					if (logoC == 0) logoCol[0] = defColor;
					else if (logoC == 1) logoCol[1] = defColor;
					else if (logoC == 2) logoCol[2] = defColor;
					else logoCol[3] = defColor;
					if (arrow == 72) if (logoC > 0) logoC--; else logoC = 4;
					else if (arrow == 80) if (logoC < 4) logoC++; else logoC = 0;
					else if (arrow == '\r') {
						gotoXy(50, 6);
						cout << "                                             ";
						gotoXy(65, 9);
						cout << "        ";
						gotoXy(65, 10);
						cout << "          ";
						gotoXy(65, 11);
						cout << "        ";
						gotoXy(65, 12);
						cout << "        ";
						break;
					}
				}
			}
			else if (choose == 2) {
				int colors[8] = { defColor, defColor, defColor, defColor, defColor, defColor, defColor, defColor };
				bool status = false;

				ch = 0;
				while (true) {
					for (int i = 0; i < 8; i++) if (ch == i) colors[i] = Color;
					color(colors[0]);
					gotoXy(40, 6);
					cout << "Color of Line   ~   " << Color;
					color(colors[1]);
					gotoXy(40, 7);
					cout << "Default Color   ~   " << defColor;
					color(colors[2]);
					gotoXy(40, 8);
					cout << "Cursor Color    ~   " << curColor;
					color(colors[3]);
					gotoXy(40, 9);
					cout << "Not Empty place  ~  " << notField;
					color(colors[4]);
					gotoXy(40, 10);
					cout << "Hit Color     ~     " << hitCol;
					color(colors[5]);
					gotoXy(40, 11);
					cout << "Miss Color     ~    " << missC;
					color(colors[6]);
					gotoXy(40, 12);
					cout << "Vanished      ~     " << vanished;
					color(colors[7]);
					gotoXy(40, 13);
					cout << "Logo Color     ~    " << logogcolor;

					int arrow = _getch();
					for (int i = 0; i < 8; i++) if (ch == i) colors[i] = defColor;
					if (arrow == 72) if (ch > 0) ch--; else ch = 7;
					else if (arrow == 80) if (ch < 7) ch++; else ch = 0;
					else if (arrow == '\r') {
						int change = 0;
						while (true) {
							int incDec = _getch();
							if (incDec == 72 && change < 255) change++;
							else if (incDec == 80 && change > 0) change--;
							else if (incDec == '\r') {
								if (ch == 0) Color = change;
								else if (ch == 1) defColor = change;
								else if (ch == 2) curColor = change;
								else if (ch == 3) notField = change;
								else if (ch == 4) hitCol = change;
								else if (ch == 5) missC = change;
								else if (ch == 6) vanished = change;
								else if (ch == 7) logogcolor = change;
								for (int i = 0; i < 8; i++) {
									gotoXy(40, 6 + i);
									cout << "                                                           ";
								}
								break;
							}
							color(Color);
							gotoXy(40 + 20, 6 + ch);
							cout << left << setw(3) << change;
							color(defColor);

						}break;
					}
				}
			}
			else if (choose == 3) {
				int colors[4] = { defColor, defColor, defColor, defColor };

				ch = 0;
				while (true) {
					for (int i = 0; i < 4; i++) if (ch == i) colors[i] = Color;
					color(colors[0]);
					gotoXy(40, 6);
					cout << "Symbol   ~   " << symbol;
					color(colors[1]);
					gotoXy(40, 7);
					cout << "Ship    ~    " << ship;
					color(colors[2]);
					gotoXy(40, 8);
					cout << "Cursor   ~   " << cursor;
					color(colors[3]);
					gotoXy(40, 9);
					cout << "Destroyed  ~ " << dest;

					int arrow = _getch();
					for (int i = 0; i < 4; i++) if (ch == i) colors[i] = defColor;
					if (arrow == 72) if (ch > 0) ch--; else ch = 3;
					else if (arrow == 80) if (ch < 3) ch++; else ch = 0;
					else if (arrow == '\r') {
						char change = 33;
						while (true) {
							int incDec = _getch();
							if (incDec == 72 && change < 254) change++;
							else if (incDec == 80 && change > 33) change--;
							else if (incDec == '\r') {
								if (ch == 0) symbol = change;
								else if (ch == 1) ship = change;
								else if (ch == 2) cursor = change;
								else if (ch == 3) dest = change;
								for (int i = 0; i < 8; i++) {
									gotoXy(40, 6 + i);
									cout << "                                                           ";
								}
								break;
							}
							color(Color);
							gotoXy(40 + 13, 6 + ch);
							cout << left << setw(3) << change;
							color(defColor);

						}break;
					}
				}
			}
			else if (choose == 4) {
				int playerCol[4] = { defColor, defColor, defColor, defColor };
				int botCol[4] = { defColor, defColor, defColor, defColor };
				bool istab = false, status = false;
				ch = 0;

				while (true) {
					if (istab) {
						if (ch == 0) botCol[0] = Color;
						else if (ch == 1) botCol[1] = Color;
						else if (ch == 2) botCol[2] = Color;
						else botCol[3] = Color;
					}
					else {
						if (ch == 0) playerCol[0] = Color;
						else if (ch == 1) playerCol[1] = Color;
						else if (ch == 2) playerCol[2] = Color;
						else playerCol[3] = Color;
					}
					color(defColor);
					gotoXy(45, 6);
					cout << "Player score  ~   " << playerScore;
					gotoXy(70, 6);
					cout << "Bot score  ~   " << botScore;
					gotoXy(45, 9);
					color(playerCol[0]);
					cout << "Destroyer (1)  ~  " << destroyer;
					gotoXy(45, 10);
					color(playerCol[1]);
					cout << "Submarine (2)  ~  " << submarine;
					gotoXy(45, 11);
					color(playerCol[2]);
					cout << "Battleship (3) ~  " << battleship;
					gotoXy(45, 12);
					color(playerCol[3]);
					cout << "Carrier (4)   ~   " << carrier;
					gotoXy(70, 9);
					color(botCol[0]);
					cout << "Destroyer (1)  ~  " << bd;
					gotoXy(70, 10);
					color(botCol[1]);
					cout << "Submarine (2)  ~  " << bs;
					gotoXy(70, 11);
					color(botCol[2]);
					cout << "Battleship (3) ~  " << bb;
					gotoXy(70, 12);
					color(botCol[3]);
					cout << "Carrier (4)   ~   " << bc;
					int arrow = _getch();
					if (istab) {
						if (ch == 0) botCol[0] = defColor;
						else if (ch == 1) botCol[1] = defColor;
						else if (ch == 2) botCol[2] = defColor;
						else botCol[3] = defColor;
					}
					else {
						if (ch == 0) playerCol[0] = defColor;
						else if (ch == 1) playerCol[1] = defColor;
						else if (ch == 2) playerCol[2] = defColor;
						else playerCol[3] = defColor;
					}
					if (arrow == 72) {
						if (ch > 0) ch--;
						else ch = 4;
					}
					else if (arrow == 80) {
						if (ch < 4) ch++;
						else ch = 0;
					}
					else if (arrow == 9) if (istab) istab = false; else istab = true;
					else if (arrow == '\r') {
						int change = 0;
						while (true) {
							int incDec = _getch();
							if (incDec == 72 && change < 10) change++;
							else if (incDec == 80 && change > 0) change--;
							else if (incDec == '\r') {
								if (istab) {
									if (ch == 0) bd = change;
									if (ch == 1) bs = change;
									if (ch == 2) bb = change;
									if (ch == 3) bc = change;
									botScore = bd + bs * 2 + bb * 3 + bc * 4;
								}
								else {
									if (ch == 0) destroyer = change;
									if (ch == 1) submarine = change;
									if (ch == 2) battleship = change;
									if (ch == 3) carrier = change;
									playerScore = destroyer + submarine * 2 + battleship * 3 + carrier * 4;
								}
								gotoXy(45, 6);
								cout << "                                                         ";
								gotoXy(45, 9);
								cout << "                                                         ";
								gotoXy(45, 10);
								cout << "                                                         ";
								gotoXy(45, 11);
								cout << "                                                         ";
								gotoXy(45, 12);
								cout << "                                                         ";
								status = true;
								break;
							}
							if (istab) {
								color(Color);
								gotoXy(70 + 18, ch + 9);
								cout << left << setw(2) << change;
								color(defColor);
							}
							else {
								color(Color);
								gotoXy(45 + 18, ch + 9);
								cout << left << setw(2) << change;
								color(defColor);
							}
						}
						if (status) break;
					}
				}
			}
			else if (choose == 5) {
				int modC[3] = { defColor, defColor, defColor };
				gotoXy(50, 6);
				cout << "You can change bot level (Default normal)";
				while (true) {
					if (botlevel == 0) modC[0] = Color;
					else if (botlevel == 1) modC[1] = Color;
					else modC[2] = Color;
					gotoXy(65, 9);
					color(modC[0]);
					cout << "Easy Bot";
					gotoXy(65, 10);
					color(modC[1]);
					cout << "Normal Bot";
					gotoXy(65, 11);
					color(modC[2]);
					cout << "Hard Bot";
					int arrow = _getch();
					if (botlevel == 0) modC[0] = defColor;
					else if (botlevel == 1) modC[1] = defColor;
					else modC[2] = defColor;
					if (arrow == 72) if (botlevel > 0) botlevel--; else botlevel = 3;
					else if (arrow == 80) if (botlevel < 3) botlevel++; else botlevel = 0;
					else if (arrow == '\r') {
						gotoXy(50, 6);
						cout << "                                             ";
						gotoXy(65, 9);
						cout << "        ";
						gotoXy(65, 10);
						cout << "          ";
						gotoXy(65, 11);
						cout << "        ";
						break;
					}
				}
			}
			else if (choose == 6) {
				gotoXy(40, 8);
				cout << "Would you like active << Player Asist >> mode ?";
				color(Color);
				gotoXy(45, 10);
				cout << symbol << " Yes";
				color(defColor);
				gotoXy(45, 11);
				cout << " " << " No";
				bool yesorno = true;
				while (true) {
					int arrow = _getch();
					if (arrow == 72) {
						yesorno = true;
						color(Color);
						gotoXy(45, 10);
						cout << symbol << " Yes";
						color(defColor);
						gotoXy(45, 11);
						cout << " " << " No";
					}
					else if (arrow == 80) {
						yesorno = false;
						color(defColor);
						gotoXy(45, 10);
						cout << " " << " Yes";
						color(Color);
						gotoXy(45, 11);
						cout << symbol << " No";
					}
					else if (arrow == '\r') {
						gotoXy(45, 10);
						cout << "         ";
						gotoXy(45, 11);
						cout << "         ";
						gotoXy(40, 8);
						cout << "                                                         ";
						asistMode = yesorno;
						break;
					}
				}
			}
			else if (choose == 7) return;
			break;
		default:
			break;
		}
	}

}