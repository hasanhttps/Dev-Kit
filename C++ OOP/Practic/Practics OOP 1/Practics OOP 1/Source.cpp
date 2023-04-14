#include <iostream>
using namespace std;
#include "DataTypes.h";
#include "Functions.h";



int main() {
	Circle a;
	a.print();
	cout << a.calculateArea( ) << endl;
	cout << a.calculateLen() << endl;
}