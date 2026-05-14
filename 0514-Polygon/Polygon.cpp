// 20230918 장인영

#define _CRT_SECURE_NO_WARNINGS
#include "Polygon.h"
#include <cstring>
#include <iostream>
using namespace std;

Polygon::Polygon(double width, double height, const char* type)
{
	this->width = width;
	this->height = height; 
	this->type = new char[strlen(type) + 1];
	strcpy(this->type, type);
}

Polygon::~Polygon()
{
	delete[] type;
}

void Polygon::ShowInfo()
{
	cout << "Width: " << width << endl;
	cout << "Height:" << height << endl;
	cout << "Type: " << type << endl;
}