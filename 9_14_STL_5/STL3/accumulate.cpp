////https://ci-plus-plus-snachala.ru/?p=1535
//
//#include <iostream> 
//#include <vector> 
//#include<list>
//#include<numeric>
//
//using namespace std;
//template <typename T>
//class Mult
//{
//public:
//	T operator()(const T &t1, const T &t2) const
//	{
//		return t1 * t2;
//	}
//};
//
///// <summary>
/////	суммує елементи (по замовчанню) або робить іншу дію описану функтором
///// </summary>
//void main()
//{
//	list<int> li{ 2,5,1,10 };
//	cout << accumulate(li.begin(), li.end(),0);
//	cout << endl;
//	cout << accumulate(li.begin(), li.end(), 1, Mult<int>()) << endl;
//	int z = 5;
//	cout << accumulate(li.begin(), li.end(), 1, [z](int x, int y) {return x * y * z; });
//}