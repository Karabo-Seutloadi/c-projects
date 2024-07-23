#include <iostream>
#include "Rectangle.h"
using namespace std;


int main()
{
	Rectangle r;
	double l;
	double w;

	cin >> l>> w;

	try {
		r.setLength(l);
		r.setWidth(w);
}
	catch (Rectangle::NegativeLength) {
		cout << "length less than 0, retry" << endl;
		cin >> l;
	}
	catch (Rectangle::NegativeWidth) {
		cout << "width less than 0, retry" << endl;
		cin >> w;


	}
	r.calArea();
	cout << r.getArea() << endl;


}

