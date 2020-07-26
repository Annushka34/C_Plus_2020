//#include<iostream>
//#include<map>
//#include<iterator>
//#include<vector>
//#include<numeric>
//#include<string>
//
//using namespace std;
//
//ostream &operator << (ostream &out,const pair<string, string> p)
//{
//	out << "key: " << p.first << " value:  " << p.second << endl;
//	return out;
//}
//
//void main()
//{
//	
//	//----initializtion list---
//	multimap<string, string> m2{ { "accounter","Ivanov" },{ "manager","Sidorov" } };
//	for (auto el : m2)
//	{
//		cout << "key: " << el.first << " value:  " << el.second << endl;
//	}
//
//	//-----pair
//	pair<string, string> p1{ "accounter", "Pupkin" };
//	m2.emplace(p1);
//
//	//----pair 2
//	m2.insert(pair<string, string>{ "accounter", "Pupkin 2" });
//
//	//----pair 2
//	m2.insert(make_pair( "manager", "Pupkin" ));
//	//m2.insert(32, "Pupkin"); - cant do this
//	cout << (*m2.begin()) << endl;
//	//cout<<m2.at(100); - exeption if no key
//	
//	for (auto el : m2)
//	{
//		cout << "key: " << el.first << " value:  " << el.second << endl;
//	}
//	cout << "---All with key accounter----\n";
//	auto f = m2.equal_range("accounter");
//	while (f.first!= f.second)
//	{
//		auto el = f.first;
//		//cout << *(f.first);
//		cout << (*el).first << " " << (*el).second << endl;
//		f.first++;
//	}
//}