// 20230918 장인영

#include "ComplexList.h"
#include <iostream>
using std::cout;

// 1단계
/*
ComplexList::ComplexList() {}
 
void ComplexList::Add(double r, double i)
{
	list.push_back(Complex(r, i));
}
 
const Complex& ComplexList::Get(int n) const
{
	// 예외처리
	if (n < 0 || n >= list.size()) {
		throw "Get 범위 초과";
	}
	return list[n];
}
 
const Complex* ComplexList::pGet(int n) const
{
	// 예외처리
	if (n < 0 || n >= list.size()) {
		throw "pGet 범위 초과";
	}
	return &list[n];
}

int ComplexList::Length() const
{
	return list.size();
}
*/

// 2단계
ComplexList::ComplexList() {}

ComplexList::~ComplexList()
{
	for (int i = 0; i < list.size(); i++)
		delete list[i];
}

void ComplexList::Add(double r, double i)
{
	// 새로운 Complex 객체를 동적으로 생성하여 vector의 맨 뒤에 추가 
	list.push_back(new Complex(r, i));
}

Complex& ComplexList::Get(int n) const
{
	// 예외처리  
	if (n < 0 || n >= list.size()) {
		throw "Get 범위 초과";
	}

	// list[n]은 Complex* 이므로 *list[n] 반환 
	return *list[n];
}

Complex* ComplexList::pGet(int n) const
{
	// 예외처리  
	if (n < 0 || n >= list.size()) {
		throw "pGet 범위 초과";
	}
	return list[n];
}

int ComplexList::Length() const
{
	return list.size();
}