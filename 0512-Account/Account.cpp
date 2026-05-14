// 20230918 장인영

#define _CRT_SECURE_NO_WARNINGS
#include "Account.h"
#include <cstring>
#include <iostream>
using namespace std;

Account::Account(int accountNo, const char* name, int balance)
{
	this->accountNo = accountNo;
	this->balance = balance;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

Account::~Account()
{
	delete[] name;
}

void Account::deposit(int amount)
{
	balance += amount;
}

int Account::withdraw(int amount)
{
	if (balance >= amount)
	{ 
		balance -= amount;
		return amount;
	}

	return 0; 
}

void Account::check() const
{
	cout << "Account No: " << accountNo << endl;
	cout << "Name: " << name << endl;
	cout << "Balance: " << balance << endl;
}