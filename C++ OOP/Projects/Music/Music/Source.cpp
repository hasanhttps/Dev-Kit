#include <iostream>
#include <Windows.h>
#include <thread>
using namespace std;

void playMusic() {
	try {
		bool played = PlaySound(L"Retro battleship.wav", NULL, SND_ASYNC);
		cout << "Succes or not : " << played;
	}
	catch (exception) {

	}
}

void printSmth() {
	try {
		cout << "Hi. Hakuna Matata to Threads";
	}
	catch (exception) {

	}
}

int main() {
	try {
		thread worker(playMusic);
		thread worker2(printSmth);
	}
	catch (...) {

	}
	
}