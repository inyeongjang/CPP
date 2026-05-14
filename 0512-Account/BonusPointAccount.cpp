// 20230918 장인영

#include "BonusPointAccount.h"
#include <iostream>
using namespace std;

BonusPointAccount::BonusPointAccount(int accountNo, const char* name, int balance, int bonusPoint)
	: Account(accountNo, name, balance)
{
	this->bonusPoint = bonusPoint;
}

void BonusPointAccount::deposit(int amount)
{
	Account::deposit(amount);
	bonusPoint += amount / 1000;
}

void BonusPointAccount::check() const
{
	Account::check();
	cout << "Point: " << bonusPoint << endl;
}