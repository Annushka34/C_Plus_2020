//#include<iostream>
//#include<array>
//#include<ctime>
//using namespace std;
//
//
//void main()
//{
//	srand(time(0));
//	array<int, 3> myA;
//	array<string, 5> myS = { {"aa"} };
//	array<int, 3> myA2{ 1,1,1 };
//
//	myA = myA2;
//
//	for (auto el : myA)
//	{
//		cout << el << " ";
//	}
//	cout << endl;
//
//	array<int, 3>::iterator it = myA.begin();
//
//	while (it != myA.end())
//	{
//		*it = rand() % 20 + 1;
//		cout << *it << " ";
//		it++;
//	}
//	myA2[2] = 100;
//
//	//for (size_t i = 0; i < myA.size(); i++)
//	//{
//	//	myA[i] = rand() % 20;
//	//}
//
//	for (auto el : myA)
//	{
//		cout << el << " ";
//	}
//
//	//myA.assign(5);
//	cout << "\n----------------assign 5\n";
//	for (auto el : myA)
//	{
//		cout << el << " ";
//	}
//
//	myA.at(2) = 2;
//	cout << "\n----------------at 2=2\n";
//	for (auto el : myA)
//	{
//		cout << el << " ";
//	}
//
//	myA.swap(myA2);
//	cout << "\n----myA------------swap\n";
//	for (auto el : myA)
//	{
//		cout << el << " ";
//	}
//	cout << "\n----myA2------------swap\n";
//	for (auto el : myA2)
//	{
//		cout << el << " ";
//	}
//
//	cout << "\n----------------copy\n";
//	ostream_iterator<int> itS(cout, ", ");
//	copy(myA2.rbegin(), myA2.rend(), itS);
//
//	array<int, 3>::iterator it1 = myA2.begin();
//	copy(myA.begin(), myA.end(), it1);
//
//	cout << endl;
//	copy(myA2.rbegin(), myA2.rend(), itS);
//
//	cout << endl;
//	system("pause");
//}