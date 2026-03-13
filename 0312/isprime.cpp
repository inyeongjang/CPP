// 20230918 장인영

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num);

int main(void)
{
	int num;
	cout << "숫자를 입력하세요 : ";
	cin >> num;

	if (isPrime(num) == true)
		cout << "입력한 숫자 " << num << "은(는) 소수입니다.\n";
	else
		cout << "입력한 숫자 " << num << "은(는) 소수가 아닙니다.\n";

	return 0;
}

bool isPrime(int num)
{
	if (num <= 1)
		return false;

	if (num == 2)
		return true;

	if (num % 2 == 0)
		return false;

	for (int i = 3; i <= (int)sqrt(num); i += 2)
	{
		if (num % i == 0)
			return false;
	}
	
	return true;
}
