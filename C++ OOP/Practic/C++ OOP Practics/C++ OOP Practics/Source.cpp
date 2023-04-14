#include <iostream>
#include <string>
#include <cassert>
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::srand;
using std::time;
using std::rand;




class Vector {
	int* _array = nullptr;
	size_t _size = 0;
	size_t _capacity = 15;
public:

	Vector() {
		_array = new int[_capacity];
	}
	Vector(size_t capacity) {
		if (_capacity < 15) {
			_array = new int[_capacity];
			return;
		}
		_capacity = capacity;
		_array = new int[_capacity];
	}
	void print() {
		cout << "{ ";
		for (int i = 0; i < _size; i++) if (i != _size - 1) cout << _array[i] << ", "; else cout << _array[i];
		cout << " }" << endl;
	}
	int& operator[](size_t index) { 
		if (index > _size) assert(!"Index out of range !");
		if (index < 0) assert(!"Index out of range !");
		return _array[index]; 
	}
	int& operator()(size_t index) { 
		if (index > _size) assert(!"Index out of range !");
		if (index < 0) assert(!"Index out of range !");
		return _array[index]; 
	}

	Vector& operator++() {
		for (int i = 0; i < _size; i++) ++_array[i];
		return *this;
	}

	Vector& operator++(int) {
		for (int i = 0; i < _size; i++) _array[i]++;
		return *this;
	}

	Vector operator+(const Vector& other) {
		int len = _size + other._size;
		Vector newVector(((_size + other._size) / 15 + 1) * 15);
		newVector._size = len;
		for (int i = 0; i < len; i++) {
			if (i < _size) newVector[i] = _array[i];
			else newVector[i] = other._array[i - _size];
		}
		return newVector;
	}

	bool operator==(const Vector& other) {
		bool status = true;
		if (_size == other._size) {
			for (int i = 0; i < _size; i++) {
				if (other._array[i] != _array[i]) status = false;
			}if (status) return true;
		}return false;
	}

	bool operator!=(const Vector& other) {
		bool status = true;
		if (_size == other._size) {
			for (int i = 0; i < _size; i++) {
				if (other._array[i] != _array[i]) status = false;
			}if (status) return false;
		}return true;
	}

	Vector& push_back(const int value) {
		if (_capacity == _size++) _capacity += 15;
		int* newarrey = new int[_capacity];
		for (int i = 0; i < _size; i++) newarrey[i] = _array[i];
		newarrey[_size - 1] = value;
		_array = newarrey;
		return *this;
	}

	Vector& push_front(const int value) {
		if (_capacity == _size++) _capacity += 15;
		int* newarrey = new int[_capacity];
		newarrey[0] = value;
		for (int i = 1; i < _size; i++) newarrey[i] = _array[i - 1];
		_array = newarrey;
		return *this;
	}

	Vector& pop_back() {
		_size--;
		int* newarrey = new int[_capacity];
		for (int i = 0; i < _size; i++) newarrey[i] = _array[i + 1];
		_array = newarrey;
		return *this;
	}

	Vector& pop_front() {
		_size--;
		int* newarrey = new int[_capacity];
		for (int i = 0; i < _size; i++) newarrey[i] = _array[i];
		_array = newarrey;
		return *this;

	}

	void delete_by_index(const size_t index) {
		if (index > _size) assert(!"Index out of range !");
		if (index < 0) assert(!"Index out of range !");
		int* newarrey = new int[_capacity];
		for (int i = 0, ind = 0; i < _size; i++) {
			if (i != index) newarrey[ind++] = _array[i];
		}_size--;
		_array = newarrey;
	}

	void insert_by_index(const size_t index, const int element) {
		if (index > _size) assert(!"Index out of range !");
		if (index < 0) assert(!"Index out of range !");
		if (_capacity == _size++) _capacity += 15;
		int* newarrey = new int[_capacity];
		for (int i = 0, ind = 0; i < _size; i++) {
			if (i != index) newarrey[i] = _array[ind++];
			else newarrey[i] = element;
		}
		_array = newarrey;
	}

	//// tapsa index-ni qaytarsin,
	//// tapmasa -1 (unsigned int-in max qiymeti qayidacaq)
	size_t find(const int element) {
		for (int i = 0; i < _size; i++) {
			if (_array[i] == element) {
				return i;
			}
		}return -1;
	}
	size_t rfind(const int element) {
		for (int i = _size - 1; i >= 0; i--) {
			if (_array[i] == element) {
				return i;
			}
		}return -1;
	}
	//// reverse true gonderilse, tersine sort olunsun.
	void sort(bool reverse = false) {
		int key, j;
		for (int i = 1; i < _size; i++){
			key = _array[i];
			j = i - 1;
			if (reverse) {
				while (j >= 0 && _array[j] < key) {
					_array[j + 1] = _array[j];
					j -= 1;
				}_array[j + 1] = key;
			}else {
				while (j >= 0 && _array[j] > key) {
					_array[j + 1] = _array[j];
					j -= 1;
				}_array[j + 1] = key;
			}
		}
	}

	size_t len() { return _size; }
	size_t capacity() { return _capacity; }

	void insert(size_t index, const int data) {
		for (int i = 0; i < _size; i++) if (i == index) _array[i] = data;
	}

	void remove(const int data) {
		if (_size > 0) _size--;
		int* newarrey = new int[_capacity];
		for (int i = 0, ind = 0; i < _size + 1; i++) {
			if (_array[i] != data) newarrey[ind++] = _array[i];
		}
	}

	void clear() {
		delete[] _array;
		_array = new int[_capacity];
		_size = 0;
	}

	int& first() { return _array[0]; }

	int& last() { return _array[_size]; }

	void shuffle() {
		int index1, index2;
		for (int i = 0; i < _size / 2; i++) {
			index1 = 0, index2 = 0;
			index1 = rand() % _size;
			while (index2 == index1) {
				index2 = rand() % _size;
			}int temp = _array[index1];
			_array[index1] = _array[index2];
			_array[index2] = temp;
		}
	}

	const int* getRange(size_t min, size_t max) {
		int* range = new int[max - min];
		for (int i = min, ind = 0; i < max; i++) range[ind++] = _array[i];
		cout << "{ ";
		for (int i = 0; i < max; i++) if (i != max - 1) cout << range[i] << ", "; else cout << range[i];
		cout << " }" << endl;
		return range;
	}

	~Vector() {
		delete[] _array;
	}
};


int main() {
	srand(time(0));

	Vector v1;

	v1.push_front(2);
	v1.push_front(3);
	v1.push_front(4);
	v1.push_back(1);
	v1.push_back(0);
	v1.print();
	v1.delete_by_index(0);
	v1.print();
	v1.insert_by_index(0, 4);
	v1.print();
	v1.sort();
	v1.print();
	v1.sort(true);
	v1.print();
	v1.shuffle();
	v1.print();
	cout << v1.len() << endl;
	const int* range = v1.getRange(0, 3);
	v1.pop_back();
	v1.print();
	v1.pop_front();
	v1.print();

	++v1;
	v1.print();

	Vector v2;
	v2.push_front(3);
	v2.push_front(4);
	v2.push_front(5);
	v2.print();

	cout << (v1 == v2) << endl;
	cout << (v1 != v2) << endl;
	Vector v = v1 + v2;
	v.print();

}