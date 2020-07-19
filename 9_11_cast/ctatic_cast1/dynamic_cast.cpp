//#include<iostream>
//#include<Windows.h>
//using namespace std;
//class Base;
//class Derived1;
//class Derived2;
//
//
//
//class Base 
//{ 
//public:
//	int a;
//	virtual void Show() = 0;
//};
//
//class Derived1 :public Base
//{
//public:
//	virtual void Show()override {}
//	void OwnMethodDer1() { cout << "OwnMethodDer1"; }
//};
//class Derived2 : public Base
//{
//public:
//	void Show()override { cout << "Der2\n"; }
//	void OwnMethod() { cout << "Der2\n"; }
//};
//
//class None
//{
//public:
//	virtual void Show() = 0;
//};
//
//Base* f(Base*c)
//{
//	//None* n = static_cast<None*>(c); - exeption
//	
//	//None* n = dynamic_cast<None*>(c);
//	//cout << ((n != nullptr) ? "n" : "n null") << endl;
//	//return dynamic_cast<Base*>(n);
//	None*n1 =  (None*)c;
//	return dynamic_cast<Derived1*>(c);
//}
//
//void main()
//{
//	Derived2*c = new Derived2();
//	//--приводим с до Base (приводим наслідника до базового)
//	Base*basePtr = dynamic_cast<Base*>(c);
//	//--A -> C (базового до наслідника)
//	None*c1 = dynamic_cast<None*>(basePtr);
//	if (c1 != nullptr)
//		c1->Show();
//	else
//		cout << "not derived class\n";
//	//-- наслідника до базового
//	//None*c2 = static_cast<None*>(c);
//
//	Base* base1;
//	int type;
//	cout << "Enter 1 = Derived1, 2 = Derived2\n";
//	cin >> type;
//	if (type == 1)
//	{
//		base1 = new Derived1();
//	}
//	else
//	{
//		base1 = new Derived2();
//	}
//
//	Derived1* d1 = nullptr;
//	Derived2* d2 = nullptr;
//	d1 = dynamic_cast<Derived1*> (base1);
//	if (d1 == nullptr)
//	{
//		d2 = dynamic_cast<Derived2*> (base1);
//		d2->OwnMethod();
//	}
//	else
//	{
//		d1->OwnMethodDer1();
//	}
//
//	cout << typeid(*base1).name()<<endl;
//	
//
//	//f(c);
//	system("Pause");
//}