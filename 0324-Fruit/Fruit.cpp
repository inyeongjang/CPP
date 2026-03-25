#include "FruitBuyer.h"
#include "FruitSeller.h"

int main(void) {

	FruitBuyer me;
	FruitSeller seller;

	me.numOfApple = 0;
	me.money = 5000;

	seller.numOfApple = 20;
	seller.money = 0;

	me.BuyApple(2000, seller);

	me.showResult();
	seller.showResult();
}