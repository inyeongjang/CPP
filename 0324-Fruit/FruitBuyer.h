#ifndef _FruitBuyer_H
#define _FruitBuyer_H

#include "FruitSeller.h"

class FruitBuyer {
public:
	int money;
	int numOfApple;

	int BuyApple(int, FruitSeller&);
	void showResult();
};

#endif
