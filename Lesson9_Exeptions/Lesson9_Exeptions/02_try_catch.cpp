//#include<iostream>
//#include <exception>
//#include <typeinfo>
//#include <stdexcept>
//#include<Windows.h>
//#include<assert.h>
//
//
//using namespace std;
//
//void Ex(int ex)
//{
//	if (ex == 1)
//		//	cout << "Exception in line 30: " << ex << endl;
//		cout << "Error div 0!!!";
//	if (ex == 2)
//		cout << "memory not allocated\n";
//}
//
//
//void Foo(int x)
//{
//	if (x == 0) throw "DIB BY ZERO!";
//	cout << 5 / x;
//}
//
//void main()
//{
//	int a = 255;
//	cout << "Enter number:";
//	int b;
//	cin >> b;
//	int c;
//	try
//	{
//		if (b == 0)
//			throw "Div zero\n";
//		c = a / b;
//		cout << a / b;
//	}
//	catch (int ex)
//	{
//		Ex(ex);
//	}
//	catch (const char * ex)
//	{
//		cout << "Error: " << ex << endl;
//	}
//	catch (...)
//	{
//		cout << "Not known exception\n";
//	}
//
//	cout << "\n...Continue my prog...\n";
//
//	//cout <<"Res: "<< c << endl;
//
//	int size;
//	cin >> size;
//	int* arr;
//	try
//	{
//		if (size <= 0)
//			throw 2;
//		arr = new int[size];
//	}
//	catch(int ex)
//	{
//		Ex(ex);
//	}
//
//	try
//	{
//		cout << "<<2>>\n";
//		int * ptr = nullptr;
//		//int * ptr = new int(10);
//		if (ptr==nullptr) throw "error line 15";		
//		cout << *ptr;
//		delete ptr;
//	}
//	catch (int err)
//	{
//		cout << "number can't be " << err << endl;
//	}
//	catch (const char* err)
//	{
//		cout << "Some error\t";
//		cout << err << endl;
//	}
//	catch (...)
//	{
//		cout << "Some error\t";
//	}
//
//
//	////------------FOO----------------
//	try
//	{
//		Foo(0);
//	}
//	catch (char* ex)
//	{
//		cout << "Exeption in Foo  ";
//		cout << ex << endl;
//	}
//	catch (...)
//	{
//		cout << "Exeption in Foo";
//	}
//	cout << "\n...MAIN CODE....\n";
//}