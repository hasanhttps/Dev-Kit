#include <iostream>
using namespace std;
#include "Prototypes.h";
#include "Functions.h";



struct Worker {
	size_t id = 0;
	char* name = nullptr;
	char* surname = nullptr;
	unsigned short age = 0;
	char* address = nullptr;
	char* phone = nullptr;
	float salary = 0;
};


struct Company {
	size_t id = 0;
	char* name = nullptr;
	char* address = nullptr;
	int size = 0;
	Worker* workers;
};


int main() {
	cout << "Check" << endl;

}