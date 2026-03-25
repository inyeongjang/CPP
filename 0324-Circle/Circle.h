#ifndef _Circle_H
#define _Circle_H 

const double PI = 3.141592;

class Circle {
public:
	int x, y;
	double radius;

	void setCenter(int cx, int cy);
	void setRadius(double cradius);

	int getX();
	int getY();

	double getRadius();
	double getArea();
};

#endif