#include <iostream>
#include <cassert>
using namespace std;


struct Node {
	string data;
	Node* next = nullptr;
	Node* prev = nullptr;

	Node() : data(), next(), prev() {}
	Node(string data) : data(data), next(), prev() {}
};

class DoubleLinkedList {
	Node* head;
	Node* end;
public:
	DoubleLinkedList() :head(), end(){}

	void addBack(Node* item) {
		if (head == NULL) {
			head = item;
			end = head;
			return;
		}
		end->next = item;
		item->prev = end;

		end = item;
	}

	void addBack(const string& str) {
		addBack(new Node(str));
	}

	void addFront(Node* item) {
		if (head == NULL) {
			head = item;
			end = head;
			return;
		}
		head->prev = item;
		item->next = head;
	
		head = item;
	}

	void addFront(const string& str) {
		addFront(new Node(str));
	}

	void popBack() {
		if (head == nullptr) return;
		end = end->prev;
		end->next = nullptr;
	}

	void popFront() {
		if (head == nullptr) return;
		head = head->next;	
	}

	void display() {
		cout << "{ ";
		Node* n = head;
		while (n != NULL) {
			cout << n->data << ' ';
			n = n->next;
		}cout << " }";
	}

	void displayBack() {
		cout << "{ ";
		Node* n = end;
		while (n != NULL) {
			cout << n->data << ' ';
			n = n->prev;
		}cout << " }";
	}
};


int main() {

	DoubleLinkedList list;
	list.addBack("Salam");
	list.addFront("Hesen");
	list.addFront("Hello");
	list.display();
	list.popFront();
	list.display();
	list.popBack();
	list.display();
	list.addFront("Javid");
	list.addFront("Javid");
	list.displayBack();


}