// 20230918 장인영

#include "Rectangle.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main(void) 
{
	Point x(0, 0);
	Point y(10, -10);

	cout << "\nRectangle(lt, rb) 테스트" << endl;
	Rectangle r1 = Rectangle(x, y);
	r1.Show();

	cout << "\nRectangle(x1, y1, x2, y2) 테스트" << endl;
	Rectangle r2 = Rectangle(0, 0, 10, -10);
	r2.Show();

	return 0;
}
