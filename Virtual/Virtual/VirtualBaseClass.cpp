//#include<iostream>
//#include<conio.h>
//#include<ctime>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base\n";
//	}
//	virtual ~Base()
//	{
//		cout << "~Base\n";
//	}
//};
//
//class Der1 : virtual public Base
//{
//public:
//	Der1()
//	{
//		cout << "Der1\n";
//	}
//	virtual ~Der1()
//	{
//		cout << "~Der1\n";
//	}
//};
//
//class Der2 : virtual public Base
//{
//public:
//	Der2()
//	{
//		cout << "Der2\n";
//	}
//	virtual ~Der2()
//	{
//		cout << "~Der2\n";
//	}
//};
//
//class Child: public Der1, public Der2
//{
//public:
//	Child()
//	{
//		cout << "Child\n";
//	}
//	virtual ~Child()
//	{
//		cout << "~Child\n";
//	}
//};
//
//
//void main()
//{
//	/*Child* ch = new Child();
//	delete ch;*/
//
//	Base* b = new Child();
//	delete b;
//}