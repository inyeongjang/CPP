// 20230918 장인영 call by address 

#include <iostream>
using namespace std;

void swap(int* p1, int* p2);

int main(void) {
	int a = 11;
	int b = 22; 
	cout << "변경 전 : " << a << ' ' << b << endl;

	int* p1 = &a;
	int* p2 = &b;
	swap(p1, p2); 
	cout << "변경 후 : " << a << ' ' << b << endl;

	return 0;
}

void swap(int* p1, int* p2) {
	int tmp;
	tmp = *p1;
	*p1 = *p2; 
	*p2 = tmp;
}