// 20230918 장인영

#ifndef _Child_H
#define _Child_H

class Child
{
	int num;

public:
	Child(int n);

	void Gain(int n);
	int Lose(int n);

	void Show();
};

inline Child::Child(int n)
{
	num = n;
}

#endif
