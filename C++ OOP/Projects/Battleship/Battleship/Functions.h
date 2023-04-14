#pragma once


void logo() {
	char** labelDesign_italic = new char* [] {
		new char[] {"  ______      ______      ______      ______      __        ______      ______      __  __      __      ______"},
		new char[] {" /\\  == \\    /\\  __ \\    /\\__  _\\    /\\__  _\\    /\\ \\      /\\  ___\\    /\\  ___\\    /\\ \\_\\ \\    /\\_\\    /\\  == )"},
		new char[] {" \\ \\  __<    \\ \\  __ \\   \\/_/\\ \\/    \\/_/\\ \\/    \\ \\ \\____ \\ \\  __\\    \\ \\___  \\   \\ \\  __ \\   \\ \\ \\   \\ \\ \\-"},
		new char[] {"  \\ \\_____\\   \\ \\_\\ \\_\\     \\ \\_\\       \\ \\_\\     \\ \\_____\\ \\ \\_____\\   \\ \\_____\\   \\ \\_\\ \\_\\   \\ \\_\\   \\ \\ \\"},
		new char[] {"   \\/_____/    \\/_/ /_/      \\/_/        \\/_/      \\/_____/  \\/_____/    \\/_____/    \\/_/\\/_/    \\/_/    \\/_/"}
	};
	for (int i = 0; i < 5; i++) cout << labelDesign_italic[i] << endl;
}

void color(int color) {
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
	
}

void area() {
	
}
