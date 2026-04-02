// 20230918 장인영

#include "Child.h"
#include <iostream>
using namespace std;


void Child::Gain(int n)
{
	num += n;
}

int Child::Lose(int n)
{
	if (num > n)
	{
		num -= n;
		return n;
	}
	else
	{
		int temp = num;
		num = 0;
		return temp;
	}
}

void Child::Show()
{
	if (num == 0) 
		cout << "구슬이 부족합니다." << endl;
	else
		cout << num << endl;
}