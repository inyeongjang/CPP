// 20230918 장인영

#define _CRT_SECURE_NO_WARNINGS
#include "Rectangle.h"
#include "Polygon.h"
#include <cstring>

Rectangle::Rectangle(double width, double height)
	:Polygon(width, height, "Rectangle")
{
}

double Rectangle::GetArea()
{
	return width * height;
}

bool Rectangle::IsSquare()
{
	return width == height;
}