#pragma once
class String
{
private:
	char* S;
	int len;
public:
	String();
	String(char* s);
	String(const String& s);
	~String();
	void sort(String s[], int n);
	const char* get_str()const;
	void set_str_user();
	void set_str_param(char* str);

};

