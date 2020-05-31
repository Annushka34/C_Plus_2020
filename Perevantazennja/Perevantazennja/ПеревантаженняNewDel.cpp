#include"Arr.h"

class PointP
{
private:
	int x;
public:
	void ShowX()
	{
		cout <<"x = "<< this->x << endl;
	}
	void* operator new (size_t s)
	{
		cout << "allocate new memory\n";
		return malloc(s);
	}
	void operator delete (void* ptr)
	{
		cout << "delete memory\n";
		free(ptr);
	}
};

class MyClass
{
	PointP* p;
public:
	MyClass()
	{
		p = new PointP();
	}

	~MyClass()
	{
		delete p;
	}

	PointP* operator -> ()
	{
		return p;
	}

	operator PointP* ()
	{
		return p;
	}

};



void main()
{
	srand(time(0));
	SetConsoleOutputCP(1251);
	PointP* ptr = new PointP();
	ptr->ShowX();

	MyClass* m = new MyClass();
	(*m)->ShowX();


		//malloc() - create
		//calloc() - create
		//free - delete

	//p->ShowX();
	delete m;
}