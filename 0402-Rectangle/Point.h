// 20230918 장인영

#ifndef _Point_H
#define _Point_H

class Point
{
	int x, y;

public:
	Point(int a, int b);

	int GetX() { return x; }
	int GetY() { return y; }

	void Show(); 
};

inline Point::Point(int a, int b) 
{
	x = a;
	y = b;
}

#endif
