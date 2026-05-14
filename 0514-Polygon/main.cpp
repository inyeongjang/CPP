// 20230918 장인영

#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
	Polygon* p[3]; 
	p[0] = new Rectangle(10, 20);
	p[1] = new Triangle(10, 20);
	p[2] = new Square(10); 

	for (int i = 0; i < 3; i++)
	{
		p[i]->ShowInfo();
		cout << "Area: " << p[i]->GetArea() << endl;

		Rectangle* r;
		r = dynamic_cast<Rectangle*>(p[i]);

		if (r != NULL)
		{
			if (r->IsSquare())
				cout << "This is Square." << endl;
			else
				cout << "This is Rectangle." << endl;
		}

		delete p[i];
		cout << endl;
	}
}