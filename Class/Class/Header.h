#pragma once
#include<iostream>
using namespace std;

class Person
{
	int _age;
	char _name[255];
public:
	Person();
	Person(int age, const char* name);
	Person(int age, char * name);
	void Show();
	~Person();
};

class Group
{
private:
	int size;
	Person ** parr = nullptr;
public:
	Group();//ctor tab tab
	Group(int size);
	void AddPerson(int, const char*);	
	void ShowGroup();
	~Group();
};

