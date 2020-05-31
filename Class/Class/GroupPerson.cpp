#include"Header.h"

Person::Person()
	{
		cout << "CONSTRUCTOR PERSON\n";
		_age = 0;
		strcpy_s(_name, "no name");
	}
Person::Person(int age, const char* name)
{
	cout << "PEREVANTAZ CONSTRUCTOR PERSON\n";
	_age = age;
	strcpy_s(_name, name);
}

Person::Person(int age, char * name)
{
	cout << "PEREVANTAZ CONSTRUCTOR PERSON\n";
	_age = age;
	strcpy_s(_name, name);
}
void Person::Show()
	{
		cout << _name << " " << _age << "\n";
	}

Person::~Person()
	{
		cout << "~Person\n";
	}

Group::Group()//ctor tab tab
	{
		size = 0;
		parr = new Person*[size];
		for (int i = 0; i < size; i++)
		{
			parr[i] = new Person();
		}
	}

Group::Group(int size)//ctor tab tab
{
	this->size = size;
	parr = new Person*[size];
	for (int i = 0; i < size; i++)
	{
		parr[i] = new Person();
	}
}
void Group::AddPerson(int age, const char * name)
	{
		size++;
		Person ** temp = new Person*[size];
		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = parr[i];
		}
		temp[size - 1] = new Person(age, name);
		delete[] parr;
		parr = temp;
	}

void Group::ShowGroup()
	{
		for (int i = 0; i < size; i++)
		{
			parr[i]->Show();
		}
	}
Group::~Group()
	{
		for (int i = 0; i < size; i++)
		{
			delete parr[i];
		}
		delete[] parr;
	}

