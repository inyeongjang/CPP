// 20230918 장인영

#ifndef _TV_H
#define _TV_H

class TV
{
	public:
	bool status;
	int channel;
	int volume;

	void pushPower();

	void channelUp();
	void channelDown();

	void volumeUp();
	void volumeDown();
};

#endif
