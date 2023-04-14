#include <iostream>
#include <cassert>
using std::cout;
using std::cin;
using std::move;
using std::endl;// Optimalliq ucun sadece lazim olan toollari istifade edirem
using std::ostream;
using std::istream;
#include "Data Types.h"
#include "Functions.h"


int main() {

	// Task 1

	// Task istenilen mexrece ve surete dair qiymet verile biler. Lakin mexrece sifir verdikde user defined error atir.

	Fraction f1(4, 9);
	Fraction f2(2, 7);

	Fraction multiply;
	multiply = f1 * f2;
	multiply.simplify();
	cout << multiply;
	multiply = f1 + f2;
	multiply.simplify();
	cout << multiply;
	multiply = f1 / f2;
	multiply.simplify();
	cout << multiply;
	multiply = f1 - f2;
	multiply.simplify();
	cout << multiply;
	multiply = move(f1);
	cout << multiply;

	// Move Constructor

	cout << f1;

	// Cout Cin 

	Fraction check;
	cin >> check; // Ixtisar edir (default)
	cout << check;

}