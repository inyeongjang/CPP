// 20230918 장인영

#ifndef _CHECKING_TRAFFIC_CARD_ACCOUNT_H
#define _CHECKING_TRAFFIC_CARD_ACCOUNT_H
#include "CheckingAccount.h"

class CheckingTrafficCardAccount : public CheckingAccount
{
	bool hasTrafficCard;

public:
	CheckingTrafficCardAccount(int accountNo, const char* name, int balance, const char* cardNo, bool hasTrafficCard);
	
	int payTrafficCard(const char* cardNo, int amount);
};

#endif