// 20230918 장인영

#include "CheckingTrafficCardAccount.h"
#include <iostream>
using namespace std;

CheckingTrafficCardAccount::CheckingTrafficCardAccount(int accountNo, const char* name, int balance, const char* cardNo, bool hasTrafficCard)
	: CheckingAccount(accountNo, name, balance, cardNo)
{
	this->hasTrafficCard = hasTrafficCard;
}

int CheckingTrafficCardAccount::payTrafficCard(const char* cardNo, int amount)
{
	if (hasTrafficCard)
	{
		return pay(cardNo, amount);
	}

	return 0;
}
