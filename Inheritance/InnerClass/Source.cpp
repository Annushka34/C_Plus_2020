#include<iostream>
#include<string>
using namespace std;


class User
{
public:
	class Date
	{
	public:
		int day;
		int month;
		int year;
	};
	Date date;
public:
	string name;
	void SetDate()
	{
		date.day = 13;
	}
	void ShowDate()
	{
		cout << date.day << endl;
	}	
};



void main()
{
	User u;
	u.SetDate();
	u.ShowDate();

	/*User::Date date;
	date.day = 22;*/
}