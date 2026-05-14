// 20230918 장인영

#define _CRT_SECURE_NO_WARNINGS
#include "CheckingAccount.h"
#include "Account.h"
#include <cstring>
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(int accountNo, const char* name, int balance, const char* cardNo)
	: Account(accountNo, name, balance)
{
	this->cardNo = new char[strlen(cardNo) + 1];
	strcpy(this->cardNo, cardNo);
}

CheckingAccount::~CheckingAccount()
{
	delete[] cardNo;
}

int CheckingAccount::pay(const char* cardNo, int amount)
{
	if (strcmp(this->cardNo, cardNo) == 0)
	{
		return withdraw(amount);
	}

	return 0;
}