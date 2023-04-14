#pragma once



Gallery* createGallery(char*, char*);
Car* createCar(char*, char*, char*, ushort, bool, float, FuelType);
Gallery* appendCar(Gallery*, Car*);
void showGallery(Gallery*);
void showCar(Car);
void SortFuelType(Gallery*, FuelType);
void showByColor(Gallery*, char*);
void showGreateThanPrice(Gallery*, float);
void showGreateThanYear(Gallery*, ushort);
void deleteCars(Car*);
void deleteGarage(Gallery*);