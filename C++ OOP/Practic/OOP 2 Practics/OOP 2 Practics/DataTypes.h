#pragma once

typedef char* str;
typedef const char* stri;
typedef unsigned short int ushort;

class Car {
private:
	static size_t _staticId;// Static deyisene class icerisinde deyer vere bilmerik cunki isleme prinsipi pozulur lakin azaldib coxalda bilerik.
	size_t _id;
	str _maker = nullptr;
	str _model = nullptr;
	str color = nullptr;
	ushort _year = 0;
	double _engine = 0.0;
public:

	// Constructors

	Car();
	Car(stri maker, stri model, stri color);
	Car(stri maker, stri model, stri color, ushort year, double engine);

	// Get Methods
	
	static size_t getStaticId();
	size_t getId();
	stri getMaker();
	stri getModel();
	stri getColor();
	ushort getYear();
	double getEngine();

	// Set Methods

	void setMaker(stri maker);
	void setModel(stri model);
	void setColor(stri color);
	void Year(ushort year);
	void setEngine(double engine);
	void setId(size_t id);

	// Print

	void print();

	// Destructor

	~Car();
};

class  CarGallery {
private:
	size_t _carCount = 0;
	str name = nullptr;
	str address = nullptr;
	Car** _cars = nullptr;
public:
	CarGallery() = delete;
	CarGallery(stri name);
	CarGallery(stri name, stri addres);

	// Get Methods

	const char* getName();
	const char* getAddress();
	size_t getCount();
	Car** getCars();

	// Set Methods

	void setName(stri name);
	void setAddress(stri address);
	void setCount(size_t count);
	void setCars(Car** cars);

	// Print

	void print();

	// Destructor

	~CarGallery();

	// Functions

	void clear();
	void appendCar(Car* car);
	void removeCar(Car* car);
	void deleteCarId(size_t id);
};