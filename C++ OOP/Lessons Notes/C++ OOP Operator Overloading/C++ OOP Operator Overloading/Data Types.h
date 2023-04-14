#pragma once


// Task 1

class Fraction {
private:
	int _numerator = NULL;// Suret
	int _denumerator = NULL;// Mexrec
public:
	Fraction() = default;

	Fraction(int num, int don) {// Constructor with params
		_numerator = num;
		if (don != 0) _denumerator = don;
		else assert(!"Mexrec Sifir ola bilmez !");
	}

	// Copy Constructor
	
	explicit Fraction (const Fraction& other) {
		_numerator = other._numerator;
		_denumerator = other._denumerator;
	}

	// Move Constructor

	Fraction (Fraction&& other) {
		
		if (other._numerator == NULL || other._denumerator == NULL) assert(!"This Fraction is equals to NULL!");
		_numerator = other._numerator;
		_denumerator = other._denumerator;
		other._numerator = NULL;
		other._denumerator = NULL;
	}

	// Operator Overloading


	friend ostream& operator<<(ostream& print, const Fraction& other) {
		cout << other._numerator << endl;
		cout << "--  =  " << float(other._numerator) / float(other._denumerator) << endl;
		cout << other._denumerator << "\n\n";

		return print;
	}

	friend istream& operator>>(istream& input, Fraction& other) {
		cout << "Please enter the numerator : ";
		cin >> other._numerator;
		cout << "Please enter the denumerator : ";
		cin >> other._denumerator;
		other.simplify();

		return input;
	}

	Fraction& operator=(const Fraction& other) {
		_numerator = other._numerator;
		_denumerator = other._denumerator;
		return *this;
	}

	Fraction& operator=(Fraction&& other) {

		if (other._numerator == NULL || other._denumerator == NULL) assert(!"This Fraction is equals to NULL!");
		_numerator = other._numerator;
		_denumerator = other._denumerator;
		other._numerator = NULL;
		other._denumerator = NULL;
		return *this;
	}

	Fraction operator*(const Fraction& other) {
		int newnum = _numerator * other._numerator;
		int newdenum = _denumerator * other._denumerator;
		Fraction newfrac(newnum, newdenum);
		return newfrac;
	}

	Fraction operator/(const Fraction& other) {
		int newnum = _numerator * other._denumerator;
		int newdenum = _denumerator * other._numerator;
		Fraction newfrac(newnum, newdenum);
		return newfrac;
	}

	Fraction operator+(const Fraction& other) {
		int newnum = (_numerator * other._denumerator) + (other._numerator * _denumerator);
		int newdenum = _denumerator * other._denumerator;
		Fraction newfrac(newnum, newdenum);
		return newfrac;
	}

	Fraction operator-(const Fraction& other) {
		int newnum = (_numerator * other._denumerator) - (other._numerator * _denumerator);
		int newdenum = _denumerator * other._denumerator;
		Fraction newfrac(newnum, newdenum);
		return newfrac;
	}

	bool operator>(const Fraction& other) {
		if (_numerator / _denumerator > other._numerator / other._numerator) return true;
		else return false;
	}

	bool operator<(const Fraction& other) {
		if (_numerator / _denumerator < other._numerator / other._numerator) return true;
		else return false;
	}

	bool operator>=(const Fraction& other) {
		if (_numerator / _denumerator >= other._numerator / other._numerator) return true;
		else return false;
	}

	bool operator<=(const Fraction& other) {
		if (_numerator / _denumerator <= other._numerator / other._numerator) return true;
		else return false;
	}

	bool operator==(const Fraction& other) {
		if (_numerator / _denumerator == other._numerator / other._numerator) return true;
		else return false;
	}

	bool operator!=(const Fraction& other) {
		if (_numerator / _denumerator != other._numerator / other._numerator) return true;
		else return false;
	}

	// Out Of Class

	Fraction Multiply(const Fraction&); // Kəsri kəsrə vurub yeni kəsr qaytarır
	Fraction Add(const Fraction&); // Kəsri kəsrlə toplayib yeni kəsr qaytarır
	Fraction Minus(const Fraction&); // Kəsri kəsrden çixib yeni kəsr qaytarır
	Fraction Divide(const Fraction&); // Kəsri kəsrə bölüb yeni kəsr qaytarır
	void simplify();
	inline void printFraction();

	// ---------------------------------------------------- ACCESSORS ----------------------------------------------------

	// Getters

	inline int getNum() { return _numerator; }
	inline int getDenum() { return _denumerator; }
	
	// Setters

	inline void setNum(int numerator) { this->_numerator = numerator; }
	inline void setDenum(int denumerator) { this->_denumerator = denumerator; }

	// Destructor

	~Fraction() = default;
};