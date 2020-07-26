//#include<iostream>
//#include<map>
//#include<iterator>
//#include<vector>
//#include<numeric>
//#include<string>
//
//using namespace std;
//
////ostream &operator << (ostream &out,const pair<int, string> p)
////{
////	out << "key: " << p.first << " value:  " << p.second << endl;
////	return out;
////}
//
//ostream & operator<<(ostream& os, pair< int, string> const& v) {
//	 os << v.first << ":\t" << v.second<<endl;
//	 return os;
//}
//
//ostream& operator<<(ostream& os, pair< string, int> const& v) {
//	os << v.first << ":\t" << v.second << endl;
//	return os;
//}
//
//void main()
//{
//	//----initializtion list---
//	map<int, int> m1{ {1,2}, {2,10} };
//	for (pair<int, int> el:m1)
//	{
//		cout <<"key: "<< el.first << " value:  " << el.second << endl;
//	}
//	
//	map<int, string> m2{ { 15,"Ivanov" },{ 2,"Sidorov" } };	
//
//	////-----pair
//	pair<int, string> p1{ 33, "Pupkin" };
//	m2.emplace(p1);
//
//	////----pair 2
//	m2.insert(pair<int, string>{ 32, "Pupkin" });
//
//	////----pair 2
//	m2.insert(make_pair( 45, "Pupkin" ));
//	//m2.insert(35, "Pupkin"); - cant do this
//
//	for (auto el : m2)
//	{
//		cout << "key: " << el.first << " value:  " << el.second << endl;
//	}
//	cout << (*m2.begin()) << endl;
//
//	////---cant do this!!! copy doesnt work with map
//	////copy(m2.begin(), m2.end(), ostream_iterator<pair<int, string>>(cout, "*"));
//	////--https://codelessons.ru/cplusplus/funkciya-copy-v-c-legko-i-ponyatno.html
//
//	m2[101] = "Sidorov2";
//	m2[101] = "Sidorov3";
//	m2.at(33) = "AAAAAAA";
//	//cout<<m2.at(100); ///- exeption if no key
//	cout << m2[100];
//	for (auto el : m2)
//	{
//		cout << "key: " << el.first << " value:  " << el.second << endl;
//	}
//
//
//	map<string, int> m5{ {"Ivanov", 5000}, {"Petrov", 7000} };
//	m5["Sidorov"] = 6500;
//	m5["Pupkin"] = 11000;
//	m5["Ivanov"] = 12500;
//
//	for (auto el : m5)
//	{
//		cout << el;
//	}
//}