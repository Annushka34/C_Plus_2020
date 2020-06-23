//#include<iostream>
//#include<conio.h>
//#include<ctime>
//using namespace std;
//
//class Figure
//{
//protected:
//	int arr[3][3] = {1,1,1,1,1,1,1,1,1};
//public:	
//	void Show() 
//	{ 
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				cout << (char)arr[i][j];
//			}
//			cout << endl;
//		}
//	}
//	virtual void Fill()
//	{
//
//	}
//};
//
//class Line : public Figure
//{
//public:
//	void Fill()
//	{
//		arr[0][0] = 1;
//		arr[0][1] = 1;
//	}
//};
//
//
//class Cube : public Figure
//{
//public:
//	void Fill()
//	{
//		arr[0][0] = 1;
//		arr[0][1] = 1;
//		arr[1][0] = 1;
//		arr[1][1] = 1;
//	}
//};
//
//
//class Arrow : public Figure
//{
//public:
//	void Fill()
//	{
//		arr[0][0] = 1;
//		arr[1][1] = 1;
//	}
//};
//
//class MyClass
//{
//public:
//	void Show1() {}
//};
//
//
//template<typename T>
//void DoSmth(T obj)
//{
//	obj.Show();
//}
//
//
//
//void main()
//{
//	cout << "------------STATIC POLIMORTHISM--------------------\n";
//	MyClass fObj;
//	DoSmth(fObj);
//
//	_getch();
//	cout << "------------DYNAMIC POLIMORTHISM--------------------\n";
//	srand(time(0));
//	Figure* f[10];
//	for (int i = 0; i < 10; i++)
//	{
//		int type = rand() % 3;
//		switch (type)
//		{
//		case 0: f[i] = new Arrow(); break;
//		case 1: f[i] = new Line(); break;
//		case 2: f[i] = new Cube(); break;
//		}
//	}
//	
//	for (int i = 0; i < 10; i++)
//	{
//		f[i]->Fill();
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		_getch();
//		system("cls");
//		f[i]->Show();
//	}
//	
//}