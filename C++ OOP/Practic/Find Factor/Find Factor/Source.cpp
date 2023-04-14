#include <iostream>
using namespace std;


int main() {



	int num = 16313;
	int count = 1;

	int factorCount = 0;

	while (num / 2 >= count) {
		if (num % count == 0) factorCount++;
		count++;
	}
	count = 1;
	int* factors = new int[factorCount];
	int i = 0;
	while (num / 2 >= count) {
		if (num % count == 0) factors[i++] = count;
		count++;
	}

	for (int i = 0; i < factorCount; i++) cout << factors[i] << endl;

}