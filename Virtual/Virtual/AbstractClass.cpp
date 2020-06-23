//#include<iostream>
//#include<conio.h>
//#include<ctime>
//using namespace std;
//
//class Figure//---abstract class becouse where Fill  - pure virtual
//{
//protected:
//	int arr[3][3] = { 1,1,1,1,1,1,1,1,1 };
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
//	virtual void Fill() = 0;// - pure virtual function
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
//
//
//void main()
//{
//	Figure * f = new Arrow();// pointer type Figure on object Arrow
//
//	Figure* f1[5];// array of pointers(nullptr) type figure 
//	f1[0] = new Arrow();
//
//	Figure** f2 = new Figure*[5];//dynamic array of pointers(nullptr) type figure 
//	f2[0] = new Arrow();
//	//Figure f1[5];
//	//Figure* f2 = new Figure[5];
//}