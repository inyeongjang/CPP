// 20230918 장인영

#ifndef _ComplexList_H
#define _ComplexList_H

#include "Complex.h"

class ComplexList
{
	Complex* plist;
	int size;

public:
	ComplexList(int size = 10);
	~ComplexList();

	void Set(int n, double r, double i);
	Complex& Get(int n);
	Complex* pGet(int n);
	int Length();
};

// 생성자 (기본값 10) 
inline ComplexList::ComplexList(int size)
{
	this->size = size;
	plist = new Complex[size];
}

// 소멸자 
inline ComplexList::~ComplexList()
{
	delete[] plist;
}

#endif

