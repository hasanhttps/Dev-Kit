#include <iostream>
#include <string>
#include <cassert>
using std::endl;
using std::cout;
using std::getline;
using std::string;

class myString {
private:
	size_t _length = 0;
	char* _text = nullptr;
	void setText(const char* text);
public:
	size_t _capacity = 16;
	// Constructors

	myString(); // Default Constructor
	myString(const char* text); // Constructor with Param
	myString(const myString& other); // Copy Constructor

	// Constructor with Param

	myString(const size_t count, const char text);

	// Copy Assignment operator

	myString& operator=(const myString& other) {
		_length = other._length;
		_capacity = other._capacity;
		for (int i = 0; i < strlen(other._text) + 1; i++) _text[i] = other._text[i];
		if (_length > _capacity - 1) _capacity = (_length / _capacity) + 1 * 16;
		return *this;
	}

	//// Functions

	char& front() {
		return _text[0];
	}
	char& back() {
		return _text[_length - 1];
	}
	char& at(size_t index) {
		return _text[index];
	}
	size_t capacity() {
		return _capacity;
	}
	size_t size() {
		return _length - 1;
	}
	size_t find(char chr) {
		for (int i = 0; i < _length - 1; i++) if (_text[i] == chr) return i;
	}
	size_t rfind(char chr) {
		for (int i = _length - 1; i < 0; i--) if (_text[i] == chr) return i;
	}
	void clear() {
		delete[] _text;
		_text = new char[1] {""};
	}
	void resize(size_t newSize) {
		if (newSize < _length) assert(!"You can't give this size !");
		_capacity = newSize;
	}
	void reserve(size_t newCapacity) {
		if (newCapacity < _length) assert(!"You can't give this size !");
		_capacity = newCapacity;
	}
	void shrink_to_fit() {
		if ((_capacity / 16) - 1 > _length / 16) _capacity -= (((_capacity / 16) - 1) - (_length / 16)) * 16;
	}
	bool empty() {
		if (_length == 1) return false;
		return true;
	}
	void append(const char* text) {
		for (int i = _length, index = 0; i < _length + strlen(text); i++) _text[i] = text[index++];
		_text[_length + strlen(text)] = '\0';
		_length = _length + strlen(text);
	}
	//int compare(const myString right); // -1, 0, 1
	void showstr();

	// Destructor

	~myString() {
		delete[] _text;
	}
};

myString::myString() {
	_text = new char[1] {""};
}

myString::myString(const char* text) {
	int len = strlen(text) + 1;
	_text = new char[len] {};
	for (int i = 0; i < len; i++) _text[i] = text[i];
	_length = strlen(_text) + 1;
	if (_length > _capacity - 1) _capacity = ((_length / _capacity) + 1) * 16;
}

myString::myString(const myString& other) {
	_length = other._length;
	_capacity = other._capacity;
	for (int i = 0; i < strlen(other._text) + 1; i++) _text[i] = other._text[i];
	if (_length > _capacity - 1) _capacity = ((_length / _capacity) + 1) * 16;
}

myString::myString(const size_t count, const char text) {
	_length = count + 1;
	if (_length > _capacity - 1) _capacity = ((_length / _capacity) + 1) * 16;
	_text = new char[_length] {};
	for (int i = 0; i < count; i++) _text[i] = text;
	_text[_length] = '\0';
}

void myString::showstr() {
	for (int i = 0; i < _length; i++) cout << _text[i];
	cout << endl;
}

int main() {
	myString a = "Salam  idfhgksdgfkhsdjkhfkjsd ksdkhskd";
	//myString b;
	//b = a;
	a.showstr();
	//b.showstr();
	a.append(" Qaqa");
	a.showstr();
	cout << a._capacity - 1 << endl;
}