//#include<iostream>
//#include<set>
//#include<iterator>
//#include<vector>
//#include<numeric>
//#include<string>
//
//using namespace std;
//
//void main()
//{
//	multiset<int> s{0,1, 5,2,8,2, 2 };
//	for (auto el: s)
//	{
//		cout << el << " ";
//	}
//	cout << endl;
//	cout<<"amount 2: "<<s.count(2);
//	cout << "amount 4: " << s.count(4)<<endl;
//	s.insert(2);
//	s.insert(2);
//	s.insert(4);
//	for (auto el : s)
//	{
//		cout << el << " ";
//	}
//	cout << endl;
//	auto find = s.find(2);
//	if(find!=s.end())
//	cout << *find << endl;
//	else cout << "not found\n";
//	//---��������� ��������� ��������, 
//	//---�������� � ���� ���������� �� ���� ��������� � ��������� ����� ���� ���� ��������
//	ostream_iterator<int> out(cout, "-");
//	//---������� ��� ��� � �������
//	copy(s.begin(), s.end(), out);
//	cout << endl;
//	cout << endl;
//	////--������� ���� ��������� �� ����� � �������� �� ������� ��������� ��������
//	auto findRange = s.equal_range(2);
//	
//	//   0 1 -2- 2 2 2 2 -4- 5 8
//	////cout <<"\n"<< typeid(findRange).name() << endl;
//	while (findRange.first != findRange.second)
//	{
//		cout << *(findRange.first) << " ";
//		findRange.first++;
//	}
//	cout << endl;
//	auto findFirst = s.lower_bound(2);//---������� ���������� ��� ���������� ������
//	auto findNext = s.upper_bound(2);//---���������� ������
//
//
//	if (findFirst != s.end() && findNext != s.end()) 
//	{
//		cout << *findFirst << endl;
//		cout << *findNext << endl;
//	}
//}