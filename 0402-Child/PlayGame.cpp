// 20230918 장인영

#include "Child.h"
#include <iostream>
using namespace std;

int main(void)
{
	Child c1(4);
	Child c2(9);

	cout << "\n1차 게임" << endl;
	c1.Gain(c2.Lose(2));
	c1.Show();
	c2.Show();

	cout << "\n2차 게임" << endl; 
	c2.Gain(c1.Lose(7));
	c1.Show();
	c2.Show();

	return 0;
}