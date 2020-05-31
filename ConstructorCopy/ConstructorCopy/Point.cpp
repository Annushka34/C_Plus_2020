#pragma once
#include"Point.h"
Point::Point()//---дефолтний конструктор або по замовчанню
	{
		x = 0;
		y = 0;
		name = new char[255]{ "point" };
		cout << "CONSTRUCTOR\n";		

		counter++;
	}
Point::Point(int x, int y, const char * name)//---перевантажений конструктор
	{
		this->x = x;
		this->y = y;
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		cout << "CONSTRUCTOR PEREV 1 \n";

		counter++;
	}
Point::Point(int x, int y)//---перевантажений конструктор
	{
		this->x = x;
		this->y = y;
		this->name = new char[255];
		strcpy_s(this->name, strlen("p test") + 1, "p test");
		cout << "CONSTRUCTOR PEREV 2 \n";

		counter++;
	}
Point::Point(const Point & p)//--- конструктор копій
{
	int size = strlen(p.name) + 1;
	name = new char[size];
	strcpy_s(name, size, p.name);
	x = p.x;
	y = p.y;
	cout << "CONSTRUCTOR COPY\n";

	counter++;
}
void Point::Show()
	{
		cout << name << " " << x << " " << y << endl;
	}

void Point::ChangeName(const char * n)
{
	if (strlen(name) > strlen(n))
	{
		strcpy_s(name, strlen(n) + 1, n);
	}
	else
	{
		delete[] name;
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy_s(name, size, n);
	}
}
Point::~Point()//---деструктор (видаляє name)
	{
		cout << "~DESTRUCTOR\n";
		delete[] name;

		counter--;
	}


//----ІТІЦІАЛІЗАЦІЯ СТАТИЧНОЇ ЗМІННОЇ
int Point::counter = 0;