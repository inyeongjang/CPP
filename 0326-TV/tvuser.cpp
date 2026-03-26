// 20230918 장인영

#include "tv.h"
#include <iostream>
using namespace std;

int main(void) {

	TV tv;

	tv.status = false;
	tv.channel = 1; 
	tv.volume = 5;

	tv.pushPower();

	cout << "\n[ Channel UP 테스트 (10회) ]\n" << endl; 
	for (int i = 0; i < 10; i++) {
		tv.channelUp();
	}

	cout << "\n[ Channel Down Test (10회) ]\n" << endl;
	for (int i = 0; i < 10; i++) {
		tv.channelDown();
	}

	cout << "\n[ Volume UP Test (10회) ]\n" << endl;
	for (int i = 0; i < 10; i++) {
		tv.volumeUp();
	}

	cout << "\n[ Volume Down Test (15회) ]\n" << endl;
	for (int i = 0; i < 15; i++) {
		tv.volumeDown();
	}

	cout << "\n[ 전원 Off Test ]\n" << endl;
	tv.pushPower();
	tv.channelUp();
	tv.channelDown();
	tv.volumeUp();
	tv.volumeDown();

	return 0;
}