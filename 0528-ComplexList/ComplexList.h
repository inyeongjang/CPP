// 20230918 장인영

#ifndef _ComplexList_H
#define _ComplexList_H

#include "Complex.h"
#include <vector>
using std::vector;

// 1단계 
/*
class ComplexList
{
	vector<Complex> list;

public:
	// vector는 가변 크기 컨테이너이므로
	// 생성 시 크기를 지정하지 않고 빈 상태로 생성
	ComplexList();

	void Add(double r, double i);

	// const 함수이므로 const Complex& 반환
	const Complex& Get(int n) const;

	// const 함수이므로 const Complex* 반환
	const Complex* pGet(int n) const;
	
	int Length() const;
};
*/

// 2단계 
class ComplexList
{
	vector<Complex*> list;

public:
	// vector는 가변 크기 컨테이너이므로
	// 생성 시 크기를 지정하지 않고 빈 상태로 생성
	ComplexList();

	// Add()에서 동적 생성한 객체 해제
	~ComplexList();

	void Add(double r, double i);
	Complex& Get(int n) const;
	Complex* pGet(int n) const;
	int Length() const;
};

#endif