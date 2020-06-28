#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

class Shooter
{
public:
    string amuniz;
    int size;

    void Shoot()
    {
        cout << "-1 " << this->amuniz << endl;
        this->size--;
    }

    void GiveAmunition(string amuniz, int size)
    {
        this->amuniz = amuniz;
        this->size = size;
    }

    virtual ~Shooter()
    {

    }

};

class Archer : virtual protected Shooter
{
public:
    void Shoot() 
    {
        cout << "Archer shoot!!!" << endl;
        Shooter::Shoot();
    }
};

class Ranger : virtual protected Shooter
{
public:
    void Shoot() 
    {
        cout << "Ranger shoot!!!" << endl;
        Shooter::Shoot();
    }
};

class ArcherTower : public Archer, public Ranger
{
public:
    ArcherTower()
    {
        cout << "ArcherTower" << endl;
    }
};

class Catapult : public Shooter
{
public:
    void Shoot()
    {
        cout << "Ranger shoot!!!" << endl;
        Shooter::Shoot();
    }
};

class Fortress : public ArcherTower, public Catapult
{
public:
    Fortress()
    {

    }
};


void main()
{
    Fortress f;
    f.ArcherTower::Ranger::Shoot();
}