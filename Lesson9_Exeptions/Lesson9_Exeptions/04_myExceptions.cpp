//#include<iostream>
//#include <exception>
//#include <typeinfo>
//#include <stdexcept>
//#include<Windows.h>
//#include<assert.h>
//#include<string>
//
//using namespace std;
//
//class myEx : public exception
//{
//private: char* msg;
//public:
//	myEx(const char*ex)
//	{
//		msg = const_cast<char*>(ex);
//		//msg = (char*)ex;
//	}
//	virtual const char* what() const throw() override
//	{
//		cout << "Error developer Ann!!!";
//		return (char*)msg;
//	}
//};
//
//void main()
//{
//	cout << "bla-bla...\n";
//	try
//	{
//		throw myEx("something wrong in line 27");
//	}
//	catch (myEx&ex)
//	{
//		cout<<ex.what();
//	}
//}