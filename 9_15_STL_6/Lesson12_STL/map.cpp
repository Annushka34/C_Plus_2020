//#include<iostream>/*
//#include<array>
//#include<map>*/
//#include<vector>
//#include<iterator>
//#include<algorithm>/*
//#include<string>*/
//#include<numeric>
//#include <fstream>
//using namespace std;
//
//class Functor
//{
//public:
//	bool operator()(int a)
//	{
//		return a > 5;
//	}
//};
//
//class FindP {
//public:
//	bool operator()(pair<int, string>p)
//	{
//		return ((p.second).at(0)== 'P');			
//	}
//};
//
//void main()
//{/*
//	map<int, string> m{
//		{2456,"Ivanov"},
//		{4568,"Petrov"},
//		{1236,"Sidorov"},
//		{7896,"Pupkin"}
//	};
//
//	map<int, string> m1;
//	*/
//
//	vector<int> v{ 2,7,5,8,10 };
//	copy_if(v.begin(), v.end(), ostream_iterator<int>(cout, "."), [](int a) {return a%2; });
//	cout << endl;
//	copy_if(v.begin(), v.end(), ostream_iterator<int>(cout, "."), Functor());
//	cout << endl;
///*
//	cout << "\ntransform\n";
//	transform(m.begin(), m.end(), ostream_iterator<string>(cout, "."), [](pair<int, string>p) {return (p.first > 2000)?p.second:"-"; });
//	cout << "\nfor_each\n";
//	for_each(m.begin(), m.end(), [](pair<int, string>p) {cout << p.first << "-" << p.second << endl; });
//	
//	auto it=find_if(m.begin(), m.end(), FindP());
//	cout <<"find "<< (*it).first;*/
//
//	int arr[10];
//	iota(arr, arr + 10, 12);
//	for_each(arr, arr + 10, [](int x) {cout << x; });
//	cout << endl;
//
//}