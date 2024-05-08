#include "Geometry.h"
#include <cmath>

ostream& operator <<(ostream &left, const Point &right)
{
	left << "[" << right.x << "," << right.y << "]" << endl;
	return left;
}

Point::Point(int p_x, int p_y)
{
	x = p_x;
	y = p_y;
}

void Point::set_point(int p_x, int p_y)
{
	x = p_x;
	y = p_y;
}

ostream& operator << (ostream & left, const Circle &right)
{
	left << "Centre = " << Point(right);
	left << "Radius = " << right.radius << endl;
	return left;
}

Circle::Circle(double p_radius, int p_x, int p_y)
{
	radius = p_radius;
}

double Circle::getArea() const
{
	return  pow(radius,2) * 3.14159;
}

void Circle::setRadius(double p_radius)
{
	radius = p_radius;
}

double Cylinder::getArea() const
{
	double temp{ 0 };
	temp += Circle::getArea();
	temp += 2 * 3.14159 * getRadius() * height;
	return temp;
}