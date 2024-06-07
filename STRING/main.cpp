#define _CRT_SECURE_NO_WARNINGS
#include "String.h"  
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Input the number of string s: ";
	cin >> n;

	String* s = new String[n];
	for (int i = 0; i < n; i++)
	{
		s[i].set_str_user();

	}

	s->sort(s, n);

	for (int i = 0; i < n; i++)
	{
		cout << s[i].get_str() << "\n";
	}

	delete[] s;

}