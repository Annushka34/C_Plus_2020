#pragma once
#include"Header.h"

template<typename T>
class MyStack
{
	int cur_size;
	enum { MAX_SIZE = 100 };
	T arr[MAX_SIZE];
public:
	MyStack()
	{
		cur_size = 0;
	}
	void push(T val)
	{
		if (cur_size == MAX_SIZE)
		{
			cout << "NO place\n";
		}
		else
		{
			arr[cur_size] = val;
			cur_size++;
		}
	}
	void pop()
	{
		if(!empty())
			cur_size--;
	}
	T top()
	{
		if(!empty())
			return arr[cur_size - 1];
		//else
		cout << "NO elements\n";
		return -1;
	}
	bool empty()
	{
		return cur_size == 0;
	}
	int size()
	{
		return cur_size;
	}
};
