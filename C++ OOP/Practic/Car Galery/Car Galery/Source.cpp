#include "Libraries.h";// We can do our code more compact with Library Header File


int main() {
	bool whileStatus = true;
	char* name = new char[] {}, * address = new char[] {};

	cout << "Please enter the name of new Galery : ";
	cin >> name;
	cout << "Please enter the adress of new Galery : ";
	cin >> address;

	Gallery* newGallery = createGallery(name, address);
	newGallery->cars = createFakeData();
	newGallery->carCount = 3;


	char* company = new char[] {}, * model = new char[] {}, * color = new char[] {};
	ushort year;
	bool newCheck;
	float price;
	int fuel;
	FuelType fueltype;

	cout << "Please enter the company name : ";
	cin >> company;
	cout << "Please enter the model name : ";
	cin >> model;
	cout << "Please enter the color of car : ";
	cin >> color;
	cout << "Please enter the year of car : ";
	cin >> year;
	cout << "Please enter (0 - Car is old or 1 - Car is new) : ";
	cin >> newCheck;
	cout << "Please enter the price of car : ";
	cin >> price;
	cout << "Please enter the fuel type of car (0 - Petrol, 1 - Diesel, 2 - Hybrid, 3 - Electric) : ";
	cin >> fuel;
	switch (fuel) {
	case 0:
		fueltype = FuelType::Petrol;
		break;
	case 1:
		fueltype = FuelType::Diesel;
		break;
	case 2:
		fueltype = FuelType::Hybrid;
		break;
	case 3:
		fueltype = FuelType::Electric;
		break;
	default:
		break;
	}
	Car* newCar = createCar(company, model, color, year, newCheck, price, fueltype);
	
	while (whileStatus) {
		int opt;
		cout << "1) Delete Galery\n2) Remove by Id\n3) Show Car\n4) Show Gallery\n5) Append Car to Gallery\n6) Show by fuel type\n";
		cout << "7) Show by color\n8) Show greater than price\n9) Show greater than year\n";
		cout << "0) Exit\n";
		cout << "Please choose parametr in above with integer numbers : ";
		cin >> opt;

		if (opt == 0) whileStatus = false;
		else if (opt == 1) deleteGarage(newGallery);
		else if (opt == 2) {
			int id;
			cout << "Please enter the id : ";
			cin >> id;
			deleteCars(newGallery->cars[id]);
		}
		else if (opt == 3) showCar(*newCar);
		else if (opt == 4) showGallery(newGallery);
		else if (opt == 5) newGallery = appendCar(newGallery, newCar);
		else if (opt == 6) {
			int Fuel;
			FuelType Fueltype;

			cout << "Please enter the fuel type of car (0 - Petrol, 1 - Diesel, 2 - Hybrid, 3 - Electric) : ";
			cin >> Fuel;
			switch (Fuel) {
			case 0:
				Fueltype = FuelType::Petrol;
				break;
			case 1:
				Fueltype = FuelType::Diesel;
				break;
			case 2:
				Fueltype = FuelType::Hybrid;
				break;
			case 3:
				Fueltype = FuelType::Electric;
				break;
			default:
				break;
			}
			SortFuelType(newGallery, Fueltype);
		}
		else if (opt == 7) {
			char* colorSort = new char[] {};
			cout << "Please enter the color : ";
			cin >> colorSort;
			showByColor(newGallery, colorSort);
		}
		else if (opt == 8) {
			float price;
			cout << "Please enter the price : ";
			cin >> price;
			showGreateThanPrice(newGallery, price);
		}
		else if (opt == 9) {
			ushort year;
			cout << "Please enter the year : ";
			cin >> year;
			showGreateThanYear(newGallery, year);
		}
	}
}