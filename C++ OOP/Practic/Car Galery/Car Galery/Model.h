#pragma once

ushort CarId = 0;
ushort GalleryId = 0;

enum FuelType {
	Petrol,
	Diesel,
	Hybrid,
	Electric
};

struct Car {
	ushort id;
	char* maker;
	char* model;
	char* color;
	ushort year;
	bool isNew;
	double price;
	FuelType fuelType;
};

struct Gallery {
	ushort id;
	char* name;
	char* address;
	ushort carCount;
	Car** cars = new Car * [] {};
};