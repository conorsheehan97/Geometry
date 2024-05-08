#include "Geometry.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	Point* pointPtr(), p(30,50);
	Circle* circlePtr, c(2.7,120,87);
	Cylinder* cylPtr, cyl(10.2, 3.4, 5, 9);
	double tmp;
	tmp = c.getArea();
	cout << c;
	cout << "Circle Area = " << tmp << endl;
	tmp = cyl.getArea();
	cout << cyl;
	cout << "Cylinder Area = " << tmp << endl;
	circlePtr = &cyl;
	tmp = circlePtr->getArea();
	cout << "ptr Circle Area = " << tmp << endl;
	cylPtr = (Cylinder*)&c;
	tmp = cylPtr->getArea();
	cout << "ptr Cylinder Area = " << tmp << endl;

	return 0;
}