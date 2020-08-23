//#include <iostream> 
//#include <vector> 
//using namespace std;
//
//class summator : private vector<int> 
//{
//public:
//	summator(const vector<int>& ini) 
//	{
//		for (auto x : ini) this->push_back(x);
//	}
//
//	summator(const initializer_list<int>& ini)
//	{
//		for (auto x : ini) this->push_back(x);
//	}
//
//	int operator()(bool even) 
//	{
//		int sum = 0;
//		auto i = begin();
//		if (even) i++;
//		while (i < end()) 
//		{
//			sum += *i++;
//			if (i == end()) 
//				break;
//			i++;
//		}
//
//		return sum;
//	}
//};
//
//class My 
//{
//public:
//	vector<int> v;
//	My(initializer_list<int>li)
//	{
//		v = li;
//	}
//	void Show()
//	{
//		for (auto i : v)
//		{
//			cout << i << " ";
//		}
//		cout <<"."<< endl;
//	}
//	bool operator()(bool e)
//	{
//		if (e)
//		{
//			for (auto i : v)
//			{
//				if (i % 2)
//					cout << i << " ";
//			}
//
//			return true;
//		}
//		else 
//		{
//			for (auto i : v)
//			{
//				if (!(i % 2))
//					cout << i << " ";
//			}
//
//			return false;
//		}
//	}
//};
//
//int main(void) {
//	setlocale(LC_ALL, "rus");
//
//	//summator sums(vector<int>({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }));
//	summator sums({ 1, 2, 3 });
//
//	cout << "сумма чётных = " << sums(true) << endl
//		<< "сумма нечётных = " << sums(false) << endl;
//
//	My v{ 2,5,7,10 };
//	v.Show();
//	v(false);
//}