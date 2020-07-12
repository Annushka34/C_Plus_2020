//#include<iostream>
//#include <exception>
//#include <typeinfo>
//#include <stdexcept>
//#include<Windows.h>
//#include<assert.h>
//
//using namespace std;
//
//void Foo(int x)
//{
//	try
//	{
//		if (x == 0)
//			throw exception();
//	}
//	catch(exception&ex)
//	{
//		cout << "Error in Foo\n";
//		throw ex;
//	}
//	cout << 5 / x;
//}
//
//void Foo1()
//{
//	int x = -5;
//	int *arr = new int[x];
//}
//
//void main()
//{
//	//try
//	//{
//	//	//int * ptr = nullptr;
//	//	//int * ptr = new int(10);
//	//	//if (ptr == nullptr) throw "error line 15";
//	//	int a;
//	//	cin >> a;
//	//	if (a == 0)//throw a;
//	//	throw exception("error line 26");
//	//	//cout << *ptr;
//	//	//delete ptr;
//	//}
//	//catch (exception&ex)
//	//{
//	//	cout << "number can't be " << ex.what() << endl;
//	//}
//	//catch (...)
//	//{
//	//	cout << "Some error\t";
//	//}
//
//
//	//------------FOO----------------
//	try
//	{
//		Foo(0);
//	}
//	catch (exception& ex)
//	{
//		cout << "Exeption in main  ";
//		cout << ex.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Exeption in Foo";
//	}
//	cout << "...MAIN CODE....\n";
//
//
//	try
//	{
//		Foo1();
//	}
//	catch (exception&ex)
//	{
//		cout << ex.what();
//	}
//}