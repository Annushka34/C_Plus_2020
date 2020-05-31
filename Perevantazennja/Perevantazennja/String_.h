#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;

class _String
{
private:
	char * str;
	int size;
public:
	_String()
	{
		size = 255;
		str = new char[255];
	}
	_String(int s)
	{
		size = s;
		str = new char[s];
	}
	_String(const char * s)
	{
		size = strlen(s)+1;
		str = new char[size];
		strcpy_s(this->str, size, s);
	}
	_String(const _String & obj)
	{
		size = obj.size;
		this->str = new char[size];
		strcpy_s(this->str, strlen(obj.str) + 1, obj.str);
	}
	void Show()
	{
		cout << str << endl;
	}

	_String operator+(const _String & right)
	{
		int size = strlen(this->str) + strlen(right.str) + 1;
		_String str3(size);
		//   destination, size, source
		//   куди   скыльки символыв звідки
		strcpy_s(str3.str, strlen(this->str) + 1, this->str);
		strcat_s(str3.str, size, right.str);
		return str3;
	}

	bool operator> (const _String & right)
	{
		///this   ->   ліва частина
		///right  ->   права частина
		/// if(str1 > str3)
		//strncmp  - скільки символів порівнювати
		if (_strcmpi(this->str, right.str) > 0)
			return true;
		else return false;
	}
	bool operator< (const _String & right)
	{
		if (_strcmpi(this->str, right.str) < 0)
			return true;
		else return false;
	}
	bool operator== (const _String & right)
	{
		if (_strcmpi(this->str, right.str) == 0)
			return true;
		else return false;
	}

	_String & operator= (const _String & obj)
	{
		if (this == &obj)
			return *this;
		if (this->str != nullptr)
			delete[] this->str;

		size = obj.size;
		this->str = new char[size];
		strcpy_s(this->str, strlen(obj.str) + 1, obj.str);
		return *this;
	}

	_String& operator+=(const _String & right)
	{
		///this це ліва частина <left+=right>
		int size = strlen(this->str) + strlen(right.str) + 1;
		if (this->size < size)
		{
			char *temp = new char[size];
			strcpy_s(temp, size, this->str);
			strcat_s(temp, size, right.str);
			delete[] this->str;
			this->str = temp;
			this->size = size;
		}
		else
		{
			strcat_s(this->str, size, right.str);
		}
		return *this;
	}

	_String& operator+=(const char * arr)
	{
		///this це ліва частина <left+=right>
		int size = strlen(this->str) + strlen(arr) + 1;
		if (this->size < size)
		{
			char *temp = new char[size];
			strcpy_s(temp, size, this->str);
			strcat_s(temp, size, arr);
			delete[] this->str;
			this->str = temp;
		}
		else
		{
			strcat_s(this->str, size, arr);
		}
		this->size = size;
		return *this;
	}

	_String& operator ! ()
	{
		for (int i = 0; i < strlen(str); i++)
		{
			str[i] = toupper(str[i]);//tolower(char ch)   toupper('a')
		}
		return *this;
	}

	~_String()
	{
		if (str != nullptr)
			delete[] str;
	}
};

