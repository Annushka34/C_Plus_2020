//#include<iostream>
//#include<Windows.h>
//#include<process.h>
//#include<thread>
//#include<string>
//#include<mutex>
//
//using namespace std;
//int COUNTER = 2000;
//int NUMBER = 0;
//string str = "";
//void Foo1(void*v)
//{
//	for (int i = 0; i < COUNTER; i++)
//	{
//		NUMBER++;
//		Sleep(50);
//		cout << NUMBER<<"Thread 1\n";
//	}
//}
//
//void Foo2(void*v)
//{
//	for (int i = 0; i < COUNTER; i++)
//	{
//		Sleep(50);
//		cout << i<<"Thread 2\n";
//	}
//}
//void Foo3(mutex &m)
//{
//	for (int i = 0; i < COUNTER; i++)
//	{
//		m.lock();
//		NUMBER++;
//		str += to_string(NUMBER);
//		str += " ";
//		m.unlock();
//		//Sleep(10);
//		cout << i << endl;
//	}
//}
//
//void Foo4(mutex &m)
//{
//	for (int i = 0; i < COUNTER; i++)
//	{
//		m.lock();
//		NUMBER++;
//		str += to_string(NUMBER);
//		str += " ";
//
//		m.unlock();
//		//Sleep(10);
//		cout << i << endl;
//	}
//}
//
//
//void main()
//{
//	//_beginthread(Foo1, 0, NULL);
//	//_beginthread(Foo2, 0, NULL);
//	mutex m;
//
//	thread thread1(Foo3, ref(m));
//	thread thread2(Foo4, ref(m));
//
//	
//	for (size_t i = 0; i < COUNTER/2; i++)
//	{
//	//Sleep(10);
//		cout << i<<"main\n";
//	}
//	thread1.join();
//	thread2.join();
//	//Sleep(20000);
//	cout << "\n-----End-----\n";
//	cout << str << endl;
//}