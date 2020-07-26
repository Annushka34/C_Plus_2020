//#include<iostream>
//#include<algorithm>
//#include<iterator>
//#include<vector>
//#include<numeric>
//#include<string>
//
//using namespace std;
//
//class MyClass
//{
//public:
//	string text;
//	MyClass(string t)
//	{
//		text = t;
//	}
//};
//void Foo1(MyClass& m)
//{
//
//	cout << m.text << endl;
//}
//
//
//void Foo(int x)
//{
//	if(x%2==0)
//	cout << x << " ";
//	else cout << " * ";
//}
//
//struct Funct
//{
//	void operator()(int &x)
//	{
//		x = x * 10;
//	}
//};
//
//void main()
//{
//	vector<MyClass> v{ MyClass("hello"), MyClass("buy"), MyClass("no") };
//	for_each(v.begin(), v.end(), Foo1);
//
//	int arr[20];
//	// fill by numbers from 21
//	iota(arr, arr + 20, 21);
//	//---робить якусь дію над кожним елементом коллекції---(дія описана в функторі Foo)
//	for_each(arr, arr + 20, Foo);
//	cout << endl;
//
//	for_each(arr, arr + 20, Funct());
//	for_each(arr, arr + 20, Foo);
//
//	//   lambda
//	int a = 13;
//	auto f = [a](string str) {cout <<"\n\n"<< str << "  " << a; };
//	f("hello");
//	cout << typeid(f).name()<<endl;
//
//	//---ptr on function Foo
//	auto f1 = Foo;
//	cout << typeid(f1).name()<<endl;
//	(*f1)(13);
//		
//	int y = 2;
//	for_each(arr, arr + 20, [y](int x) { cout << "-" << x*y << "-"; });
//	cout << endl;
//}