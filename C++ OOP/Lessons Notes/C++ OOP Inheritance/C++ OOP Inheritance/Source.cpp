#include<iostream>
using namespace std;


class A {
public:
	int x;
protected:
	int y;
private:
	int z;
};

class B : public A {

};

class C : public B {

};

class Person {
public:
	string name;
	string surname;
	int age;

	Person(string name, string surname, int age) {
		this->name = name;
		this->surname = surname;
		this->age = age;
	}
};


class Student :public Person {
public:
	int avg;

	Student(string name, string surname, int age, int avg) : Person(name, surname, age) {
		this->avg = avg;
	}
};


int main() {
	// Class Realation

	// has a (Acocattion) => var

	// Eger class'in field'i basqa bir classdan asildirsa bu MyClass has a otherclass

	// use   (Dependancy) => asililiq

	// Eger class'da biz field olaraq yox her hansi bir method'un return type ve ya parametr kimi basqa bir class'i istifade etsek
	// Bu MyClass use otherclass olur.

	// Inheritance
}