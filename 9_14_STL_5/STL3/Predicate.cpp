//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<array>
//#include<functional>
//#include<string>
//using namespace std;
//class My {
//public:
//	int _x;
//	My(int x)
//	{
//		_x = x;
//	}
//};
//
//bool findInna(string str)
//{
//	return !str.compare(0, 3, "inn");
//}
//
//void Show(int a)
//{
//	cout << a << " ";
//}
//void Multiply(int a)
//{
//	cout<<a*a<<" ";
//}
//int Multiply1(int a)
//{
//	return a*a;
//}
//
//class DividedByTwo
//{
//public:
//	bool operator()(const int x) const
//	{
//		return x % 2 == 0;
//	}
//};
//
//class StartWithA {
//public:
//	bool operator()(const string str)
//	{
//		return (*str.begin() == 'a');
//	}
//};
//
//void main()
//{
//	array<string, 6> arr{ "alga","innaaaa","petja","inna","marija", "innfffff" };
//	copy(arr.begin(), arr.end(), ostream_iterator<string>(cout, "."));
//	cout << endl;
//	//find_if
//	array<string, 6>::iterator it=find_if(arr.begin(), arr.end(), findInna);
//	while (it != arr.end())
//	{
//		cout << "pos= " << it - arr.begin() << endl;
//		it = find_if(it+1, arr.end(), findInna);
//	}
//	//else cout << "no such person";
//
//	vector<int> v(5, 7);
//	//for_each
//	for_each(v.begin(), v.end(), Show);
//	cout << endl;
//	for_each(v.begin(), v.end(), Multiply);
//	cout << "\ntransform\n";
//	vector<int> v2;
//	v2.resize(5);
//	transform(v.begin(), v.end(), v2.begin(), Multiply1);
//	for_each(v2.begin(), v2.end(), Show);
//	//count_if
//	for_each(v2.begin(), v2.end(), [](int a) {cout << a << " - "; });
//
//	int arr1[10]{ 2,5,7 };
//	cout <<count_if(&arr1[0], &arr1[9], DividedByTwo());
//
//	cout << count_if(arr.begin(), arr.end(), StartWithA());
//
//	//lambda
//	cout<<*max_element(arr.begin(), arr.end(), [](const string str1, const string str2)
//	{ return str1[0] < str2[0]; });
//}