#include <iostream>
#include <Windows.h>
using namespace std;


inline void color(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoXy(int x, int y) {
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


template<typename T>
class SetScreen {
	int** array;
public:

	SetScreen() : array(NULL) {}
	SetScreen(int** array) {
		this->array = new int*[10]{};
		for (int i = 0; i < 10; i++){
			this->array[i] = array[i];
		}
		array = NULL;
	}


	void screen() {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				color(int(array[i][j]));
				cout << ".";
			}cout << endl;
		}
	}

};

int main() {

	int** array = new int* [10] {};

	for (int i = 0; i < 10; i++){
		array[i] = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	}

	SetScreen<int**> a(array);
	a.screen();
}