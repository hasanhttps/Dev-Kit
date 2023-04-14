#include <iostream>
#include <cassert>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::ostream;
using std::istream;





class  User {
	string _username;
	string _password;
	string _email;
public:
	// Constructors

	User() : _username("") {
		_password = "";
		_email = "";
	}
	User(string username, string password, string email) {
		setUsername(username);
		setPassword(password);
		setEmail(email);
	}

	// Copy Constructor

	User(const User& other) {
		setUsername(other._username);
		setPassword(other._password);
		setEmail(other._email);
	}

	// Operator Overloading

	User& operator=(const User& other) {
		setUsername(other._username);
		setPassword(other._password);
		setEmail(other._email);
	}

	User& operator=(User&& other) {
		setUsername(other._username);
		other._username = "";
		setPassword(other._password);
		other._password = "";
		setEmail(other._email);
	}

	friend ostream& operator << (ostream& print, User& other) {
		cout << "\t\t\tUser Info\n";
		cout << "Username : " << other._username << endl;
		cout << "Password : " << other._password << endl;
		cout << "Email : " << other._email << endl;
		return print;
	}

	friend istream& operator >> (istream& input, User& other) {
		string username;
		string password;
		string email;
		cout << "Please enter the username : ";
		cin >> username;
		cout << "Password : ";
		cin >> password;
		cout << "Email : ";
		cin >> email;
		other.setUsername(username);
		other.setPassword(password);
		other.setEmail(email);

		return input;
	}

	bool operator==(const User & other) {
		if (_username == other._username) {
			if (_password == other._password) {
				if (_email == other._email) {
					return true;
				}
			}
		}return false;
	}

	bool operator<(const User& other) {
		if (_username.length() < other._username.length()) {
			return true;
		}return false;
	}
	
	bool operator>(const User& other) {
		if (_username.length() > other._username.length()) {
			return true;
		}return false;
	}

	// Setters

	void setUsername(string username) { 
		if (username.size() <= 3) {
			assert(!"Your username can't be lower than 3 charachter!");
		}
		_username = username;
	}
	void setPassword(string password) { 
		_password = password;
	}
	void setEmail(string email) { 
		_email = email; 
	}

	// Getters

	string getUsername() { return _username; }
	string getPassword() { return _password; }
	string getEmail() { return _email; }
};

class Database {
	User** _users = nullptr;
	size_t count = 0;
public:
	Database(){
		count = 0;
	}
	Database(User** users, size_t count) {
		_users = users;
		this->count = count;
	}

	User operator[](size_t index) {
		return (*_users[index]);
	}

	User* getByUsername(string username) {
		for (int i = 0; i < count; i++){
			if ((*_users[i]).getUsername() == username) return _users[i];
		}
	}

	bool signUp(User* newUser) {
		for (int i = 0; i < count; i++){
			if ((*newUser).getUsername() == (*_users[i]).getUsername()) {
				if ((*newUser).getPassword() == (*_users[i]).getPassword()) {
					if ((*newUser).getEmail() == (*_users[i]).getEmail()) {
						return false;
					}
				}
			}
		}User** newUsers = new User*[count + 1]{};
		for (int i = 0; i < count; i++) {
			newUsers[i] = _users[i];
		}count++;
		newUsers[count - 1] = newUser;
		_users = newUsers;
		return true;
	}

	bool signIn(User* newUser) {
		for (int i = 0; i < count; i++) {
			if ((*newUser).getUsername() == (*_users[i]).getUsername()) {
				if ((*newUser).getPassword() == (*_users[i]).getPassword()) {
					if ((*newUser).getEmail() == (*_users[i]).getEmail()) {
						return true;
					}
				}
			}
		}return false;
	}

	bool signIn(string username, string password){
		for (int i = 0; i < count; i++) {
			if (username == (*_users[i]).getUsername()) {
				if (password == (*_users[i]).getPassword()) {
					return true;
				}
			}
		}return false;
	}

	User** data() {
		return _users;
	}
	size_t size() {
		return count;
	}
	~Database() {
		delete[] _users;
	}

};
	// class: Database:
	// field: User _users** = nullptr; 
	// field: size_t _count = 0;
	// method: User* getByUsername(string username)
	// method: bool signUp(User* newUser);
	// method: bool signIn(User* newUser);
	// method: bool signIn(string username, string password);

	// method: User** data();
	// method: size_t size();
	// Operator: []
	// Destructor

int main() {
	User* hesen = new User;
	cin >> *hesen;
	cout << *hesen;
	User** users = new User*[2]{
		hesen,
		new User(string("Ibrahim"), string("sfgsdfhkshdkfjhskd"), string("ksjhfkhsjkdhfjkshdjkfhksjdhfkjsddh"))
	}; 
	Database sql(users, 2);
	User* newUser = new User("Rustem", "Hesenli", "rustem@gmail.com");
	cout << sql.signUp(newUser) << endl;
	cout << sql.signIn(users[0]) << endl;
	cout << (*sql.getByUsername("Rustem"));
}