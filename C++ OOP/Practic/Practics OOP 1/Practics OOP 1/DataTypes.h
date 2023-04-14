#pragma once


class Circle {
public:
	int radius = 0;

	Circle(int radius) {

	}
	Circle() {
		radius = 0;
	}
	float calculateArea();
	int calculateLen();
	void print();
};