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
//class MyClass{
//public:
//	int _x;
//	MyClass(int x)
//	{
//		_x = x;
//	}
//};
//
//void Show(MyClass* m)
//{
//	cout << m->_x << " ";
//}
//
//class Functor {
//public:
//	bool operator()(MyClass*m1, MyClass*m2)
//	{/*
//		if (m1->_x > m2->_x)
//			return true;
//		else return false;*/
//		return m1->_x > m2->_x;
//	}
//};
//
//bool SortFunc(MyClass*m1, MyClass*m2)
//{
//	return m1->_x < m2->_x;
//}
//
//void Multipl(MyClass*m)
//{
//	cout<<"x*x = "<<m->_x*m->_x;
//}
//
//int Mult2(int a)
//{
//	return a*a;
//}
//
//int Fuct1(int a)
//{
//	return a <5?a:0;
//}
//
//void main()
//{
//	array<int, 6> arr1{ 2,4,5,2,4,1 };
//	copy(arr1.begin(), arr1.end(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//	sort(arr1.begin(), arr1.end(), less<int>());
//	sort(arr1.begin(), arr1.end(), greater<int>());
//
//
//	copy(arr1.begin(), arr1.end(), ostream_iterator<int>(cout, " "));
//	
//	vector<MyClass*> v{ new MyClass(10) };
//	v.push_back(new MyClass(5));
//	v.push_back(new MyClass(120));
//	MyClass* m = new MyClass(7);
//	v.push_back(m);
//	cout << "\nMy class\n";
//
//	for_each(v.begin(), v.end(), Show);
//	Functor f;
//	sort(v.begin(), v.end(),f);
//	sort(v.begin(), v.end(), Functor());
//	sort(v.begin(), v.end(), SortFunc);
//
//	cout << "after sorting\n";
//	for_each(v.begin(), v.end(), Show);
//
//	for_each(v.begin(), v.end(), Multipl);
//	cout << endl;
//	//for_each(v.begin(), v.end(), Show);
//	array<int, 6>dest;
//	transform(arr1.begin(), arr1.end(), dest.begin(), Mult2);
//	copy(dest.begin(), dest.end(), ostream_iterator<int>(cout, " "));
//	array<int, 6>dest1;
//	cout << "\n transform if a<5\n";
//	transform(arr1.begin(), arr1.end(), dest1.begin(), Fuct1);
//	copy(dest1.begin(), dest1.end(), ostream_iterator<int>(cout, " "));
//
//
//	for_each(dest1.begin(), dest1.end(), [](int x) {cout << "x=" << x << endl; });
//	cout << "find if:";
//	auto it=(find_if(v.begin(), v.end(), [](MyClass*m) {return m->_x > 100; }));
//	cout << (*it)->_x;
//}