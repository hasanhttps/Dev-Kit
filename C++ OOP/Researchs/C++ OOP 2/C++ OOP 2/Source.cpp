#include <iostream>
using namespace std;
#include "DataTypes.h";

class dictionary {
	int i;
	char* str;
	float fl;
	double d;
public:
	dictionary(int integer, const char* string, float floater, double d) {
		i = integer;
		int len = strlen(string) + 1;
		char* str = new char[len] {};
		for (int i = 0; i < len; i++) str[i] = string[i];
		fl = floater;
		this->d = d;
	}
};

int main() {
	// Delegate Constructor

	//-----------------------------------------------------
	// delete default constructor
	/*
	1. Delete keyword
	*/

	dictionary a = { 12, "nihad", 15.4f, 12.354645756};

	// Static deyiseni yalniz static funksiya return ede biler.


}