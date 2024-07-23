#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Rectangle.h"


Rectangle::Rectangle() {

	cout << "Rectangle object created" << endl;
}

Rectangle::~Rectangle() {

	cout << "Rectangle object is destroyed" << endl;
}

void Rectangle::setLength(double l) {

	if (l < 0)throw NegativeLength();
	length = l;
}

void Rectangle::setWidth(double w) {

	if (w < 0)throw NegativeWidth();
	width = w;
}

void Rectangle::calArea() {

	double area = width * length;
	this->area = area;
}

double Rectangle::getArea() {
	return area;
}



#endif // !RECTANGLE_H_INCLUDED
