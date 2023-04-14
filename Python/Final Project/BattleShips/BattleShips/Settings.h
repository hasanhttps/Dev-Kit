#pragma once


void settings() {// You can change all variables from there
	cout << "\t\t\t\t\t\t\tSETTINGS\n";
	int set[8] = { defColor, defColor, defColor, defColor, defColor, defColor, defColor, defColor };
	set[0] = Color;
	gotoXy(10, 5);
	while (true) {
		int arrow = _getch();
		switch (arrow) {
		case 72:
			break;
		default:
			break;
		}
	}

}
