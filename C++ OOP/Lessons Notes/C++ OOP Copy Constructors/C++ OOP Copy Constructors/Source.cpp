#include <iostream>
using std::cout;
using std::endl;

int main() {
	// Copy Constructors

	// Shallow Copy => Uzden copy etmekdir. Bu formatda copy etsek datalar ile yox adressler ile kopya edir.
	// Deep Copy => Derinden copy etmekdir. Burada data copy edilir. Yani deyisenler bir - birinden asili olmur.

	int a = 10;
	int* b = &a;// Shallow Copy
	int* bh = new int(a);// Deep Copy with heap
	
	// Copy constructor bize parametr olaraq yalniz reference(&) value isdeir.
}