#include <iostream>
#include <cassert>
using namespace std;

class Node {
public:
	string data;
	Node* next;

	Node() : data() , next() { }
	Node(const string data) : next() {
		this->data = data;
	}
	Node(const string data, Node* next) {
		this->data = data;
		this->next = next;
	}
};

class LinkedList {
	Node* head;
public:
	LinkedList() : head() { }
	
	// Add Front
	// Add Back
	// Pop Front
	// Pop Back
	// Display

	void AddFront(Node* data) {
		Node* first = head;
		head = data;
		data->next = first;
		first = nullptr;
	}
	
	void AddFront(const string& string) {
		Node* newItem = new Node(string);
		AddFront(string);
	}

	void AddBack(Node* data) {
		if (head == NULL) {
			head = data;
			return;
		}
		Node* first = head;
		while (first->next != NULL) {
			first = first->next;
		}first->next = data;


	}
	
	void AddBack(const string& string) {
		AddBack(new Node(string));
	}

	void popBack() {
		if (head == nullptr) return;
		Node* first = head;
		while (first->next->next != NULL) {
			first = first->next;
		}first->next = NULL;
	}

	void popFront() {
		if (head == nullptr) return;
		head = head->next;

	}

	void display() {
		Node* first = head;
		while (first != NULL) {
			cout << first->data;
			first = first->next;
		}cout << endl;
	}
};

int main() {
	Node item3("Necesen ?");
	Node item2("Salam", &item3);
	Node item1("Sagol", &item2);
	Node item4(" Element");
	Node item5("Node");
	Node item6(" New");

	LinkedList list;
	list.popBack();
	list.display();
	list.popFront();
	list.display();
	list.AddFront(&item4);
	list.AddFront(&item5);
	list.AddBack(&item6);
	list.AddBack(" Check");
	list.display();
	list.popBack();
	list.display();
	list.popFront();
	list.display();

}