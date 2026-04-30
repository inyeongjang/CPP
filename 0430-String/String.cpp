// 20230918 장인영

#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring> 

String::String()
{
	m_nLen = 0;
	m_pStr = new char[m_nLen + 1];
	strcpy(m_pStr, "");
}

String::String(const char* s)
{
	m_nLen = (int)strlen(s);
	m_pStr = new char[m_nLen + 1];
	strcpy(m_pStr, s);
}

String::~String()
{
	delete[] m_pStr;
}

ostream& operator<<(ostream& os, const String& s)
{
	os << s.m_pStr;
	return os;
}

int String::length() const
{
	return m_nLen;
}

String& String::operator=(const String& s)
{
	delete[] m_pStr;
	m_nLen = s.m_nLen;
	m_pStr = new char[m_nLen + 1];
	strcpy(m_pStr, s.m_pStr);
	return *this;
}

String::String(const String& s)
{
	m_nLen = s.m_nLen; 
	m_pStr = new char[m_nLen + 1]; 
	strcpy(m_pStr, s.m_pStr);
}

String String::operator+(const String& s) const
{
	String temp;
	temp.m_nLen = m_nLen + s.m_nLen;
	temp.m_pStr = new char[temp.m_nLen + 1];
	strcpy(temp.m_pStr, m_pStr);
	strcat(temp.m_pStr, s.m_pStr);
	return temp;
}

bool String::operator==(const String& s) const
{
	return strcmp(m_pStr, s.m_pStr) == 0;
}

char& String::operator[](int i)
{
	return m_pStr[i];
}