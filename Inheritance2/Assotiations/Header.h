#pragma once
#include<iostream>
#include<string>
using namespace std;

class Room
{
public:
	int height;
	int square;
	string name;
};

class Furniture
{
public:
	string name;
	int color;
	int price = 5000;
};

class Owner
{
public:
	string surname;
	string likes;
	int money;
	Owner(string s, string l, int money)
	{
		surname = s;
		likes = l;
		this->money = money;
	}
};
