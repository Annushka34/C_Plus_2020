//#include <string>
//#include <iterator>
//#include <iostream>
//#include <algorithm>
//#include <array>
//using namespace std;
//
//int main()
//{
//	array<int,3> myArray1{ {2,4,5} };
//	array<int, 3> myArray2 = { 3,5,6 };
//	array<string, 13> myArrayStr = { "hello","bye" };
//	sort(myArray1.begin(), myArray1.end());
//	cout<<myArrayStr.max_size()<<endl;
//	cout<< myArrayStr.size()<<endl;
//	cout << "\n-------------my arr string-----------------------\n";
//	for (auto el : myArrayStr)
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
//
//	//myArray1.assign(1);
//	cout << *(myArray1.data()+1);
//		cout << *myArray1.data();
//	cout << *(myArray1.data()+2);
//
//	cout<<myArray1.back();
//	myArray1.fill(5);
//	myArray1.swap(myArray2);
//
//	reverse_copy(myArray2.begin(), myArray2.end(), ostream_iterator<int>(cout, " "));
//
//	ostream_iterator<string> it (cout, ",");
//	cout << endl;
//	copy(myArrayStr.begin(), myArrayStr.end()-2, it);
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
//	ostream_iterator<string> it2(cout, " : ");
//	copy(myArrayStr.begin(), myArrayStr.end(), it2);
//	//// конструктор использует агрегатный инициализатор
//	array<int, 3> a1{ { 1,2,3 } };  // требуются двойные фигурные скобки,
//	array<int, 3> a2 = { 1, 2, 3 }; // за исключением операций присваивания
//	array<string, 2> a3 = { { "a", "b"} };
//
//	// поддерживаются обобщённые алгоритмы
//	sort(a1.begin(), a1.end());
//	reverse_copy(a2.begin(), a2.end(), ostream_iterator<int>(cout, " "));
//
//	// поддерживается ranged for цикл
//	for (auto& s : a3)
//		std::cout << s << ' ';
//	system("pause");
//}