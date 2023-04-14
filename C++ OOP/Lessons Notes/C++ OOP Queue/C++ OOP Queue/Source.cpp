#include <iostream>
#include <cassert>
#include <string>
using namespace std;


class Worker {
	static int currentId;
	size_t _id;
	string _name;
	size_t _pcount;
public:
	Worker() {
		_id = currentId++;
	}
	Worker(string name, size_t pcount);
	friend ostream& operator<<(ostream& print, const Worker& other) {
		for (int i = other._pcount; i > 0; i--) cout << other._id << " " << other._name << " - " << other._pcount - i + 1 << endl;
		return print;
	}
};

int Worker::currentId = 1;

Worker::Worker(string name, size_t pcount) : Worker() {
	_name = name;
	_pcount = pcount;
}

template<typename T>
class Queue {
public:
	size_t _size = 0;
	size_t _front = -1;
	size_t _rear = -1;
	size_t _capacity = 5;

	T* _arr = new T[_capacity];
	bool isFull() {
		return (_size == _capacity);
	}
	bool isEmpty() {
		return (_size == 0);
	}
	void push(T item) {
		if (isFull()) assert(!"Queue is full!");
		if (isEmpty()) _front = 0;
		_arr[++_rear] = item;
		_size++;
	}
	int deQueue() {
		if (isEmpty()) assert(!"Queue is empty!");
		if (_rear == _front) {
			_rear = -1;
			_front = -1;
		}
		_front++;
		_size--;
		return _front - 1;
	}

};


template<typename T>
class Printer {
	Queue<T> _queue;
public:
	Printer(Queue<T> queue) {
		_queue = queue;
	}

	void start() {
		while (_queue.isEmpty() == false) {
			for (int i = _queue._front; i <= _queue._rear; i++) {
				cout << _queue._arr[i] << endl;
			}
			_queue.deQueue();
		}

	}
};

int main() {

	Worker w1("Rustem", 3);
	Worker w2("Hesen", 5);
	Queue<Worker> queue;
	queue.push(w1);
	queue.push(w2);
	Printer<Worker> p1(queue);
	p1.start();
}