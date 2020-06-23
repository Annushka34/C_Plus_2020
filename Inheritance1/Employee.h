#pragma once
#include"Header.h"
#include"Room.h"
#include"IdCard.h"
#include"Person.h"
#include"Position.h"

class Employee: public Person
{
	IdCard * card;
	vector<Room> rooms;
	vector<Position> positions;
public:
	static int counter;
	Employee()
	{
		counter++;
	}
	void SetCard(IdCard* card)
	{
		this->card = card;
	}
	void AddRoom(Room r)
	{
		rooms.push_back(r);
	}
	void AddPosition(string name)
	{
		Position pos;
		pos.posName = name;
		positions.push_back(pos);
	}
	void ShowRooms()
	{
		for (auto r: rooms)
		{
			r.ShowRoom();
		}
	}
	void ShowPositions()
	{
		for (auto p : positions)
		{
			cout << p.posName <<endl;
		}
	}

	void ShowData()
	{
		cout << name << endl;
		cout << card->number << endl;
		ShowRooms();
		ShowPositions();
	}
};

int Employee::counter = 0;