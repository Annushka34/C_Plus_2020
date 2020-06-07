#pragma once
#include"Header.h"

template<typename T>
class PriorityQueue
{
	int cur_size;
	int MAX_SIZE = 100;
	T* arr;
	int * prioritets;//  can be any type (User, T, A)
public:
	PriorityQueue()
	{
		cur_size = 0;
		arr = new T[MAX_SIZE];
		prioritets = new int[MAX_SIZE];
	}
	void push(T val, int p)
	{
		if (cur_size == MAX_SIZE)
		{
			cout << "NO place\n";
		}
		else
		{
			arr[cur_size] = val;
			prioritets[cur_size] = p;
			cur_size++;
		}
	}
	T pop()
	{
		if (!empty())
		{
			int ind = 0;
			int maxPrior = prioritets[0];
			// serach max prioritet index
			for (int i = 0; i < cur_size; i++)
			{
				if (prioritets[i] > maxPrior)
				{
					maxPrior = prioritets[i];
					ind = i;
				}
			}
			//ind - index where max priority element exist
			T elementForReturn = arr[ind];
			//----delete with element--
			for (int i = ind; i < cur_size-1; i++)
			{
				arr[i] = arr[i+1];
				prioritets[i] = prioritets[i + 1];
			}
			cur_size--;
			//---arr[ind] - element with max priority
			return elementForReturn;
		}
		cout << "empty\n";
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

	~PriorityQueue()
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
		if(prioritets != nullptr)
		{
			delete[] prioritets;
		}
	}
};
