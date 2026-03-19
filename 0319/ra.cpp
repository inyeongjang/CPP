// 20230918 장인영 return by address 

#include <iostream>
using namespace std;

int* increment(int& r);

int main(void) {
	int n = 1;
	cout << "변경 전 : " << n << endl;

	int& r = n;
	increment(r);
	cout << "변경 후 : " << n << endl;

	return 0;
}

int* increment(int& r) {
	r++;
	return &r;
}