#pragma once
#include"Header.h"
class Building
{
public:
	string name;
	Room* rooms;
	Furniture** furniture = nullptr;
	Owner* owner = nullptr;
	int amountFurniture = 0;

	Building(int roomsAmount)
	{
		//----composition - objects create in Building and cant be separate from Building
		rooms = new Room[roomsAmount];
	}

	void BuyFurniture(Furniture* fNew)
	{
		if (fNew->price > owner->money)
		{
			cout << "No money\n";
		}
		else
		{
			cout << "I bought " << fNew->name << fNew->price << endl;
			owner->money -= fNew->price;
			if (amountFurniture != 0)
			{
				Furniture** temp = new Furniture * [amountFurniture + 1];
				for (size_t i = 0; i < amountFurniture; i++)
				{
					temp[i] = furniture[i];
				}
				temp[amountFurniture] = fNew;
				delete[] furniture;
				furniture = temp;
			}
			else
			{
				furniture = new Furniture * [amountFurniture + 1];
				furniture[0] = fNew;
			}
			amountFurniture++;
		}
	}

	void SetOwner(Owner* o)
	{
		owner = o;
	}

	void ShowOwner()
	{
		cout << owner->surname << endl;
		cout << owner->likes << endl;
		cout << owner->money << endl;
	}

	~Building()
	{
		if (rooms != nullptr)
			delete[] rooms;
	}
};

