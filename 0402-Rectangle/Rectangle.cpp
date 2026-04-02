// 20230918 장인영

#include "Rectangle.h"
#include <iostream>
using namespace std;

int Rectangle::GetWidth() 
{
	return rb.GetX() - lt.GetX();
}

int Rectangle::GetHeight()
{
	return lt.GetY() - rb.GetY();
}

int Rectangle::GetPerimeter()
{
	return 2 * (GetWidth() + GetHeight());
}

int Rectangle::GetArea()
{
	return GetWidth() * GetHeight();
}

void Rectangle::Show() 
{
	rb.Show();
	cout << "와 ";
	lt.Show();
	cout << "을 꼭짓점으로 하는 직사각형의 넓이는 " << GetArea() << "이고 둘레는 " << GetPerimeter() << "이다." << endl;
}