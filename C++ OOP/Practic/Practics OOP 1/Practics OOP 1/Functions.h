#pragma once


float Circle::calculateArea() {
	float area = radius * radius * 3.14;
	return area;
}

int Circle::calculateLen() {
	int len = 3 * 2 * radius;
	return len;
}

void Circle::print() {
	cout << "Radius : " << radius;
}