#pragma once

// Out of Class

size_t Car::_staticId = 0;

Car::Car() {
	_id = ++_staticId;
}

Car::Car(stri maker, stri model, stri color) : Car(){
	setMaker(maker);
	setModel(model);
	setColor(color);
}

Car::Car(stri maker, stri model, stri color, ushort year, double engine) : Car(maker, model, color) {
	_year = year;
	_engine = engine;
}

CarGallery::CarGallery(stri name) {
	setName(name);
}

CarGallery::CarGallery(stri name, stri addres) : CarGallery(name){
	setAddress(addres);
}

// Set Methods

void Car::setMaker(stri maker) {
	if (maker == nullptr) assert(!"Maker == Null");
	if (_maker != nullptr) delete[] _maker;
	int lenmake = strlen(maker) + 1;
	_maker = new char[lenmake] {};
	for (int i = 0; i < lenmake; i++)  _maker[i] = maker[i];
}

void Car::setModel(stri model) {
	if (model == nullptr) assert(!"Model == Null");
	if (_model != nullptr) delete[] _model;
	int lenmodel = strlen(model) + 1;
	_model = new char[lenmodel] {};
	for (int i = 0; i < lenmodel; i++)  _model[i] = model[i];
}

void Car::setColor(stri color) {
	if (color == nullptr) assert(!"Color == Null");
	if (this->color != nullptr) delete[] this->color;
	int lencolor = strlen(color) + 1;
	this->color = new char[lencolor] {};
	for (int i = 0; i < lencolor; i++)  this->color[i] = color[i];
}

void Car::Year(ushort year) {
	if (year <= 1900 || year >= 2023) assert(!"Olmaz decellik eleme!");
	_year = year;
}

void Car::setEngine(double engine) {
	if (engine <= 0.0 || engine >= 5.5) assert(!"Kuleyleme dee!");
	_engine = engine;
}

void CarGallery::setName(stri name) {
	int len = strlen(name) + 1;
	this->name = new char[len] {};
	for (int i = 0; i < len; i++) this->name[i] = name[i];
}

void CarGallery::setAddress(stri addres) {
	int len = strlen(addres) + 1;
	address = new char[len] {};
	for (int i = 0; i < len; i++) address[i] = addres[i];
}

void CarGallery::setCount(size_t count) {
	if (count >= 0) _carCount = count;
	else assert(!"Count of cars can't be lower than zero.");
}

void CarGallery::setCars(Car** cars) {
	clear();
	if (cars == nullptr) assert(!"Cars == Null");
	_cars = cars;
}

void Car::setId(size_t id) {
	_id = id;
}

// Get Methods

size_t Car::getStaticId() {
	return _staticId;
}

size_t Car::getId() {
	return _id;
}

stri Car::getMaker() {
	return _maker;
}

stri Car::getModel() {
	return _model;
}

stri Car::getColor() {
	return color;
}

ushort Car::getYear() {
	return _year;
}

double Car::getEngine() {
	return _engine;
}

const char* CarGallery::getName() {
	return name;
}

const char* CarGallery::getAddress() {
	return address;
}

size_t CarGallery::getCount(){
	return _carCount;
}

Car** CarGallery::getCars() {
	return _cars;
}

// Destructors

Car::~Car() {
	delete[] _maker;
	delete[] _model;
	delete[] color;
}

CarGallery::~CarGallery() {
	delete[] name;
	delete[] address;
}

// Functions

void Car::print() {
	cout << "\t\t\tCar Info\n";
	cout << "Id : " << _id << endl;
	cout << "Maker : " << _maker << endl;
	cout << "Model : " << _model << endl;
	cout << "Color : " << color << endl;
	cout << "Year : " << _year << endl;
	cout << "Engine : " << _engine << endl;
}

void CarGallery::print() {
	cout << "\t\t\tCar Gallery Info\n";
	cout << "Name : " << name << endl;
	cout << "Address : " << address << endl;
	cout << "Car Count : " << _carCount << endl;
	for (int i = 0; i < _carCount; i++) (*_cars[i]).print();
}

void CarGallery::clear() {
	for (int i = 0; i < _carCount; i++) {
		delete _cars[i];
	}
	delete _cars;
}

void CarGallery::appendCar(Car* car) {
	Car** newCars = new Car * [_carCount + 1] {};
	for (int i = 0; i < _carCount; i++){
		newCars[i] = _cars[i];
	}
	newCars[_carCount] = car;
	_carCount++;
	_cars = newCars;
}

void CarGallery::removeCar(Car* car) {
	for (int i = 0; i < _carCount; i++) {
		if (_cars[i] == car) {
			delete _cars[i];
			for (int j = i; j < _carCount - 1; j++) {
				(*_cars[j]) = (*_cars[j + 1]);
				(*_cars[j]).setId(j + 1);
			}
			_carCount--;
			break;
		}
	}
}

void CarGallery::deleteCarId(size_t id) {
	delete _cars[id - 1];
	_carCount--;
	for (int i = id - 1; i < _carCount; i++){
		(*_cars[i]) = (*_cars[i + 1]);
		(*_cars[i]).setId(i + 1);
	}
}