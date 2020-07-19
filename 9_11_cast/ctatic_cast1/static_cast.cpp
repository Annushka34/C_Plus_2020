//#include<iostream>
//#include<Windows.h>
//using namespace std;
//class BaseBook{
//public:
//	void Show() {}
//
//};
//
//class DerivedBook:public BaseBook{
//public:
//	void OwnDerivedMethod() {}
//
//};
//
//class Student {
//public:
//	void OwnMethod() {}
//
//};
//
//
//class A {
//	int _x;
//public:
//	A(int x)
//	{
//		this->_x = x;
//	}
//	operator int()
//	{
//		return _x;
//	}
//};
//
///// <summary>
///// take pointer on int dynamic object
///// </summary>
///// <param name="ptr">pointer on int* (cast to void*)</param>
///// <returns>int number incremented on 1</returns>
//int Foo(void* ptr)
//{
//	/*int a = (*(int*)ptr)++;*/
//	int* pa = static_cast<int*> (ptr);
//	return (*pa)++;
//}
//
//void main()
//{
//
//	//приведення часу компіляції
//	//стандартні приведення
//	int a = 10;
//	int b = 3.2;//  неявне
//	double d = (double)a/9;// явне
//	double c = b;
//	c = (int)d;
//	double*m = new double(3);
//	char*mc = (char*)m;
//	//*mc = 'a';
//	cout << *mc;
//	
//	//
//	//BaseBook*base = new DerivedBook();
//	//((Student*)base)->OwnMethod();//!!!!error
//	//base->Show();
//	//Student* ptr7 = static_cast<Student*> (base);
//
//	//double * n = (double*)new int(100);//- no mistake
//	//double * n=static_cast<double*>(new int(100)); //-mistake
//
//	////явне приведення
//	A digit(5);//приведення від int до А
//	int dig = digit;//приведення від А до int
//	//cout << dig;
//
//	////зворотні приведення стандартних приведень
//	////від int в enum
//	////від базового в насліднка
//	////від void* до T*
//	enum class MyEnum{apr,may,march};	
//	cout << (int)MyEnum::apr;
//
//	MyEnum month = MyEnum::apr;
//	double sept = (int)month;
//	sept = 10;
//	//month = (MyEnum)((int)sept); - error
//
//	month = static_cast<MyEnum> (static_cast<int>(sept));
//	int m10 = static_cast<int>(month);
//	cout << "month:"<< m10 << endl;
//
//
//	////приведення всього до void
//	void*ptr1 = (void*)5;
//	cout << (int)ptr1;
//	//void*ptr = static_cast<void*>(5);//mistake
//	void*ptr = static_cast<void*>(new int(5));
//
//
//	///   ERROR !!!
//	void* ptr5 = new Student();
//	int k = Foo(ptr5);
//	cout << "\nFoo: \n";
//	cout << k << endl;
//	system("Pause");
//}