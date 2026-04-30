// 20230918 장인영

#ifndef _STRING_H
#define _STRING_H

#include <iostream>
using namespace std;

class String
{
	int m_nLen;
	char* m_pStr;

public:
	String();
	String(const char*);
	~String();

	friend ostream& operator<<(ostream&, const String&);
	int length() const;

	String& operator=(const String&);

	String(const String&);

	String operator+(const String&) const;

	bool operator==(const String&) const;

	char& operator[](int i);
};

#endif 