#include <iostream>
#include <cassert>

using namespace std;


class User {
	static int _staticId;
	int* _id = nullptr;
	char* _username = nullptr;
	char* _password = nullptr;
	char* _email = nullptr;

public:
	User() {
		_id = new int(_staticId++);
	}

	User(const char* username, const char* password) : User() {
		cout << "Ctor with Param\n";

		set_username(username);
		set_password(password);
	}

	User(const char* username, const char* email, const char* password) : User(username, password) {

		set_email(email);
	}

	void set_username(const char* username) {
		assert(!(username == nullptr));

		if (_username != nullptr) delete[] _username;

		size_t len = strlen(username) + 1;
		_username = new char[len];
		strcpy_s(_username, len, username);
	}

	void set_email(const char* email) {
		assert(!(email == nullptr));

		if (_email != nullptr) delete[] _email;

		size_t len = strlen(email) + 1;
		_email = new char[len];
		strcpy_s(_email, len, email);
	}

	void set_password(const char* password) {
		assert(!(password == nullptr));

		if (_password != nullptr)
			delete[] _password;

		size_t len = strlen(password) + 1;
		_password = new char[len];
		strcpy_s(_password, len, password);
	};



	void print() const {
		cout << "\nAddress id: " << (_id ? _id : 0) << endl;
		cout << "Id: " << (_id ? *_id : 0) << endl;
		cout << "Username: " << (_username ? _username : "null") << endl;
		cout << "Email: " << (_email ? _email : "null") << endl;
		cout << "Password: " << (_password ? _password : "null") << endl;
	}


	~User() {
		cout << "\nDestructor for-> " << (_id ? _id : 0) << endl;
		delete _id;
		delete[] _username;
		delete[] _email;
		delete[] _password;
	}
};


int User::_staticId = 1;



int main() {

	User hesen("Hesen", "12345678");
	hesen.print();
	
}