// 20230918 장인영

#ifndef _Rectangle_H
#define _Rectangle_H

#include "Point.h"

class Rectangle
{
	Point lt, rb;

public:
	Rectangle(Point& a, Point& b);
	Rectangle(int a, int b, int c, int d);

	int GetWidth();
	int GetHeight();
	
	int GetPerimeter();
	int GetArea();

	void Show();
};

// Point p(10, 20);

inline Rectangle::Rectangle(Point& a, Point& b) :lt(a), rb(b) {}

inline Rectangle::Rectangle(int a, int b, int c, int d) : lt(a, b), rb(c, d) {}

#endif
