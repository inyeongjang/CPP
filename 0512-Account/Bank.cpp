// 20230918 장인영

#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include "BonusPointAccount.h"

using namespace std;

int main()
{
	Account acc1(1, "A", 10000);
	CheckingAccount acc2(2, "B", 10000, "22");
	CheckingTrafficCardAccount acc3(3, "C", 10000, "33", true);
	CreditLineAccount acc4(4, "D", 10000, 5000);
	BonusPointAccount acc5(5, "E", 10000);

	cout << "[ 기본 계좌 테스트 ]" << endl;
	acc1.deposit(10000);
	acc1.withdraw(5000);
	acc1.check();

	cout << endl;

	cout << "[ 직불 계좌 테스트] " << endl;
	acc2.pay("22", 5000);
	acc2.pay("222", 5000);
	acc2.check();

	cout << endl;

	cout << "[ 교통카드 직불 계좌 테스트 ]" << endl;
	acc3.payTrafficCard("33", 1000);
	acc3.payTrafficCard("333", 1000);
	acc3.check();

	cout << endl;

	cout << "[ 마이너스 통장 테스트 ]" << endl;
	acc4.withdraw(12000);
	acc4.withdraw(5000);
	acc4.check();

	cout << endl;

	cout << "[ 포인트 적립 계좌 테스트 ]" << endl;
	acc5.deposit(10000);
	acc5.withdraw(5000);
	acc5.check();

	return 0;
}