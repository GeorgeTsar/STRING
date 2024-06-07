#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "String.h"
using namespace std;

String::String()
{
	S = nullptr;
	len = 0;
}

String::String(char* s)
{
	len = strlen(s);
	S = new char[len + 1];
	strcpy(S, s);
}

String::String(const String& s)
{
	len = s.len;
	S = new char[len + 1];
	strcpy(S, s.S);
}

String::~String()
{
	delete[] S;
}

void String::sort(String s[], int n)
{
	String temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(s[j].S, s[j - 1].S) < 0)
			{
				temp.set_str_param(s[j].S);
				s[j].set_str_param(s[j - 1].S);
				s[j - 1].set_str_param(temp.S);
			}
		}
	}
}

const char* String::get_str() const
{
	return S;
}

void String::set_str_user()
{
	if (S != nullptr)
	{
		delete[] S;
	}
	char a[256];
	cin >> a;
	len = strlen(a) + 1;
	S = new char[len];
	strcpy(S, a);
}

void String::set_str_param(char* str)
{
	if (S != nullptr)
	{
		delete[] S;
	}
	len = strlen(str) + 1;
	S = new char[len];
	strcpy(S, str);
}
