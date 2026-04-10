// 20230918 장인영

#include "ComplexList.h"
#include <iostream>
using namespace std;

void ComplexList::Set(int n, double r, double i)
{
	// 메모리 할당 범위에 따른 첨자값 검사 
	if (n >= size || n < 0) {
		cout << "\nSet 범위 초과\n";
		return;
	}
	plist[n].SetComplex(r, i);
}

Complex& ComplexList::Get(int n)
{
	// 메모리 할당 범위에 따른 첨자값 검사 
	if (n >= size || n < 0) {
		cout << "\nGet 범위 초과\n";
		exit(1);
	}
	return plist[n];
}

Complex* ComplexList::pGet(int n)
{
	// 메모리 할당 범위에 따른 첨자값 검사 
	if (n >= size || n < 0) {
		cout << "\nGet 범위 초과\n";
		exit(1);
	}
	return &plist[n];

}

int ComplexList::Length()
{
	return size;
}

