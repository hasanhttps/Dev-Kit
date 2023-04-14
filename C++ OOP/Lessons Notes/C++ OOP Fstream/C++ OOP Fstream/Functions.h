#pragma once


string typecast_int(int data) {
	int clonedata = data;
	int len = 0;
	while (clonedata != 0) {
		len++;
		clonedata /= 10;
	} string int_str;
	int_str.resize(len);
	for (int i = len - 1; i >= 0; i--) {
		int_str[i] = (data % 10) + 48;
		data /= 10;
	} return int_str;
}

int typecast_str(string data) {
	int str_int = 0;
	for (int i = 0; i < data.size(); i++) str_int = str_int * 10 + data[i] - 48;
	return str_int;
}

void saveChange(string fileName, Database*& database) {
	ofstream file(fileName, ios::out);

	if (!file) throw exception("File couldnt be opened");
	if (!file.is_open()) throw exception("File couldnt be opened");

	vector<Contact*> contacts = database->getConatcts();

	file << contacts.size() << endl;
	for (int i = 0; i < contacts.size(); i++) {
		string name = contacts[i]->getName();
		string gmail = contacts[i]->getGmail();
		string number = contacts[i]->getNumber();
		int id = contacts[i]->getId();
		bool isName = contacts[i]->getIsName();
		file << name << " " << gmail << " " << number << " " << typecast_int(id) << " " << ((isName) ? "true" : "false") << "\n";
	}

	file.close();
}

void setDatas(string fileName, Database*& database) {
	try {
		ifstream infile(fileName, ios::in);

		if (!infile) throw exception("File couldnt be found");
		if (!infile.is_open()) throw exception("File couldnt be opened");

		vector<Contact*> contacts;
		Contact* newContact;
		string len;
		infile >> len;
		int length = typecast_str(len);
		string name;
		string gmail;
		string number;
		string isNames;
		int id;
		string ids;

		for (int i = 0; i < length; i++) {
			infile >> name;
			infile >> gmail;
			infile >> number;
			infile >> ids;
			infile >> isNames;
			id = typecast_str(ids);
			if (isNames == "true") newContact = new Contact(name, number);
			else newContact = new Contact(gmail, number, false);
			newContact->setId(id);
			contacts.push_back(newContact);
		}database->setContacts(contacts);
		infile.close();
	}
	catch (exception& other) {
		cout << other.what() << endl;
	}
}