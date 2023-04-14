#include <iostream>
using namespace std;



int main() {
	int* ptr = new int(15);

	auto_ptr<int> ptr_2(ptr);// empty ptr_2 with move constructor
	auto_ptr<int> ptr_3(ptr_2);

	// In auto ptr you can't initialize new auto_ptr with same ptr it is error.
	// = overloading is meanin move constructor. Get method return us template*
	// Reset method can delete pointer and space. Realase delete object and return
	// the address of space in heap memory.

	cout << *ptr_3.get() << endl;
	ptr_3.reset();
	int* newptr = new int(20);
	ptr_3.reset(newptr);
	cout << *ptr_3.get() << endl;
	ptr_3.release();

	//ptr_2.newptr;

	int* ptr1 = new int(10);
	unique_ptr<int> ptru(ptr1);
	//std::unique_ptr<int> ptru1(ptru);// This is compile time error because unique pointer don't let
	// use another smart pointer refernce to same ptr.

	// Shared Ptr


	shared_ptr<int> ptrs(new int(2008));
	shared_ptr<int> ptrs1(ptrs);

	ptrs1.reset();// Bu sekilde yazanda datani deil sadece hemin objecti silir data ne vaxdki silinmesi
	// isdenen datani tutan bir deyisen qalanda silinir.
	ptrs1.reset();
	cout << *ptrs << endl;

	// Weak Ptr 

	// Ozunde count saxlamir ve silmeye accsesi yoxdur saxladigi data ise shared ptr ve ozudur.
	// meqsedi shared ptri funksiyaya kopya kimi gondermek ve countunun deyismemeyini temin etmekdir.

}