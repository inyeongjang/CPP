// 20230918 장인영

#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account
{
protected:
	char* cardNo;

public:
	CheckingAccount(int accountNo, const char* name, int balance, const char* cardNo);
	~CheckingAccount();

	int pay(const char* cardNo, int amount);
};

#endif