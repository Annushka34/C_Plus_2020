#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
#include<ctime>

class Digit
{
public:
	int dig;
};

class Number
{
private:
	int x;
public:
	Number(int a)
	{
		x = a;
	}

	operator int()//  Приведення від абстрактного до конкретного
	{
		return x;
	}

	operator Digit()
	{
		Digit d;
		d.dig = x;
		return d;
	}

	void Show()
	{

	}
};



