#include "Circle.h"

int main(void) {

	Circle c1;

	c1.setCenter(5, 10);
	c1.setRadius(1);
	c1.getArea();

	Circle c2;
	c2.setCenter(5, 10);
	c2.setRadius(10);
	c2.getArea();
}