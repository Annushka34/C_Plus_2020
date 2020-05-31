#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
#include<ctime>

void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

class Point
{
private:
	
public:
	int x;
	int y;
	int size = 10;
	int col;
	Point (){ col = rand() % 10 + 1; }
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
		col = rand() % 10+1;
	}

	int GetX () const//  в константному методі не можна робити ніяких змін
	{
		int a = 5;
		//x = 0;
		cout << x<<endl;
		return x;
	}

	void Show()
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
		
		for (size_t i = 0; i < size; i++)
		{
			SetPos(x, y+i);
			for (size_t j = 0; j < size; j++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << endl;
	}
};







//  <що повертає> operator + (<Type> &obj1, <Type> &obj2)
Point operator + (const Point & p1, const Point & p2)
{
	Point p3;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	return p3;
}

Point operator - (const Point & p1, const Point & p2)
{
	Point p3;
	p3.x = p1.x - p2.x;
	p3.y = p1.y - p2.y;
	return p3;
}
