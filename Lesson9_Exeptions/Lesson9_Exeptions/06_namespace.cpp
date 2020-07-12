#include<iostream>
#include <exception>
#include <typeinfo>
#include <stdexcept>
#include<Windows.h>
#include<assert.h>
#include<string>
#include"Salary.h"
#include"Student.h"

using namespace std;

namespace User
{
	int a = 13;
}

namespace Developer
{
	int a = 10;
}


namespace exceptions
{
	int a = 10;
	class myEx : public exception
	{
	private: char* msg;
	public:
		myEx(const char*ex)
		{
			msg = const_cast<char*>(ex);
		}
		virtual const char* what() const throw() override
		{
			cout << "Error!!!" << a;
			return (char*)msg;
		}
	};
}

namespace vars
{
	int a = 0;
	int b;
	int c;
}

using namespace User;


void main()
{
	std::cout << a;
	User::Student* s = new Student();

	::Bonus b;
	//int a = 5;
	//cout<<a;
	exceptions::a = 3;
	//cout << "bla-bla...\n";
	//try
	//{
	//	throw exceptions::myEx("something wrong in line 27");
	//}
	//catch (exceptions::myEx&ex)
	//{
	//	cout<<ex.what();
	//}


	using namespace exceptions;
	throw myEx("...");

	cout << exceptions::a;
}