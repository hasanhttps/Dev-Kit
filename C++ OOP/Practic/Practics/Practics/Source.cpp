#include <iostream>
using namespace std;
#include "Preprocessor.h";
#define print(value) (cout << value << endl)
typedef char* str;

struct Person {
	str name;
	str surname;
	int* age;
};


int main() {
	// Delete

	//int* a = new int;	
	//delete a;
	//a = nullptr;

	//int* c = new int[1] {10};
	//delete[] c;
	//c = nullptr;


	Person metin = Person{
		new char[] {"Metin"},
		new char[] {"Abdullazade"},
		new int(15)
	};

	print(metin.name);// Yuxarida preprocessor kodlari ile cout << value << endl a beraber print keywordu yaratmisiq


	Person* amin = new Person{
		new char[] {"Amin"},
		new char[] {"Abdullazade"},
		new int(15)
	};

	print(amin->name);
	print(amin->surname);
	print(amin->age);

	delete[] amin->name;
	delete[] amin->surname;
	delete amin->age;
	delete[] amin;
	amin = nullptr;
}