#include<iostream>
// using namespace std; This is not optimize

using std::string;
using std::cout;
using std::endl;

// using namespace std; Bele yazmaq yerine sadece istifade edeceyimiz funksiyani import ederek daha optimal proqram yaza bilerik
// using std::string;

// Abstraction

class Abstract {
	virtual void askForPromotion() = 0;
};

class Employee:Abstract {
	//Members of Class
	//Atributes

	// In c++ class methods and attributes defaultly is private that's why we need type public to use this methods and etc.

private:
	string Company;
	int age;
protected:
	string name;
public:
	// In c++ class 3 accses modifier : Public , private , protected

	//We have in c++ methods in class

	void introduceYourself() {
		cout << "Name : " << name << endl;
		cout << "Company : " << Company << endl;
		cout << "Age : " << age << endl;
	}

	// Initializiton of Constructor

	Employee(string Name, string company, int Age) {

		name = Name;
		Company = company;
		age = Age;

		// Constructor Rules
		/*
		1. Constructor has no return type.
		2. Constructor's name must be same with name of class
		3. Contructor must be public.
		4. Variables must be different from class name of variables
		*/
	}

	// In class paradigm we have 4 important OOP principles those are:

	/*
	1. Encapsulation
	2. Inheritance
	3. Abstraction
	4. Polymorphism
	*/

	// Encapsulation

	// We have accses in public to change private variables

	void setName(string Name) {
		// We can change private variables only in public in class
		name = Name;
	}
	string getName() {
		return name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int Age) {
		if (Age >= 18)
		age = Age;
	}
	int getAge() {
		return age;
	}

	// Abstraction

	void askForPromotion() {
		if (age > 20)
			cout << name << " got promoted !" << endl;
		else
			cout << name << " no promoted !" << endl;
	}


	// Virtual keyword help us if our name of method in parent class has in child class same it's automaticly run child class depend on for object type.	

	virtual void work() {
		cout << name << " is checking email, task backlog, performing tasks." << endl;
	}
};

//Inheritance -- Toreme ;


// If we want use employee's element's directly We must use child class : public father class
class Developer: public Employee {
public:
	string FavProgrammingLang;
	Developer(string Name, string company, int Age, string language)
		:Employee(Name, company, Age) {
		FavProgrammingLang = language;
	}
	void FixBug() {
		// cout << getName() << " solved the " << FavProgrammingLang << " problem." << endl;
		// or

		cout << name << " solved the " << FavProgrammingLang << " problem." << endl;
	}
	void work() {
		cout << name << " is writing code in " << FavProgrammingLang << endl;
	}
};


class Teacher :public Employee {
public:
	string Subject;
	Teacher(string Name, string company, int Age, string subject) :Employee(Name, company, Age) {
		Subject = subject;
	}
	void preaperLesson() {
		cout << name << " is preparing " << Subject << endl;
	}
	void work() {
		cout << name << " is teaching " << Subject << endl;
	}
};

int main() {
	// Initializion of Employee type

	// Normal type

	int age;

	// User-Defined Class type

	// Object -- Instance

	// It's Default construct object initialization
	
	// Employee emp1;

	//emp1.name = "Hesen";
	//emp1.company = "It Step";
	//emp1.age = 14;
	//emp1.introduceYourself();

	// Employee emp2;

	//emp2.name = "John";
	//emp2.company = "Amazon";
	//emp2.age = 25;
	//emp2.introduceYourself();
	

	// It's constructed object initialization

	//Employee emp1 = Employee("Hesen", "It Step", 14);// This is constructed object of Employee class
	//emp1.introduceYourself();

	//Employee emp2 = Employee("John", "Amazon", 25);// This is constructed object of Employee class
	//emp2.introduceYourself();

	//// Encapsualtion

	//emp1.setAge(13);

	//cout << emp1.getName() << " is " << emp1.getAge() << " years old." << endl;

	//// Abstraction

	//emp1.askForPromotion();
	//emp2.askForPromotion();

	// Inheritance

	Developer Hesen = Developer("Hesen", "Google", 24, "C++");
	Hesen.FixBug();
	Hesen.askForPromotion();
	Teacher t = Teacher("Rustem", "It step", 30, "Math");
	t.preaperLesson();

	// Poly - Coxlu , Morphism -- formalar

	// Many forms
	// Polymorphism -- The most common use of polymorphism is when a parent class reference is used  to refer a child class object

	Hesen.work();
	t.work();

	Employee* emp1 = &Hesen;
	Employee* emp2 = &t;

	emp1->work();
	emp2->work();
}