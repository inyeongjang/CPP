// 20230918 장인영 call by reference

#include <iostream>
using namespace std;

void swap(int& r1, int& r2);

int main(void) {
	int a = 11;
	int b = 22; 
	cout << "변경 전 : " << a << ' ' << b << endl;

	int& r1 = a;
	int& r2 = b;
	swap(r1, r2);
	cout << "변경 후 : " << a << ' ' << b << endl;

	return 0;
}

void swap(int& r1, int& r2) {
	int tmp;
	tmp = r1; 
	r1 = r2;
	r2 = tmp;
}