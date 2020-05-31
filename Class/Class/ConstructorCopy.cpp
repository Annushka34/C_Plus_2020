#include"Header.h"
#define CONSTR 1

#if (CONSTR==1)

class Point
{
private:
	int x;
	int y;
	char * name;
public:
	Point()
	{
		cout << "CONSTRUCTOR\n";
		name = new char[255]{ "my point" };
	}
	Point(const Point & p)
	{
		cout << "CONSTRUCTOR COPY\n";
		name = new char[255];
		strcpy_s(name, strlen(p.name)+1, p.name);
	}
	void ShowName()
	{
		cout << name << endl;
	}
	~Point()
	{
		cout << "~DESTRUCTOR\n";
		delete[] name;
	}
};

void Foo(Point p)
{
	cout << "Foo\n";
}
//
//void Foo1(int a)
//{
//	a = 0;
//}
//
//void Foo2(int * a)
//{
//	/*int b = 5;
//	a = &b;*/
//	(*a) = 111;
//}
//
//void Foo3(int &a)
//{
//	a = 222;
//}

void main()
{
	Point p;
	Point p1 = p;//копіювання обєкту
	//p.ShowName();
	//Foo(p);
	//p.ShowName();
	//cout << "Main end!!!!!\n";
}


#endif //  CONSTR 2