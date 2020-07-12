//#include<iostream>
//#include<Windows.h>
//
//using namespace std;
//
//template<typename T>
//void Foo(T a)
//{
//	cout << "I say: ";
//	a();
//}
//
//void Show1()
//{
//	cout << "Hello\n";
//}
//
//void Show2()
//{
//	cout << "Bye\n";	
//}
//
//bool Compare1(int a, int b)
//{
//	return a > b;
//}
//
//bool Compare2(int a, int b)
//{
//	return a > b;
//}
//
//void Foo5(int &a)
//{
//	a = 13;
//}
//
//template<typename T>
//void Sort(T comp)
//{
//	int arr[10] = { 2,5,7,4,3,6,1,89,11,15};
//	for (size_t i = 0; i < 10; i++)
//	{
//		for (size_t j = 0; j < 10 - i-1; j++)
//		{
//			if (comp(arr[j], arr[j + 1]))
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void main()
//{
//	auto ptr = Show1;
//	//cout << typeid(ptr).name() << endl;
//	void(*f)(void) = Show2;
//	//cout << typeid(f).name() << endl;
//
//	//---ÂÈÊËÈÊ ÔÓÍÊÖ²É ×ÅÐÅÇ ÂÊÀÇ²ÂÍÈÊÈ---
//	//ptr();
//	//f();
//
//	Foo(ptr);
//	Foo(f);
//
//	Sort(Compare2);
//
//	//---LAMDA---
//	[]()->void {};
//
//	//-----------------
//	[]()->void {cout << "Its work!!!!!\n"; };
//	auto fL1 = []()->void {cout << "Its work!!!!!\n"; };
//	fL1();
//
//	[](int x, int y)->bool {return x > y; };
//
//	Sort([](int x, int y)->bool {return x > y; });
//
//	Foo([]()->void {cout << "***"; });
//	Foo([]()->void {cout << "Uraaaaa"; });
//	Foo([]()->void {cout << "-----------"; });
//
//	//----ÇÀÕÂÀÒ ÏÀÐÀÌÅÒÐ²Â Ç ÌÅÉÍÀ-----
//
//	int num1 = 15;
//	auto fL = [num1]()->void {cout << num1<<"\n"; };
//
//	fL();
//
//	int num5 = 22;
//	Foo5(ref(num5));
//	cout << num5 << endl;
//}
