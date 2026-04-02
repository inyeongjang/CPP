// 20230918 장인영

#include "Complex.h"
#include <iostream>
using namespace std;

void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);
Complex AddComplex(Complex&, Complex&);

int main(void)
{
	cout << "\n1. void InputComplex(Complex* c); 테스트" << endl;
	Complex c1(0, 0);
	InputComplex(&c1);
	c1.ShowComplex();

	cout << "\n2. void InputComplex(Complex&); 테스트" << endl;
	Complex c2(0, 0);
	InputComplex(c2);
	c2.ShowComplex();

	cout << "\n3. Complex& InpAndRetComplex(Complex&);테스트" << endl;
	Complex c3(0, 0);
	InpAndRetComplex(c3);
	c3.ShowComplex();

	cout << "\n4. Complex AddComplex(Complex&, Complex&);테스트" << endl;
	Complex c4(0, 0);
	c4 = AddComplex(c2, c3);
	c4.ShowComplex();

	return 0;
}

void InputComplex(Complex* c)
{
	double a;
	double b;

	cout << "real : ";
	cin >> a;

	cout << "image : ";
	cin >> b;

	c->SetComplex(a, b);
}

void InputComplex(Complex& c)
{
	double a;
	double b;

	cout << "real : ";
	cin >> a;
	
	cout << "image : ";
	cin >> b;

	c.SetComplex(a, b);
}

Complex& InpAndRetComplex(Complex& c)
{
	double a;
	double b;

	cout << "real : ";
	cin >> a;

	cout << "image : ";
	cin >> b;

	c.SetComplex(a, b);

	return c;
}

Complex AddComplex(Complex& a, Complex& b)
{
	return Complex(a.GetReal() + b.GetReal(), a.GetImage() + b.GetImage());
}