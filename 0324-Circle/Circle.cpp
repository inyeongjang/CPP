#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::setCenter(int cx, int cy)
{
	x = cx;
	y = cy;
}

void Circle::setRadius(double cradius)
{
	radius = cradius;
}


int Circle::getX()
{
	return x;
}

int Circle::getY()
{
	return y;
}


double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	double area = PI * radius * radius;
	cout << "넓이 : " << area << endl;
	return area;
}