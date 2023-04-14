#include <iostream>
#include <cassert>
using namespace std;


class Test {
public:
	int* _number = nullptr;

	Test() {
		cout << "Default constructor\n";
	}

	Test(int number) {
		cout << "Constructor with Param\n";
		_number = new int(number);
	}

	Test(const Test& other) {
		cout << "Copy constructor\n";

		if (other._number)
			_number = new int(*other._number);
	}

	Test(Test&& other) {
		cout << "Move Constructor!!\n";
		if (other._number == nullptr) assert(!"Error");

		this->_number = other._number;// Bixim obyektin hemin obyekte baxmasini temin edirik.
		other._number = nullptr;// Other'in ora referencini silirik.

		// Bu zaman bir datani bir yerden digerine dasiyiriq (cut) eleyirik.
	}

	Test& operator=(const Test& other) {
		cout << "Copy Assigment operator\n";

		if (_number != nullptr)
			delete _number;

		_number = new int(*other._number);
		return  *this;
	}

	~Test() {
		cout << "Destructor for -> " << _number << endl;
		delete _number;
	}
};

Test foo() {
	cout << "\nFunction\n";
	Test t1(10);
	cout << t1._number << endl;
	return t1;
}


int main() {
	Test a;
	Test b = 15;
	a = move(b);
	cout << *(a._number) << endl;
	cout << *(b._number) << endl;
}