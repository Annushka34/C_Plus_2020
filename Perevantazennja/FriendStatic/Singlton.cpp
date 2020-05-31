#include<iostream>
#include<Windows.h>
using namespace std;

class Settings
{
private:
	Settings()	{}
	static Settings * _s;

public:
	static Settings* GetInstance()
	{
		return _s;
	}
	int level;
	int advertisemantVies;
	int liveAmount;
	int personaz;
};

Settings* Settings::_s = new Settings();

class Princess
{
	Settings * _s;
public:
	Princess(Settings * s)
	{
		_s = s;
	}
	void JumpInFlowers()
	{
		_s->liveAmount--;
		_s->advertisemantVies++;
	}
};

class ZavgospMonster
{
	Settings* _s;
public:
	ZavgospMonster(Settings* s)
	{
		_s = s;
	}

	void CleanField()
	{
		_s->liveAmount--;
		_s->advertisemantVies++;
	}
};




void main()
{
	SetConsoleOutputCP(1251);
	//Settings *s  = new Settings(); !!! cant create object
	Settings* s = Settings::GetInstance();
	s->level = 3;
	s->liveAmount = 5;
	s->personaz = 10;
	s->advertisemantVies = 0;

	Princess p1(s);
	ZavgospMonster z1(s);

	p1.JumpInFlowers();
	p1.JumpInFlowers();
	p1.JumpInFlowers();
	z1.CleanField();


	Settings *s1 = Settings::GetInstance();
	Princess p2(s1);
	p2.JumpInFlowers();

	cout << s1->advertisemantVies << endl;
}