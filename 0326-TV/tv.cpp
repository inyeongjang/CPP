// 20230918 장인영

#include "tv.h"
#include <iostream>
using namespace std;

const int MAX_CHANNEL = 5;
const int MIN_CHANNEL = 1;

const int MAX_VOLUME = 10;
const int MIN_VOLUME = 0;

void TV::pushPower()
{
	if (status == false) {
		status = true;
		cout << "전원이 켜졌습니다." << endl;
	}
	else if (status == true) {
		status = false;
		cout << "전원이 꺼졌습니다." << endl;
	}
}

void TV::channelUp()
{
	if (status == false)
		return;
	if (channel >= MAX_CHANNEL)
		channel = MIN_CHANNEL;
	else
		channel++;
	cout << "현재 채널 : " << channel << endl;
	return;
}

void TV::channelDown()
{
	if (status == false)
		return; 
	if (channel <= MIN_CHANNEL)
		channel = MAX_CHANNEL;
	else
		channel--;
	cout << "현재 채널 : " << channel << endl;
	return;
}

void TV::volumeUp()
{
	if (status == false)
		return;
	if (volume >= MAX_VOLUME) {
		cout << "현재 볼륨 : " << volume << " 최대 볼륨입니다." << endl;
		return;
	}
	else
		volume++;
	cout << "현재 볼륨 : " << volume << endl;
	return;
}

void TV::volumeDown()
{
	if (status == false)
		return ;
	if (volume <= MIN_VOLUME) {
		cout << "현재 볼륨 : " << volume << " 최소 볼륨입니다." << endl;
		return;
	}
	else
		volume--;
	cout << "현재 볼륨 : " << volume << endl;
	return;
}
