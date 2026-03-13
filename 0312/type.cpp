// 20230918 장인영

#include <iostream>
using namespace std;

void type(int n);
void type(double d);
void type(bool b);
void type(const char* str);

int main(void)
{
	cout << boolalpha;
	type(1004);
	type(3.14);
	type(true);
	type("hello");
}

void type(int n)
{
	cout << n << "는 정수형입니다." << endl;
}

void type(double d)
{
	cout << d << "는 실수형입니다." << endl;
}

void type(bool b)
{
	cout << b << "는 논리형입니다." << endl;
}

void type(const char* str)
{
	cout << str << "는 문자열입니다." << endl;
}