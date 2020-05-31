//#include"Point.h"
//
//class MyClass
//{
//private:
//	int x;
//public:
//	MyClass(int x):x(x)
//	{
//			
//	}
//	void Show()
//	{
//		cout << x << endl;
//	}
//	void SetX(int x)
//	{
//		this->x = x;
//	}
//	friend void ShowMyClass(MyClass& obj);
//	friend MyClass operator+ (MyClass& obj1, MyClass& obj2);
//	friend int operator+ (int a, MyClass& obj2);
//	friend MyClass operator+ (MyClass& obj1, int a);
//};
//
//void ShowMyClass(MyClass& obj)
//{
//	cout << "x = " << obj.x << endl;
//}
//
//MyClass operator+ (MyClass& obj1, MyClass& obj2)
//{
//	MyClass obj(0);
//	obj.x = obj1.x + obj2.x;
//	return obj;
//}
//int operator+ (int a, MyClass& obj)
//{
//	return a + obj.x;
//}
//MyClass operator+ (MyClass& obj, int a)
//{
//	MyClass obj1(0);
//	obj1.x = obj.x + a;
//	return obj1;
//}
//
//
//
//void main()
//{
//	srand(time(0));
//	SetConsoleOutputCP(1251);
//	
//	MyClass obj1(10);
//	MyClass obj2(20);
//	MyClass obj3 = obj1 + obj2;
//	ShowMyClass(obj3);
//
//	int y = 5 + obj3;
//	cout << y << endl;
//
//	MyClass obj4 = obj3 + 5;
//	ShowMyClass(obj4);
//	//* / + - (*) () [] -> > < == <= >= ! != << >> new delete 
//}