// 20230918 장인영

#include "Complex.h"
#include <iostream>
using namespace std;

void Complex::SetComplex(double a, double b)
{
	real = a;
	image = b;
}

void Complex::ShowComplex(void)
{
	cout << real << " + " << image << " i " << endl;
}