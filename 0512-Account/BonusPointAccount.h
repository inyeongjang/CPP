// 20230918 장인영

#ifndef _BONUS_POINT_ACCOUNT_H
#define _BONUS_POINT_ACCOUNT_H

#include "Account.h"

class BonusPointAccount : public Account
{
	int bonusPoint;

public:
	BonusPointAccount(int accountNo, const char* name, int balance, int bonusPoint = 0);

	void deposit(int amount);
	void check() const;
};

#endif