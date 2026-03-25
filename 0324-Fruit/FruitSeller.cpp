#include "FruitBuyer.h"
#include "FruitSeller.h"

#include <iostream>
using namespace std;

int FruitSeller::SaleApple(int n)
{
	const int APPLE_UNITCOST = 1000;

	int num = n / APPLE_UNITCOST;

	numOfApple -= num;
	money += n;

	return num;
}

void FruitSeller::showResult()
{
	cout << "남은 사과 : " << numOfApple << "개" << endl;
	cout << "판매 수익 : " << money << "원" << endl;
}