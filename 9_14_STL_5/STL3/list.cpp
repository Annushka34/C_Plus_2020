//#include<iostream>
//#include<list>
//#include<algorithm>
//#include<string>
//#include<iterator>
//
//
//using namespace std;
//
//void main()
//{
//	list<int> li{ 2,5,7,4,1,2,5,89 };
//	list<int> dest;
//	dest.resize(10);
//	copy_if(li.begin(), li.end(), dest.begin(), [](int a) {return a > 10; });
//	copy(dest.begin(), dest.end(), ostream_iterator<int>(cout, "."));
//	cout << endl;
//	copy_if(li.begin(), li.end(), ostream_iterator<int>(cout, "."), [](int a) {return a > 5; });
//
//	copy_if(li.begin(), li.end(), ostream_iterator<int>(cout, "."), [](int x)
//	{
//		return (!(x % 2));
//	});
//	//copy(li.begin(), li.end(), ostream_iterator<int>(cout, "."));
//
//}