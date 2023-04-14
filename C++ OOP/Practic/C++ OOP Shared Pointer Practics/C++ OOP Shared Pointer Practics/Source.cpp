#include <iostream>
using namespace std;


class sharedp {
	int* _ptr;
	int* count;
public:
	sharedp(int* ptr) {
		count = new int(1);
		_ptr = ptr;
	}

	sharedp(sharedp& other) {// Copy Constructor
		(*other.count)++;
		count = other.count;
		_ptr = other._ptr;
	}
	sharedp(sharedp&& other) noexcept {// Copy Constructor
		count = other.count;
		other.count = nullptr;
		_ptr = other._ptr;
		other._ptr = nullptr;

	}


	// Accsessors

	// Setters

	void setPtr(int* ptr) { _ptr = ptr; }
	void setCount(int* count) { this->count = count; }

	// Getters

	int* getPtr() { return _ptr; }
	int* getCount() { return count; }

	// Functions

	void reset(int* newdata = NULL) {
		if (newdata != _ptr && *count == 1) {
			delete _ptr;
		}
		(*count)--;
	}

	// Function Overloading
	

	int operator*() {
		return *_ptr;
	}
};


int main() {
	sharedp ptr(new int(15));
	sharedp ptr1(ptr);
	ptr1.reset();
	cout << (*ptr);
	ptr.reset();

}