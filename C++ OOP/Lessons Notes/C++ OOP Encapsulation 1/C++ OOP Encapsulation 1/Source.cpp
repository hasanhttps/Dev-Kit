#include <iostream>
#include <cassert>
using std::cout;
using std::endl;// Optimalliq ucun sadece lazim olan toollari istifade edirem
#include "DataTypes.h";
#include "Functions.h";


int main() {

	// Task 1
	
	// Task istenilen mexrece ve surete dair qiymet verile biler. Lakin mexrece sifir verdikde user defined error atir.

	Fraction f1(4, 2);
	Fraction f2(2, 7);
	Fraction result = f1.Minus(f2);
	result.simplify();
	result.printFraction();

	// Task 2

	Point p1;
	Point p2(5, 6);
	p1.print();
	p2.print();
	p1.setX(1);
	p1.setY(1);
	p2.setX(6);
	p2.setY(5);
	p1.print();
	p2.print();

	// Task 3

	Counter c(0, 100);
	for (int i = 0; i < 201; i++){
		c.increment();
		cout << c.getCurrent() << endl;
	}
}