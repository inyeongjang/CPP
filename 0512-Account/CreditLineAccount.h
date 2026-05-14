// 20230918 장인영

#ifndef _CREDIT_LINE_ACCOUNT_H
#define _CREDIT_LINE_ACCOUNT_H

#include "Account.h"

class CreditLineAccount : public Account
{
	int creditLine;

public:
	CreditLineAccount(int accountNo, const char* name, int balance, int creditLine);
	
	int withdraw(int amount);
};

#endif