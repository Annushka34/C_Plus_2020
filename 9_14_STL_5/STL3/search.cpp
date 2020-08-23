#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<iterator>
#include<ctime>
#include<string>
#include<tuple>
using namespace std;
class Functor {
public:
	int _v;
	Functor(int v)
	{
		_v = v;
	}
	bool operator()(pair<int, int>p)
	{
		return p.second == _v;
	}
};
class My
{
public:
	string name;
	string suranme;
	template<typename T>
	My(initializer_list<T> li)
	{
		auto it = li.begin();
		name = *it; it++;
		suranme = *it;
	}
	void Show()
	{
		cout << name << " " << suranme << endl;
	}
};
void main()
{
	srand(time(0));

	My m1{ "vasja", "ivanov"};
	m1.Show();

	//-----------------------------
	vector<int> v{1,2,3, 4, 5, 6};
	map<int, int>m{ {1,2},{2,4},{3,10},{4,15} };
	/*for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 10);
	}
	for (int i = 0; i < 10; i++)
	{
		m.insert(pair<int, int>{i, rand() % 10});
	}*/
	for (auto el : v)
	{
		cout << el << " ";
	}
	cout << endl;
	for (auto el : m)
	{
		cout << el.second << " ";
	}
	cout << endl;

	//  знайти всі входження елементів мапа в вектор і вирізати іх з мапа
	/*map<int, int>::iterator it = m.begin();
	while (it != m.end())
	{
		auto itV = find(v.begin(), v.end(), (*it).second);
		if (itV != v.end())
		{
			map<int, int>::iterator itPrev = it;
			if (it != m.begin())
			{
				itPrev--;
				m.erase(it);
				it = itPrev;
			}
			else
			{
				m.erase(it);
				it = m.begin();
			}
		}
		else
			it++;
	}*/

	//  знайти всі входження елементів вектора в мап і вирізати іх з вектора
	auto itV = v.begin();
	while (itV != v.end())
	{
		auto itM = find_if(m.begin(), m.end(), Functor(*itV));
		if (itM != m.end())
		{
			auto itVPrev = itV-1;
			if (itV != v.begin())
			{
				//itVPrev--;
				v.erase(itV);
				itV = itVPrev;
			}
			else
			{
				v.erase(itV);
				itV = v.begin();
			}
		}
		else
			itV++;
	}

	for (auto el : v)
	{
		cout << el << " ";
	}
	cout << endl;

	for (auto el : m)
	{
		cout << el.second << " ";
	}
	cout << endl;
	cout << endl;

}