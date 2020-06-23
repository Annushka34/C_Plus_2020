//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//	//	cout << "Animal ctor\n";
//	}
//	virtual void Show() { cout << "base Animal\n"; }
//};
//
//class Bird : public Animal
//{
//public:
//	virtual void Show()	override
//	{
//		cout << "Bird\n";	
//	}
//};
//
//class Mammals : public Animal
//{
//public:
//	void Show()	{cout << "Mammals\n";}
//};
//
//
//class Monkey : public Mammals
//{
//public:
//	void Show()	{ cout << "Monkey\n";}
//};
//
//
//void main()
//{
//	//if no virtual
//	// 1 - pointer base =  object derived  (call method  base)
//	// 2 - pointer derived = object derived (call method derived or if no such - call base)
//	//------------------------------------
//	//if virtual
//	// always will look for method realization in derived(obj) class first!!!
//	Animal* b = nullptr;
//
//	///
//	b = new Monkey();
//	b->Show();
//
//	//------arr of pointers---
//	Animal* arr[5];//=> will create 10 pointers
//	//Animal** arr2 = new Animal * [5];
//
//	//-----arr of objects------------
//	//Animal arr[10] = > will create 10 objects
//	//Animal* arr2 = new Animal[10];//==  
//
//
//	arr[0] = new Monkey();
//	arr[1] = new Bird();
//	arr[2] = new Mammals();
//	arr[3] = new Animal();
//	arr[4] = new Bird();
//
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i]->Show();
//	}
//
//
//	//((Bird*)b)->DoSmth2();
//	//Monkey* m = new Monkey();
//	//m->DoSmth2();
//}