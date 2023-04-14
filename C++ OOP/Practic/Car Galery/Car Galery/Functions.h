#pragma once



Gallery* createGallery(char* name, char* address) {
	Gallery* newGallery = new Gallery;
	newGallery->name = name;
	newGallery->address = address;
	newGallery->id = GalleryId++;
	newGallery->carCount = 0;

	return newGallery;
}

Car* createCar(char* company, char* model, char* color, ushort year, bool isNew, float price, FuelType fueltype) {
	Car* newCar = new Car;
	newCar->id = CarId++;
	newCar->maker = company;
	newCar->model = model;
	newCar->color = color;
	newCar->year = year;
	newCar->isNew = isNew;
	newCar->price = price;
	newCar->fuelType = fueltype;

	return newCar;
}

Gallery* appendCar(Gallery* galery, Car* car) {
	Gallery* donorGallery = new Gallery[galery->carCount + 1];
	donorGallery->name = galery->name;
	donorGallery->address = galery->address;
	donorGallery->id = galery->id;
	for (int i = 0; i < galery->carCount; i++){
		donorGallery->cars[i] = galery->cars[i];
	}
	donorGallery->carCount = galery->carCount + 1;
	donorGallery->cars[galery->carCount] = car;
	delete[] galery;
	galery = nullptr;
	
	return donorGallery;
}

void showCar(Car car) {
	if (&car == nullptr) return;
	cout << "\tCar Info\n";
	cout << "Id : " << car.id << endl;
	cout << "Company : " << car.maker << endl;
	cout << "Model : " << car.model << endl;
	cout << "Color : " << car.color << endl;
	cout << "Year : " << car.year << endl;
	cout << "IsNew : " << boolalpha << car.isNew << endl;
	cout << "Price : " << car.price << endl;
	cout << "Fuel Type : ";
	switch (car.fuelType) {
	case 0:
		cout << "Petrol";
		break;
	case 1:
		cout << "Diesel";
		break;
	case 2:
		cout << "Hybrid";
		break;
	case 3:
		cout << "Electric";
		break;
	default:
		break;
	}cout << "\n\n";
}

void showGallery(Gallery* galery) {
	if (galery == nullptr) return;
	cout << "\tGalery Info\n";
	cout << "Id : " << galery->id << endl;
	cout << "Name : " << galery->name << endl;
	cout << "Adress : " << galery->address << endl;
	cout << "Car Size : " << galery->carCount << "\n\n";

	if (galery->carCount != 0) {
		cout << "Cars of " << galery->name << " Gallery\n";
		for (int i = 0; i < galery->carCount; i++){
			cout << galery->cars[i] << endl;
			if (galery->cars[i] == nullptr) break;
			showCar(*(galery->cars[i]));
		}
	}
}

void SortFuelType(Gallery* galery, FuelType fueltype) {
	for (int i = 0; i < galery->carCount; i++){
		if (galery->cars[i]->fuelType == fueltype) showCar(*(galery->cars[i]));
	}
}

void showByColor(Gallery* galery, char* color) {
	bool isCheck;
	for (int i = 0; i < galery->carCount; i++){
		isCheck = false;
		for (int j = 0; j < strlen(color); j++){
			if (strlen(color) != strlen(galery->cars[i]->color)) break;
			if (galery->cars[i]->color[j] == color[j]) isCheck = true;
		}	
		if (isCheck) showCar(*(galery->cars[i]));
	}
}

void showGreateThanPrice(Gallery* galery, float price) {
	for (int i = 0; i < galery->carCount; i++){
		if (galery->cars[i]->price > price) showCar(*(galery->cars[i]));
	}
}

void showGreateThanYear(Gallery* galery, ushort year) {
	for (int i = 0; i < galery->carCount; i++){
		if (galery->cars[i]->year > year) showCar(*(galery->cars[i]));
	}
}

void deleteCars(Car* car) {
	delete[] car;
	car = nullptr;
}

void deleteGarage(Gallery* galery) {
	for (int i = 0; i < galery->carCount; i++){
		delete[] galery->cars[i];
		galery->cars[i] = nullptr;
	}
	delete[] galery->cars;
	galery->cars = nullptr;
	delete[] galery;
	galery = nullptr;
}