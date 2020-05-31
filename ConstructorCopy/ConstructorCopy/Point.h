#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	char * name;
public:
	static int counter;
	Point();
	Point(int x, int y, const char * name);
	Point(int x, int y);
	Point(const Point & p);//---конструктор копій

	void ChangeName(const char * n);
	void Show();
	~Point();
};
