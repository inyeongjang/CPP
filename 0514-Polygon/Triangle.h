// 20230918 장인영

#ifndef _TRIANGLE_H
#define _TRIANGLE_H
#include "Polygon.h"

class Triangle : public Polygon
{
public:
	Triangle(double width, double height);

	double GetArea();
};

#endif