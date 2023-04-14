#pragma once


class Database {
	vector<Contact*> contacts;
public:
	void addContact(Contact* other) {
		for (int i = 0; i < contacts.size(); i++) {
			if (contacts[i]->getId() == other->getId()) {
				cout << "This contact exist in your contact!";
				return;
			}
		}contacts.push_back(other);
	}
	void deleteContact(Contact* other) {
		Contact* temp = contacts[contacts.size() - 1];
		for (int i = 0; i < contacts.size(); i++) {
			if (*(contacts[i]) == *other) {
				contacts[contacts.size() - 1] = contacts[i];
				contacts[i] = temp;
			}
		}
		contacts.pop_back();
	}
	Contact* searchById(int id) {
		for (int i = 0; i < contacts.size(); i++) {
			if (contacts[i]->getId() == id) return contacts[i];
		}return NULL;
	}
	Contact* searchByName(string name) {
		for (int i = 0; i < contacts.size(); i++) {
			if (contacts[i]->getName() == name) return contacts[i];
		}return NULL;
	}Contact* searchByGmail(string gmail) {
		for (int i = 0; i < contacts.size(); i++) {
			if (contacts[i]->getGmail() == gmail) return contacts[i];
		}return NULL;
	}
	Contact* searchByNumber(string number) {
		for (int i = 0; i < contacts.size(); i++) {
			if (contacts[i]->getNumber() == number) return contacts[i];
		}return NULL;
	}
	void showContacts() const {
		for (int i = 0; i < contacts.size(); i++) cout << *(contacts[i]) << endl;
	}

	// Acsessors

	// Setters

	void setContacts(vector<Contact*> contacts) {
		this->contacts = contacts;
	}

	// Getters

	const vector<Contact*> getConatcts() { return contacts; }

	// Function Overloading

	friend ostream& operator<<(ostream& print, const Database& other) {
		other.showContacts();
	}
};