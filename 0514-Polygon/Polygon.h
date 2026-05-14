// 20230918 장인영

#ifndef _POLYGON_H
#define _POLYGON_H

class Polygon
{
protected:
	double width;
	double height;
	char* type;

public:
	Polygon(double width, double height, const char* type);
	~Polygon();

	void ShowInfo();
	virtual double GetArea() = 0; 
};

#endif