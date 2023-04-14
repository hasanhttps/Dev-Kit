#include <iostream>
#include <list>
#include <algorithm>
using namespace std;


bool predicate(list<int> a, list<int> b) {
	return a > b;
}


int main() {
	list<int> numbers;
	numbers.push_back(12);
	numbers.push_back(17);
	numbers.push_back(25);
	numbers.push_back(14);
	numbers.push_back(15);
	numbers.push_back(23);
	numbers.push_back(31);
	numbers.push_back(18);
	numbers.push_back(10);
	numbers.push_back(22);

	int cot = count(begin(numbers), end(numbers), 12);
	cout << cot << endl;

	// Lambda  =>  Anonim Function  =>  Adsiz funksiya

	// Syntax

	[]()->void { // Lambda function
		cout << "Hello World." << endl;
	};

	// Meanings

	// []  =>  Capture list
	// ()  =>  Param list
	// ->  =>  Return type
	// {}  =>  Body part

	// Explanate

	// Lambda Explanation  =>  It's use for predicate using without creating new function. It helps us for 
	// creating and deletin function when its work done.


	// Calling Lambvda Function

	[]()->void { // Lambda function
		cout << "Hello World." << endl;
	}();// with () we can creat the lambda (anonim) function.

	// Use return

	int a = []()->int { // Lambda function
		cout << "Hello World." << endl;
		return 1;
	}();// with () we can creat the lambda (anonim) function.

	// Lambda Function pointer

	int (*fp)() = []()->int { // Lambda function
		cout << "Hello World." << endl;
		return 1;
	};// if we don't type () to call the lambda function it returns us the adress of lambda function 

	cout << fp() << endl;

	int (*add)(int, int) = [](int a, int b)->int { // Lambda function
		cout << "Hello World." << endl;
		return a + b;
	};// if we don't type () to call the lambda function it returns us the adress of lambda function

	cout << add(5, 4) << endl;

	// Giving enclosing field

	int b = 5;// Giving it a lambda function we use capture list. But it create const copy of variable.
	// If we don't type variable in capture list we can't use local(enclosing) variable we can use
	// only global variables. But we can't change variable because this copy is constant.

	[b]()->int { // Lambda function
		cout << "Hello World." << endl;
		return 1;
	};

	// Giving all local(enclosing) variables

	// [=]  =>  This help us to gain all variables from main. This method is by value - it create const copy.

	[=]()->int { // Lambda function
		b;
		cout << "Hello World." << endl;
		return 1;
	};

	// Giving all local(enclosing) variables by reference

	// [&]  => This give us reference of all enclosing variables
	// [&b] => This helps us to use only a with reference of b.
	// [&, b] => This help us to use all variables by reference only b to use with it's const copy.

	auto find = count_if(
		begin(numbers),
		end(numbers),
		[](int& a)->bool {return a == 12; });
	cout << find << endl;
}