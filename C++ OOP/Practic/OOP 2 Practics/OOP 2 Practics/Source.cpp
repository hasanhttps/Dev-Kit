#include <iostream>
#include <cassert>
using namespace std;
#include "DataTypes.h";
#include "OUF.h";
	
int main() {
	//
	//Car kia("Tesla", "X", "Black", 2022, 0);
	//kia.print();
	CarGallery rentCar("Rent a Car", "Koroglu");
	rentCar.print();
	Car** cars = new Car * [2] {
		new Car("Tesla", "X", "Black", 2022, 0),
		new Car("Mazda", "CX-5", "Black", 2019, 4.5)
	};
	Car* newCar = new Car("Mercedes", "AMG", "Grey", 2015, 4.5);
	rentCar.setCars(cars);
	rentCar.setCount(2);
	rentCar.print();
	rentCar.appendCar(newCar);
	rentCar.print();
	rentCar.removeCar(cars[1]);
	rentCar.print();
	rentCar.deleteCarId(1);
	rentCar.print();
	// initalize list => Constant field-lere object yaradilan zaman deyer gondermek ucundur. Delegate kimi yazilir.
	// Car():_count(count) kimi yazilir. Bu tool'un sebebi constant deyisenleri sonradan deyise bilmek ucun yeniden 
	// yarada bilmekdir.
}
	