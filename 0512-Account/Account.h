// 20230918 장인영

#ifndef _ACCOUNT_H
#define _ACCOUNT_H

class Account
{
protected:
	int accountNo;
	char* name;
	int balance;

public:
	Account(int accountNo, const char* name, int balance);
	~Account();

	void deposit(int amount);
	int withdraw(int amount);
	void check() const;
};

#endif