// 20230918 장인영

#define _CRT_SECURE_NO_WARNINGS
#include "Square.h"
#include "Rectangle.h"
#include <cstring>

Square::Square(double width)
	:Rectangle(width, width)
{
	delete[] type;
	this->type = new char[strlen("Square") + 1];
	strcpy(this->type, "Square");
}