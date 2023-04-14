#include <iostream>

using namespace std;


int main() {

	int number = 18;
	
	int* ptr = &number;


	cout << number << endl;
	cout << &number << endl;

	cout << ptr << endl;
	cout << &ptr << endl;

}