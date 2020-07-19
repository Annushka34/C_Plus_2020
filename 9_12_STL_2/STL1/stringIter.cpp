//#include<iostream>
//#include<Windows.h>
//#include<string>
//#include<iterator>
//#include<algorithm>
//using namespace std;
//
//void main()
//{
//	/*SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);*/
//
//	setlocale(LC_ALL, "Russian");
//	string str;
//	str = "No Fear Shakespeare puts Shakespeare's language side-by-side with a facing-page translation into modern English—the kind of English people actually speak today.";
//	cout << " length " << str.length() << endl;
//	cout << "str size:" << str.size() << endl;
//	cout << "str capacity:" << str.capacity() << endl;
//	string str1;
//	getline(cin, str1);
//
//	cout << str<<endl;
//	cout << str1 << endl;
//	cout << "str1---\n";
//	cout << " size " << str1.length() << endl;
//	cout << "str1 size:"<<str1.size() << endl;
//	cout << "str1 capacity:" << str1.capacity() << endl;
//
//	str1 += "text";
//	cout << "str1---after add text\n";
//	cout << " size " << str1.length() << endl;
//	cout << "str1 size:" << str1.size() << endl;
//	cout << "str1 capacity:" << str1.capacity() << endl;
//
//	str.append(str1);
//	cout << " size " << str.length() << endl;
//	cout << "str size:" << str.size() << endl;
//	cout << "str capacity:" << str.capacity() << endl;
//
//	//cout << str<<endl;
//
//	cout<<str.at(3)<<endl;
//
//	//str.erase();
//
//	cout<<" size "<<str.length()<<endl;
//	cout<<str.size()<<endl;
//	cout<<str.capacity()<<endl;
//	cout<<str[3]<<endl;
//
//	const char*strCH = str.c_str();
//
//	char*arr = "kdhfaakhf";
//	str = arr;
//	//str1 = str;
//
//	cout << "\n compare: " << str.compare(str1) << endl;
//	cout << "\n compare: " << (str1==str) << endl;
//
//	str.erase(1, 3);
//	cout << str << endl;
//	//str = "aa";
//	cout << "find " << str.find("aa")<<endl;
//	str.replace(str.find("aa"),2, "bb");
//	cout << str << endl;
//	cout<<"max size "<<str.max_size()<<endl;
//	cout<<"find "<<str.find_first_of('a') << endl;
//	cout << "find last " << str.find_last_of('a') << endl;
//	cout << "find last not" << str.find_first_not_of("adr") << endl;
//	cout << "insert" << str.insert(2,"00000")<<endl;
//	cout << str << endl;
//	cout << "" << str.replace(3, 1, "11")<<endl;
//	cout << str<<endl;	
//	str = "hello world";
//
//	//string::iterator itBegin;
//	//string::iterator itEnd;
//
//	//itBegin = str.begin();
//	//itEnd = str.end();
//
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << ' ';
//	//	itBegin++;
//	//}
//	//cout << endl;
//	//for (auto it = str.begin(); it < str.end(); it++)
//	//{
//	//	cout << *it << ' ';
//	//}
//
//	//string::reverse_iterator rit = str.rbegin();
//	//while (rit != str.rend())
//	//{
//	//	cout << *rit << ' ';
//	//	rit++;
//	//}
//	//cout << endl;
//	//for (auto it = str.rbegin(); it < str.rend(); it++)
//	//{
//	//	cout << *it << ' ';
//	//}
//	//cout << endl;
//	//cout << *(str.begin() + 3);
//
//
//	ostream_iterator<char> ostr(cout, ", ");
//
//	copy(str.begin(), str.end(), ostr);
//
//	//cout << str << endl;
//	system("pause");
//}