#pragma once
#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
#include<ctime>

class Arr
{
private:
	int arr[255] = {};
	int size = 0;
	int MAX = 255;
	int curInd = -1;
public:
	Arr(int a)
	{
		size++;
		arr[size - 1] = a;
	}

	void operator()(int a)
	{
		size++;
		arr[size - 1] = a;
	}
	void operator()(int a[], int s)
	{
		if (MAX < (s + size))
		{
			cout << "Array is empty\n";
			return;
		}
		for (int i = size, j = 0; i < size + s; i++, j++)
		{
			arr[i] = a[j];
		}
		size += s;
	}

	int& operator[](int ind)
	{
		if (ind > 0 && ind < size)
			return arr[ind];
		if (ind >= size && ind < MAX)
		{
			size++;
			return arr[size - 1];
		}
	}
	int& operator[](const char* name)
	{
		if (strcmp(name, "ivanov"))
			return arr[1];
		if (strcmp(name, "petrov"))
			return arr[2];
	}


	void operator--(int a)
	{
		if (size > 0)
			size--;
	}
	friend ostream& operator<< (ostream& out, Arr& n);
};
ostream& operator<< (ostream& out, Arr& n)
{
	for (int i = 0; i < n.size; i++)
	{
		out << n.arr[i] << " ";
	}
	cout << endl;
	return out;
}