#pragma once
#include <iostream>
using namespace std;

class Rectangle {

public:
	
	class NegativeLength {};
	class NegativeWidth {};
	Rectangle();
	~Rectangle();
	void setLength(double);
	void setWidth(double);
	void calArea();
	double getArea();

private:
	int length;
	int width;
	double area;

};