#pragma once
#include <iostream>

using namespace std;

class Point
{
	friend ostream& operator << (ostream& left, const Point& right);
private:
	int x, y;
public: 
	Point(int p_x = 0, int p_y = 0);
	void set_point(int p_x = 0, int p_y = 0);
	int getX() const { return x; };
	int getY() const { return y; };
};

class Circle:public Point
{
	friend ostream& operator << (ostream& left, const Circle& right);
private:
	double radius;
public:
	Circle(double p_radius, int p_x, int p_y);
	void setRadius(double p_radius = 0.0);
	double getRadius() const { return radius; }
	double getArea() const;
};

class Cylinder :public Circle
{
private:
	double height;
public:
	Cylinder(double p_height = 0.0, double p_radius = 0.0, int p_x = 0, int p_y = 0) :Circle(p_radius, p_x, p_y)
	{
		setHeight(p_height);
	}
	void setHeight(double p_height)
	{
		height = p_height;
	}
	double getHeight() const
	{
		return height;
	}
	double getArea() const;
};
