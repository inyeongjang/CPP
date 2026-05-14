// 20230918 장인영

#include "CreditLineAccount.h"
#include "Account.h"
#include <iostream>
using namespace std;

CreditLineAccount::CreditLineAccount(int accountNo, const char* name, int balance, int creditLine)
	: Account(accountNo, name, balance)
{
	this->creditLine = creditLine;
}

int CreditLineAccount::withdraw(int amount)
{
	if (balance + creditLine >= amount)
	{
		balance -= amount;
		return amount;
	}

	return 0;
}