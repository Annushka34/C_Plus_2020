//#include<iostream>
//#include<map>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//class Functor {
//public:
//	void operator()(pair<int,string>p)
//	{
//		cout << p.first << " " << p.second << endl;
//	}
//};
//
//class Functor1 {
//public:
//	void operator()(pair<int, string>p)
//	{
//		if(p.first % 2 == 0)
//		cout << p.first << " " << p.second << endl;
//	}
//};
//
//class Find2 {
//public:
//	bool operator()(pair<int, string>p)
//	{
//		return p.first == 7;
//	}
//};
//
//void Show(pair<int, string>p)
//{
//	cout << p.first << " " << p.second << endl;
//}
//
//void main()
//{
//	map<int, string>m{
//		{1,"cake"},
//		{2,"icecreame"},
//		{7,"cheese"}
//	};
//	for_each(m.begin(), m.end(), Functor());
//
//	for_each(m.begin(), m.end(), [](pair<int, string> x) { cout << x.second<< " "; });
//
//	for_each(m.begin(), m.end(), Functor1());
//
//	cout << endl;
//	cout << (*find_if(m.begin(), m.end(), Find2())).second;
//	for_each(m.begin(), m.end(), Show);
//	map<int, string> m2;
//	m2.insert(make_pair(5, "hello"));
//	for_each(m2.begin(), m2.end(), Show);
//
//}