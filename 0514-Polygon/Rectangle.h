// 20230918 장인영

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Polygon.h"

class Rectangle : public Polygon
{
public:
	Rectangle(double width, double height);

	double GetArea();
	bool IsSquare();
};

#endif

