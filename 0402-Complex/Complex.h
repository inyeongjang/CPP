// 20230918 장인영

#ifndef _Complex_H
#define _Complex_H

class Complex
{
	double real;
	double image;

public:
	Complex(double a, double b);

	void SetComplex(double a, double b);

	double GetReal(void) { return real; }
	double GetImage(void) { return image; }

	void ShowComplex(void);
};

inline Complex::Complex(double a, double b)
{
	SetComplex(a, b);
}

#endif