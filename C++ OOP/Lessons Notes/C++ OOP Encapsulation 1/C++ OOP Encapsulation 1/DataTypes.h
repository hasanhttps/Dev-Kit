#pragma once


// Task 1

class Fraction {
private:
	int _numerator;// Suret
	int _denumerator;// Mexrec
public:
	Fraction(int num, int don) {// Constructor with params
		_numerator = num;
		if (don != 0) _denumerator = don;
		else assert(!"Mexrec Sifir ola bilmez !");
	}

	// Out Of Class

	Fraction Multiply(const Fraction&); // Kəsri kəsrə vurub yeni kəsr qaytarır
	Fraction Add(const Fraction&); // Kəsri kəsrlə toplayib yeni kəsr qaytarır
	Fraction Minus(const Fraction&); // Kəsri kəsrden çixib yeni kəsr qaytarır
	Fraction Divide(const Fraction&); // Kəsri kəsrə bölüb yeni kəsr qaytarır
	void simplify();
	inline void printFraction();
};

// Task 2

class Point {
// These variables are default private by class.
	int x;
	int y;
public:
	Point() {// Default Consturctor
		x = 0;
		y = 0;
	}
	Point(int x, int y) {// Consturctor with params
		this->x = x;
		this->y = y;
	}
	inline void print();
	inline void setX(int);
	inline void setY(int);
	inline int getX();
	inline int getY();
};

// Task 3

class Counter {
private:
	int _min;
	int _max;
	int _currentValue;
public:
	Counter(int min, int max) {
		_min = min;
		_max = max;
		_currentValue = 0;
	}
	void increment();
	void decrement();
	inline int getCurrent();
};