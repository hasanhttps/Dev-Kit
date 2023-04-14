#pragma once


class Contact {
	int _id;
	static int sid;
	string _name;
	string _gmail;
	string _number;
	bool isName = true;
public:
	Contact() {
		_id = ++sid;
	}
	Contact(string number) {
		if (_number.size() != 10) {
			cout << "Invalid Size!" << endl;
		}
		else _number = number;
		_id = ++sid;
	}
	Contact(string name, string number) : _name(name), _number(number) {
		_id = ++sid;
		this->_gmail = "-";
	}
	Contact(string gmail, string number, bool isName) : _gmail(gmail), _number(number) {
		_id = ++sid;
		this->isName = isName;
		_name = "-";
	}

	// Acsessors     

	// Setters     

	void setId(int id) { _id = id; }
	void setName(string name) { _name = name; }
	void setGmail(string gmail) { _gmail = gmail; }
	void setNumber(string number) {
		if (_number.size() != 10) {
			cout << "Invalid Size!" << endl;
			return;
		}_number = number;
	}

	// Getters     

	const string& getName() { return _name; }
	const string& getGmail() { return _gmail; }
	const string& getNumber() { return _number; }
	const int& getId() { return _id; }
	const bool getIsName() { return isName; }

	// Function overloading

	friend ostream& operator<<(ostream& print, const Contact& other) {
		cout << "Id : " << other._id << endl;
		if (!other.isName) cout << "Gmail : " << other._gmail << endl;
		else cout << "Name : " << other._name << endl;
		cout << "Number : " << other._number << endl;


		return print;
	}

	bool operator==(const Contact& other) {
		if ((_name == other._name && isName || !isName && _gmail == other._gmail) && _number == other._number && _id == other._id) return true;
		return false;
	}
};

int Contact::sid = 0;