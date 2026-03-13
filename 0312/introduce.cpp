// 20230918 장인영

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void introduce(const char* name, int age = 20, const char* country = "대한민국");

int main(void) {

	char name[10];
	char age_str[10];
	char country[30];

	cout << "이름 : ";
	cin.getline(name, 10);
	cout << "나이 : ";
	cin.getline(age_str, 10);
	cout << "국적 : ";
	cin.getline(country, 30);

	// strlen( ) : 문자열의 길이를 반환하며, 여기서는 입력값이 비어있는지 확인합니다.
	if (strlen(age_str) == 0 && strlen(country) == 0)
		introduce(name);
	// atoi( ) : 문자열을 정수로 변환합니다.
	else if (strlen(country) == 0)
		introduce(name, atoi(age_str));	
	else
		introduce(name, atoi(age_str), country);

	return 0;
}

void introduce(const char* name, int age, const char* country)
{
	cout << "안녕하세요, 제 이름은 " << name << "입니다.\n";
	cout << "저는 " << age << "살이고, ";
	cout << country << "에서 왔습니다.\n";
}
