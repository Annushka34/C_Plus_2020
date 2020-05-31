//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//class Teacher;
//
//class Student
//{
//private:
//	int mark;
//	static int counter;
//
//public:
//	Student()
//	{
//		mark = 0;
//		counter++;
//	}
//	void ShowMark()
//	{
//		cout << mark << endl;
//	}
//	static void ShowCounter()
//	{
//		//mark = 10;  error -  mark not static!!!
//		cout << "amount of instances: " << counter << endl;
//	}
//	~Student()
//	{
//		counter--;
//	}
//};
//int Student::counter = 0;
//
//
//class Archer
//{
//	int force;
//	static int arrow;
//public:
//	Archer()
//	{
//		force = 5;		
//	}
//	void ShowData()
//	{
//		cout << "live: " << force << "   arrow: " << arrow << endl;
//	}
//	void MakeShoot()
//	{
//		cout << "--------------->  shoooooooooooooooot\n";
//		arrow--;
//		force--;
//	}
//};
//int Archer::arrow = 5;
//
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	/*Student::ShowCounter();
//
//	Student * s1 = new Student();
//	Student * s2 = new Student();
//	s2->ShowCounter();
//	delete s1;
//	s2->ShowCounter();
//	cout << "-----------------\n";
//	delete s2;
//	Student::ShowCounter();
//	cout << "------end-----------\n";*/
//
//
//	Archer ar1;
//	Archer ar2;
//	Archer ar3;
//	ar1.ShowData();
//	ar2.ShowData();
//	ar3.ShowData();
//
//	ar1.MakeShoot();
//	ar1.MakeShoot();
//	ar2.MakeShoot();
//
//	ar1.ShowData();
//	ar2.ShowData();
//	ar3.ShowData();
//}