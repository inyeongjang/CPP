#include "FruitBuyer.h"
#include "FruitSeller.h"

#include <iostream>
using namespace std;

int FruitBuyer::BuyApple(int n, FruitSeller& seller)
{
	const int APPLE_UNITCOST = 1000;

	int num = seller.SaleApple(n);

	numOfApple += num;
	money -= n;

	return num;
}

void FruitBuyer::showResult()
{
	cout << "보유 사과 : " << numOfApple << "개" << endl;
	cout << "보유 현금 : " << money << "원" << endl;
}