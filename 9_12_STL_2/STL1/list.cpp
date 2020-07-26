#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>

#include<string>

using namespace std;

class MyClass
{
public:
	string name;
	int age;
	//int* arr;
	//ctor - tab tab -  конструктор 
	MyClass(string n, int a)
	{
		name = n;
		age = a;
	}
	void Show()
	{
		cout << name << age;
	}
};

ostream& operator << (ostream& out, MyClass& obj)
{
	out << obj.name << " - -" << obj.age << endl;
	return out;
}

void main()
{
	list<int> l(5,2);
	list<string>lS{ "aa","bb","aaaaa", "3", "tttt" };
	//---can't do this
	//cout<<l[2];
	//l.at

	/*l.insert(l.begin(), 3);
	cout << l.size()<<endl;*/

	/*ostream_iterator<int> it(cout, " ");
	copy(l.begin(), l.end(), it);*/
	list<string>::iterator itS = lS.begin();
	while (itS != lS.end())
	{
		cout << *itS << " ";
		itS++;
	}
	cout << "\nREVERSE ITERATOR: \n";
	list<string>::reverse_iterator itSR = lS.rbegin();
	while (itSR != lS.rend())
	{
		cout<<*itSR << " ";
		itSR++;
	}

	cout << endl;
	lS.push_back("vv");
	cout<<"SIZE= "<<lS.size() << endl;
	cout<<"front: "<<lS.front()<<endl;
	lS.pop_front();
	cout << "SIZE= " << lS.size() << endl;

	lS.emplace(lS.begin(), "fff");//cant insert in free positiion
	ostream_iterator<string> itS1(cout, " ");
	copy(lS.begin(), lS.end(), itS1);


	list<MyClass> listMyClasses{ MyClass("Olex", 20), MyClass("Irina", 22) };
	for (auto el: listMyClasses)
	{
		//el.Show();
		cout << el << endl;
	}
	list<MyClass>::iterator itM = listMyClasses.begin();
	while (itM != listMyClasses.end())
	{
		//(*itM).Show();
		cout << (*itM) << " ";
		itM++;
	}

	list<list<int>> two(2, list<int>{3,4,5});
	/*list<list<int>> two2
	{
		list<int>{1,7,8},
		list<int>{3,2,8,6,12}
	};*/
	two.push_back(list<int>{8, 7, 16, 48});
	two.push_front(list<int> {5});
	//5
	//3 4 5
	//3 4 5
	//8 7 16 48

	for (list<int> list : two)
	{
		for (int el: list)
		{
			cout << el << " ";
		}
		cout << endl;
	}

	list<list<int>>::iterator itS2 = two.begin();
	typedef list<list<int>>::iterator myIt;
	
	
	cout << "\n---------------------arr two-------\n";
	for (myIt itS5 = two.begin(); itS5!=two.end(); itS5++)
	{
		//two.push_back(list<int>{1, 2, 3, 45}); - неможна змніювати коллекцію коли вже визначено ітератор
		list<int> line = (*itS5);//  розіменований ітератор це і-й рядок
		line.push_front(1);
		list<int>::iterator itLine = line.begin();//   ітератор на початок лінії
		while(itLine != line.end())
		{
			cout << (*itLine) << " ";
			itLine++;
		}
		cout << endl;
	}

	//cout << "\n---------------------arr two-------\n";

	//while (itS2 != two.end())
	//{
	//	list<int>::iterator itS22 = (*itS2).begin();
	//	while (itS22 != (*itS2).end())
	//	{
	//		cout << *itS22 << " "; itS22++;
	//	}
	//	cout << "\n ";
	//	itS2++;
	//}

	MyClass m("aaa", 13);
	MyClass m2("222", 18);
	m = m2;//   operator =
	MyClass m3 = m;//   constructor copy
	MyClass* pm1 = new MyClass("fff", 15);
	MyClass* pm2 = pm1;//   only one object!!!!!

	list<int>l2;

	l2 = l;
	cout << "adress l2: ";
	cout << &l2<<endl;
	cout << "adress l: ";
	cout << &l<<endl;
	l2 = { 2,3,5,8,11,6 };
	//for (auto el : l2)
	//{
	//	cout << el << " ";
	//}
	l2.sort();//  own method	
	//sort(l2.begin(), l2.end());//  ALGORYPHM

	l2.insert(l2.begin(), 8);
	auto itL2 = l2.begin();
	itL2++;
	itL2++;
	list<int>::iterator it5 = l2.begin();
	list<int>::iterator it6 = l2.begin();
	it6++;
	//
	advance(it6, 3);
	auto it7 = next(it6, 2);
	////can't do this!!!
	////cout << *(it + 2);

	l2.erase(it5, it6);
	//cout << endl;
	l2.insert(l2.begin(), 2);
	l2.insert(l2.begin(), 77);
	cout << "\n---------------------arr l2-------\n";
	for (auto el : l2)
	{
		cout << el << " ";
	}

	cout << "it6=" << *it6 << endl;
	////---зсув масиву на 3 (it6 - begin)
	rotate(l2.begin(), it6, l2.end());
	cout << endl;
	cout << "\n--------------afte rotate-------arr l2-------\n";

	for (auto el : l2)
	{
		cout << el << " ";
	}
	system("pause");
}