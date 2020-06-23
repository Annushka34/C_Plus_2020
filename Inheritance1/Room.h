#pragma once
#include"Header.h"
class Room
{
	int num;
public:
	Room()
	{
		//cout << "room "<<num<<endl;
	}
	Room(int num)
	{
		this->num = num;
	}
	void ShowRoom()
	{
		cout << "room " << num << endl;
	}
};
