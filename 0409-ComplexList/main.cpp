// 20230918 장인영

#include "ComplexList.h"
#include "Complex.h"
#include <iostream>
using namespace std;

int main(void)
{
	// 복소수 배열 생성 
	ComplexList cl1;
	ComplexList cl2(5);
	
	cout << "cl1 Test\n\n";
	for (int i = 0; i < cl1.Length(); i++)
	{
		// cl1 요소 값 설정
		cl1.Set(i, i + 1, i + 2);

		// cl1 요소 값 출력 (Get)
		cl1.Get(i).ShowComplex();
	}


	cout << "\ncl2 Test\n\n";
	for (int i = 0; i < cl2.Length(); i++)
	{
		// cl1 요소 값 설정 
		cl2.Set(i, i + 1, i + 2);

		// cl1 요소 값 출력 (PGet)
		cl2.pGet(i)->ShowComplex();
	}

	// 범위 설정 오류 테스트 
	cl1.Set(-1, 1, 1);
	cl1.Get(10);

	return 0;
}