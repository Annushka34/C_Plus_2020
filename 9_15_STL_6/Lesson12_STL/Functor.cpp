//#include<iostream>
//#include<array>
//#include<list>
//#include<vector>
//#include<iterator>
//#include<algorithm>
//#include<functional>
//#include<numeric>
//using namespace std;
//
//class MyClass
//{
//public:
//	vector<int> _v;
//	MyClass(initializer_list<int>li)
//	{
//		_v = li;
//	}
//	void operator()(bool ev)
//	{
//		for (auto el : _v)
//		{
//			if (ev)
//			{
//				if ((el % 2))
//				{
//					cout << el << " ";
//				}
//			}
//			else
//			{
//				if (!(el % 2))
//				cout << el << " ";
//			}
//		}
//	}
//};
//
//void main()
//{
//	MyClass m{ 2,5,3 };
//	m(false);
//}