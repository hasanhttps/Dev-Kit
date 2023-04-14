#include <iostream>
using namespace std;



int main() {

	// !!!!!!!!!!!!!!! QEYD SUALLARI COMMENTDEN CIXARTMIYIN !!!!!!!!!!!!!!!
	// Narahat olmayin error olaraq yazida hec bir xeta yoxdur bir sozle syntax xetasi yoxdur. Olasi bir compile-time error ola biler.
	// Bu yazini usaqlar gormesin.


	// If questions

	// HARD QUESTIONS

	// Task 1

	// Eger user input sifira beraber olarsa terminal'a neler cixacaqdir?

	//int user_input; // 0

	//cout << "Please enter the number : ";
	//cin >> user_input; // 0

	//if (user_input) {
	//	cout << "Test 1" << endl;
	//}
	//else if (!user_input) {
	//	cout << "Test 2" << endl;
	//	if (user_input % 0 == 0) {
	//		cout << "Test 3" << endl;
	//	}
	//}
	//else {
	//	cout << "Test 5" << endl;
	//}
	//cout << "End" << endl;
	//

	// Task 2

	// Eger user input 20'e beraber olarsa terminal'a neler cixacaqdir?

	//double user_input; // 20

	//cout << "Please enter the number : ";
	//cin >> user_input; // 20

	//if (user_input) {
	//	cout << "Test 1" << endl;
	//}
	//else if (!user_input) {
	//	cout << "Test 2" << endl;
	//	if (user_input % 20 == 0) {
	//		cout << "Test 3" << endl;
	//	}
	//}
	//else {
	//	cout << "Test 5" << endl;
	//}
	//cout << "End" << endl;

	// While if Questions

	// Task 3

	// Terminala sirasi ile neler cixacaqdir?

	//int count = 0;

	//do {
	//	cout << "Test 1" << endl;
	//	count++;
	//	if (count) {
	//		cout << "Test 2" << endl;
	//		while (count) {
	//			cout << "Test 3" << endl;
	//			if (count == 1) break;
	//			else count = 1;
	//			count--;
	//		}
	//	}
	//} while (count != 0);
	//cout << "end";


	// Task 4

	// Terminal'a neler cixacaqdir?

	//int count = 0;

	//while (++count) {
	//	if (!count--) {
	//		cout << "Test 1" << endl;
	//		cout << count << endl;
	//	}
	//	else if (!count) {
	//		cout << "Test 2" << endl;
	//		cout << count-- << endl;
	//	}
	//}cout << "end" << endl;

	// Switch case, while, if Questions

	// Task 5

	//int count = 15;
	//
	//switch (int(bool(count))) {
	//case 15:
	//	cout << "Test 1" << endl;
	//case 1:
	//	cout << "Test 2" << endl;
	//case 0:
	//	cout << "Test 3" << endl;
	//	switch (++count % 2) {
	//	case 0:
	//		cout << "Test 4" << endl;
	//	case 7:
	//		cout << "Test 5" << endl;
	//		return 5;
	//	default:
	//		cout << "Test 6" << endl;
	//		cout << count << endl;
	//		break;
	//	}
	//default:
	//	break;
	//}cout << "end" << endl;
	
	// Task 6

	//int count = 0;

	//switch (count++) {
	//case 0:
	//	cout << "Test 1" << endl;
	//	cout << count << endl;
	//	break;
	//case 1:
	//	cout << "Test 2" << endl;
	//	cout << count << endl;
	//	break;
	//default:
	//	break;
	//}cout << "end";

	
	// Basic Questions

	// Switch case
	
	// Task 1

	//double count = 0;

	//switch (count) {
	//case 0:
	//	cout << "Test 1" << endl;
	//	break;
	//case 1:
	//	cout << "Test 2" << endl;
	//	break;
	//default:
	//	break;
	//}cout << "end";

	// Task 2
	
	/*int count = 0;
	if (++count + count++ && --count + ++count) {
		cout << count << endl;
	}
	else cout << count << endl;
	cout << "end" << endl;*/

	// Task 3  
	
	//int count = 1;
	//if (count && --count) {
	//	cout << "Test 1" << endl;
	//	count = 5;
	//}
	//else if (!count) {
	//	cout << "Test 2" << endl;
	//	count = 1;
	//}
	//else cout << "Test 3" << endl;
	//if (count == 5) cout << "Test 4" << endl;
	//else cout << "Test 5" << endl;

	//cout << "end";

	// Hard Questions Answers

	// Task 1 ~ Test 2, Error (Zero Division error at line 26).
	// Task 2 ~ Compile-Time Error (Double or Float can't use with mod operator).
	// Task 3 ~ Test 1, Test 2, Test 3, Test 1, Test 2, Test 3, end.
	// Task 4 ~ Test 2, 0, end.
	// Task 5 ~ Test 2, Test 3, Test 4, Test 5.
	// Task 6 ~ Test 1, 1, end.

	// Basic Questions Answers

	// Task 1 ~ Compile-Time Error (Switch can't work with any float or double type).
	// Task 2 ~ 2, end
	// Task 3 ~ Test 2, Test 5, end
}