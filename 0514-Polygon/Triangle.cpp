// 20230918 장인영

#define _CRT_SECURE_NO_WARNINGS
#include "Triangle.h"
#include <cstring>

Triangle::Triangle(double width, double height)
	:Polygon(width, height, "Triangle")
{
}

double Triangle::GetArea()
{
	return width * height * 0.5;
}