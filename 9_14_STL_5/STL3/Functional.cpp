//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<array>
//#include<functional>
//using namespace std;
//class My {
//public: 
//	int _x; 
//	int _y;
//	My(int x)
//	{_x = x;}
//};
//
//bool Alpha(My*a, My*b) // предикат
//{
//	//return a->_x > b->_x ? true : false;
//	return a->_x > b->_x;
//}
//
//class Functor
//{
//public:
//	bool operator()(My*obj,My*obj1)
//	{
//		return obj->_x < obj1->_x;
//	}
//};
//
//void main()
//{
//	array<int, 7>arr{ 2,7,9,4,5,7,6 };
//	cout << "array arr - 7 el befor sorting\n";
//	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, "."));
//	sort(arr.begin(), arr.end(), greater<int>());
//	cout << "after sorting greater\n";
//
//	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, "."));
//	cout << endl;
//	sort(arr.begin(), arr.end(), less<int>());
//	cout << "after sorting less\n";
//	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, "."));
//
//	cout << "\n vector My classes\n";
//	My A(5);
//	My B(10);
//	vector<My*> v;
//	v.push_back(&A);
//	v.push_back(&B);
//	v.push_back(new My{3});
//	for (auto el : v)
//	{
//		cout << el->_x<<" ";
//	}
//	cout << endl;
//	sort(v.begin(), v.end(), Alpha);
//	int z = 5;
//	sort(v.begin(), v.end(), [z](My* a, My*b) {return a->_x > b->_x*z; });
//	cout << "after sorting\n";
//	for (auto el : v)
//	{
//		cout << el->_x << " ";
//	}
//
//	cout << endl;
//
//	sort(v.begin(), v.end(), Functor());
//	cout << "find if\n";
//	find(v.begin(), v.end(), 10);
//	auto itF=(find_if(v.begin(), v.end(), [](My*x) {return x->_x > 2; }));
//	cout << (*itF)->_x;
//	for (auto el : v)
//	{
//		cout << el->_x << " ";
//	}cout << endl;
//
//}