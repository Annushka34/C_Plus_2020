#pragma once
#include"Header.h"

template<typename T>
class RingQueue
{
	int cur_size;
	int MAX_SIZE = 100;
	T* arr;
public:
	RingQueue()
	{
		cur_size = 0;
		arr = new T[MAX_SIZE];
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
		if (!empty())
		{
			T val = arr[0];
			for (int i = 1; i < cur_size; i++)
			{
				arr[i - 1] = arr[i];
			}			
			arr[cur_size-1] = val;
		}
	}
	T front()
	{
		if (!empty())
			return arr[0];
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

	~RingQueue()
	{
		if (arr != nullptr)
			delete[] arr;
	}
};
