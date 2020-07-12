#include<iostream>
#include<Windows.h>
#include<process.h>
#include<thread>
#include<string>
#include<mutex>
#include<conio.h>

using namespace std;
int COUNTER = 600000;


class MyClass
{
public:
	int a = 5;
};


void MyTask(void * ptr)
{
	MyClass* m = (MyClass*)ptr;
	cout << m->a << endl;
	for (size_t i = 0; i < 10000; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "MyTask: " << i << endl;
		Sleep(50);
	}
}

void MyTask2(void* ptr)
{
	for (size_t i = 0; i < 1000; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "MyTask 2: " << i << endl;
		Sleep(50);
	}
}


void Foo5()
{
	for (size_t i = 0; i < 300000; i++)
	{
		COUNTER--;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		//cout << "MyTask: " << COUNTER-- << endl;
		//Sleep(50);
	}
}

void Foo6()
{
	for (size_t i = 0; i < 300000; i++)
	{
		COUNTER--;
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		//cout << "MyTask 2: " << COUNTER-- << endl;
		//Sleep(50);
	}
}


void Foo1(mutex & m)
{
	for (size_t i = 0; i < 30; i++)
	{
		m.lock();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "MyTask 1: " << i << endl;
		m.unlock();
	}
}

void Foo2(mutex& m)
{
	for (size_t i = 0; i < 30; i++)
	{
		m.lock();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "MyTask 2: " << i << endl;
		m.unlock();
	}
}
void main()
{	
	/*_beginthread(MyTask, 0, new MyClass());
	_beginthread(MyTask2, 0, NULL);
	_getch();*/

	//_beginthread(Foo1, 0, NULL);
	//_beginthread(Foo2, 0, NULL);


	//thread thread1(Foo5);
	//thread thread2(Foo6);
	//_getch();

	mutex m;

	thread thread1(Foo1, ref(m));
	thread thread2(Foo2, ref(m));

	//
	//for (size_t i = 0; i < COUNTER/2; i++)
	//{
	////Sleep(10);
	//	cout << i<<"main\n";
	//}
	thread1.join();
	thread2.join();
	////Sleep(20000);
	cout << "\n-----End-----\n";
	cout << "COUNTER: " << COUNTER << endl;
	//cout << str << endl;
}