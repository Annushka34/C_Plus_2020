//#include <string>
//#include <iterator>
//#include <iostream>
////#include <algorithm>
//#include <array>
//using namespace std;
//
//int main()
//{
//	////// конструктор использует агрегатный инициализатор
//	//array<int, 3> a1{ { 1,2,3 } };  // требуются двойные фигурные скобки,
//	//array<int, 3> a2 = { 1, 2, 3 }; // за исключением операций присваивания
//	//array<string, 2> a3 = { { "a", "b"} };
//	//int a{ 5 };
//	array<int,5> myArray1{ {2,4,5} };
//	array<int, 5> myArray2 = { 3, 18, 7, 9, 13 };
//	array<string, 13> myArrayStr = { "hello","bye" };
//	//sort(myArray1.begin(), myArray1.end());
//	cout<< myArray2.max_size()<<endl;
//	cout<< myArray2.size()<<endl;
//
//	//// поддерживается ranged for цикл
//	//for (auto& s : a3)
//	//	std::cout << s << ' ';
//
//	cout << "\n-------------my arr string-----------------------\n";
//	for (string el : myArrayStr)
//	{
//		cout << el << " ";
//	}
//	cout << "\n------my arr 1------------------------------\n";
//	//myArray1.fill(8);
//	for (auto el : myArray1)
//	{
//		cout << el << " ";
//	}
//	cout << "\n------------------------------------\n";
//	//  data  - get pointer (iterator) on first element - myArray1.data()
//	cout << *(myArray1.data()+1);//   value [1]
//	cout << *myArray1.data();//   value [0]
//	cout << *(myArray1.data()+2)<<endl;//   value [2]
//
//	auto iter = myArray1.data();
//	cout << typeid(iter).name() << endl;
//
//	cout<<myArray1.back();//--- get last element
//	//myArray1.fill(5);
//	myArray1.swap(myArray2);
//	cout << "\n---------------------------after swap----------------\n";
//	for (auto el : myArray1)
//	{
//		cout << el << " ";
//	}
//	cout << endl;
//
//	array<int, 5>::iterator itB = myArray1.begin();
//	cout << typeid(itB).name() << endl;
//	auto itE = myArray1.end();
//	//cout << myArray1[2];
//	//cout<< myArray1.at(2);
//
//	cout << "\n-------------ITERATOR------------------\n\n";
//	itB++;
//	cout << (*itB) << endl;
//	itB = myArray1.begin();
//
//	for (auto it = myArray1.begin(); it < myArray1.end(); it++)
//	{
//		cout << "el: " << (*it) << endl;
//	}
//	cout << "\n-------------REV ITERATOR------------------\n\n";
//	array<int, 5>::const_reverse_iterator itRB = myArray1.rbegin();
//	for (auto it = myArray1.rbegin(); it < myArray1.rend(); it++)
//	{
//		cout << "el: " << (*it) << endl;
//	}
//
//	
//	copy(myArray1.begin(), myArray1.end() - 2, myArray2.begin());
//	cout << "\n-------------COPY------------------\n\n";
//	/*for (auto it = myArray2.begin(); it < myArray2.end(); it++)
//	{
//		cout << "el: " << (*it) << endl;
//	}*/
//
//	auto osIt = ostream_iterator<int>(cout, ",    ");
//	//copy(myArray2.begin(), myArray2.end(), osIt);
//	reverse_copy(myArray2.begin(), myArray2.end(), osIt);
//
//	
//	array<string, 13>::iterator it1 = myArrayStr.begin();
//	cout << "3___________________________________\n";
//	for (it1; it1 < myArrayStr.cend(); it1++)
//	{
//		*it1 = 5;
//		cout << *it1<<" ";
//	}
//	cout << endl;
//	cout << "4___________________________________\n";
//	//   stream iterator make output in console
//	copy(myArrayStr.begin(), myArrayStr.end(), ostream_iterator<string>(cout, " : "));
//	
//	cout << endl;
//	//// поддерживаются обобщённые алгоритмы
//	sort(myArray1.begin(), myArray1.end());
//	reverse_copy(myArray1.begin(), myArray1.end(), ostream_iterator<int>(cout, " "));
//
//	
//	system("pause");
//}