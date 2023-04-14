#pragma once


inline void Fraction::printFraction() {
	cout << _numerator << " divided by " << _denumerator << endl;
}

void Fraction::simplify() {
	int count = 0;
	int bcd = 1;// En boyuk ortaq bolunen (Biggest Common Division)
	while (count++ <= (_numerator < _denumerator ? _numerator : _denumerator)) {
		if (_numerator % count == 0 && _denumerator % count == 0) bcd = count;
	}
	_numerator /= bcd;
	_denumerator /= bcd;
}

Fraction Fraction::Multiply(const Fraction& otherFraction) {
	int newnum = _numerator * otherFraction._numerator;
	int newdenum = _denumerator * otherFraction._denumerator;
	Fraction newfrac(newnum, newdenum);
	return newfrac;
}

Fraction Fraction::Add(const Fraction& otherFraction) {
	int newnum = (_numerator * otherFraction._denumerator) + (otherFraction._numerator * _denumerator);
	int newdenum = _denumerator * otherFraction._denumerator;
	Fraction newfrac(newnum, newdenum);
	return newfrac;
}

Fraction Fraction::Minus(const Fraction& otherFraction) {
	int newnum = (_numerator * otherFraction._denumerator) - (otherFraction._numerator * _denumerator);
	int newdenum = _denumerator * otherFraction._denumerator;
	Fraction newfrac(newnum, newdenum);
	return newfrac;
}

Fraction Fraction::Divide(const Fraction& otherFraction) {
	int newnum = _numerator * otherFraction._denumerator;
	int newdenum = _denumerator * otherFraction._numerator;
	Fraction newfrac(newnum, newdenum);
	return newfrac;
}


// Task 2

inline void Point::print() {
	cout << "X : " << x << endl;
	cout << "Y : " << y << endl;
}
inline void Point::setX(int x) {
	this->x = x;
}	 
inline void Point::setY(int y) {
	this->y = y;
}
inline int Point::getX() {
	return x;
}
inline int Point::getY() {
	return y;
}

// Task 3

void Counter::increment(){
	if (_min < _max) _min++;
	else _min = 0;
	_currentValue = _min;
}
void Counter::decrement() {
	if (_min > 0) _min--;
	_currentValue = _min;
}
inline int Counter::getCurrent() {
	return _currentValue;
}