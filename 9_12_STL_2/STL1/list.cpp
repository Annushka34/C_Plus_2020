#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>

#include<string>

using namespace std;

void main()
{
	list<int> l(5,2);
	list<string>lS{ "aa","bb" };
	//---can't do this
	//cout<<l[2];
	//l.at
	l.insert(l.begin(), 3);
	cout << l.size()<<endl;
	ostream_iterator<int> it(cout, " ");
	copy(l.begin(), l.end(), it);

	list<string>::iterator itS = lS.begin();
	while (itS != lS.end())
	{
		cout<<*itS << " ";
		itS++;
	}

	lS.push_back("vv");
	cout<<lS.size() << endl;
	cout<<lS.front();
	lS.pop_front();
	cout << lS.size() << endl;
	lS.emplace(lS.begin(), "fff");
	ostream_iterator<string> itS1(cout, " ");
	copy(lS.begin(), lS.end(), itS1);

	list<list<int>> two(2, list<int>{3,4,5});
	two.push_back(list<int>{8, 7, 16, 48});
	two.push_front(list<int> {5});

	list<list<int>>::iterator itS2 = two.begin();
	typedef list<list<int>>::iterator myIt;
	myIt itS5 = two.begin();
	cout << "\n---------------------arr two-------\n";
	for (; itS5!=two.end(); itS5++)
	{
		for (list<int>::iterator it0 = (*itS5).begin(); it0!= (*itS5).end(); it0++)
		{
			cout << *it0 << " ";
		}
		cout << endl;
	}

	cout << "\n---------------------arr two-------\n";

	while (itS2 != two.end())
	{
		list<int>::iterator itS22 = (*itS2).begin();
		while (itS22 != (*itS2).end())
		{
			cout << *itS22 << " "; itS22++;
		}
		cout << "\n ";
		itS2++;
	}

	for (auto el : two)
	{
		for (auto el1 : el)
		{
			cout << el1 << " ";
		}
		cout << endl;
	}
	list<int>l2;

	l2 = l;
	cout << "adress l2: ";
	cout << &l2<<endl;
	cout << "adress l: ";
	cout << &l<<endl;
	l2 = { 2,3,5,8,11,6 };
	for (auto el : l2)
	{
		cout << el << " ";
	}
	//l2.sort();
	//l2.insert(l2.begin(), 8);
	list<int>::iterator it5 = l2.begin();
	list<int>::iterator it6 = l2.begin();
	it6++;
	
	advance(it6, 2);
	auto it7 = next(it6, 2);
	//can't do this!!!
	//cout << *(it + 2);

	l2.erase(it5, it6);
	cout << endl;
	l2.insert(l2.begin(), 5,2);
	cout << "\n---------------------arr l2-------\n";
	for (auto el : l2)
	{
		cout << el << " ";
	}
	//---зсув масиву на 3 (it6 - begin)
	rotate(l2.begin(), it6, l2.end());
	cout << endl;
	cout << "\n--------------afte rotate-------arr l2-------\n";

	for (auto el : l2)
	{
		cout << el << " ";
	}
	system("pause");
}