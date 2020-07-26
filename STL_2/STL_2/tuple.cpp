#include<iostream>
#include<tuple>
#include<iterator>
#include<vector>
#include<numeric>
#include<string>

using namespace std;

tuple<int, string, string, char> Foo()
{
	return make_tuple(5, "vasja", "pupkin", 'a');	
}

void main()
{
	/*tuple<int, string, string, char> t{ 5,"vasja", "pupkin", 'a' };
	cout<<get<0>(t);	
	tie(a, str1, str2, b) = t;
	cout << a << endl;*/

	auto res = Foo();
	//cout << typeid(res).name() << endl;
	string str1, str2; char b; int a;
	tie(a, str1, str2, b) = res;
	cout << a << str1 << str2 << b << endl;
}