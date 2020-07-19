//#include<iostream>
//#include<vector>
//#include<iterator>
//#include<ctime>
//#include<string>
//#include<fstream>
//using namespace std;
//
//	void WriteToFile(vector<int> v)
//	{
//		ofstream out_file("vector.bin", ios::binary | ios::out);
//		out_file.write((const char*)&v.front(), v.size() * sizeof(int));
//	}
//
//	void ReadFromFile()
//	{
//		vector <int> v(100);
//		//to_save.resize(100);
//		ifstream in_file("vector.bin", ios::binary);
//		in_file.read((char*)&v.front(), v.size() * sizeof(int));
//
//		ostream_iterator<int>ositer(cout, ",");
//		copy(v.begin(), v.end(), ositer);
//		cout << endl;
//	}
//	void WriteToFile1(vector<int> v)
//	{
//		ofstream outF("vec.dat");
//		ostream_iterator<int> ositer(outF, " ");
//		copy(v.cbegin(), v.cend(), ositer);
//	}
//	void ReadFromFile1()
//	{	
//		vector <int> v(100);
//		ifstream inFile("vec.dat");
//		istream_iterator<int> fileIt(inFile);
//		istream_iterator<int> endF;
//		copy(fileIt, endF, back_inserter(v));
//
//
//		ostream_iterator<int>ositer(cout, ",");
//		copy(v.begin(), v.end(), ositer);
//		cout << endl;
//	}
//	void WriteToFile2(vector<char> v)
//	{
//		ofstream outF("vecStr.dat", ios::trunc);
//		ostream_iterator<char> ositer(outF, " ");
//		copy(v.cbegin(), v.cend(), ositer);
//	}
//	void ReadFromFile2()
//	{
//		vector <char> v(10);
//		ifstream inFile("vecStr.dat");
//		istream_iterator<char> fileIt(inFile);
//		istream_iterator<char> endF;
//		copy(fileIt, endF, back_inserter(v));
//
//		ostream_iterator<char>ositer(cout, ", ");
//		copy(v.begin(), v.end(), ositer);
//		cout << endl;
//	}
//
//
//void main()
//{
//	vector<int> v(5, 2);
//	vector<int> v1{ 2,3,5,7,8 };
//	vector<int> v2(v1);
//	vector<int> v3 = v2;
//	//---size= 10 elements 0
//	vector<int> test(10);
//	cout << test.size();
//	cout << "\n" << test[2] << endl<<"----------------------------\n";
//
//	for (int el : v1)
//	{
//		cout << el << " ";
//	}
//
//	cout <<"size "<< v1.size() << endl;
//	cout << "capacity " << v1.capacity() << endl;
//	v1.clear();
//	cout << "size " << v1.size() << endl;
//	cout << "capacity " << v1.capacity() << endl;
//	v1.reserve(100);
//	cout << "size " << v1.size() << endl;
//	cout << "capacity " << v1.capacity() << endl;
//	v1.push_back(7);
//	v1.shrink_to_fit();
//	cout << "size " << v1.size() << endl;
//	cout << "capacity " << v1.capacity() << endl;
//
//	v1 = { 2,3,4,5,6,7 };
//	v1[3] = 5;
//	v1.at(2) = 0;
//	for (int el : v1)
//	{
//		cout << el << " ";
//	}
//
//	typedef vector<int>::reverse_iterator myIter;
//	myIter it = v1.rbegin();
//	auto it1 = v1.rend();
//
//	while (it!=it1)
//	{
//		cout << *it;
//		it++;
//	}
//
//	v1.emplace(v1.begin()+2, 200);
//	cout << endl;
//	cout << "-------------------------------\n";
//	ostream_iterator<int> itStream(cout, " : ");
//	copy(v1.begin(), v1.end(), itStream);
//
//	cout << endl;
//	cout << "-------------------------------\n";
//	v1.erase(v1.begin() + 3, v1.end() - 2);
//	copy(v1.begin(), v1.end(), itStream);
//	cout << "-------------------------------\n";
//	cout << "-------------------------------\n";
//
//	cout << "insert 200 at 3 pos\n";
//	v1.insert(v1.begin()+3, 200);
//	cout << "size:" << v1.size() << " capacity:" << v1.capacity() << endl;
//	cout << "insert 200 at 3 pos 5\n";
//	v1.insert(v1.begin() + 3, 5,200);
//	cout << "size:" << v1.size() << " capacity:" << v1.capacity() << endl;
//	cout << endl;
//	cout << "-------------------------------\n";
//	copy(v1.begin(), v1.end(), itStream);
//
//	cout << endl;
//
//	vector<vector<int>> v4{ vector<int>(2, 3), vector<int>(3,6) };
//	vector <vector<string>> v5(4, vector<string>{"hello", "bye"});
//
//	//auto it = v4.begin();
//	vector<vector<int>>::iterator it4 = v4.begin();
//	cout << "vector<vector>\n";
//	for (; it4<v4.end(); it4++)
//	{
//		for (auto itJ=(*it4).begin();itJ<(*it4).end();itJ++)
//		{
//			cout << (*itJ) << " ";
//		}
//		cout << endl;
//	}
//	cout << "vector<vector> string \n";
//	for (auto el : v5)
//	{
//		for (auto inEl : el)
//		{
//			cout <<inEl << " . ";
//		}
//		cout << endl;
//	}
//
//	vector<string> v6{ "hi","go" };
//	v6.push_back("star");
//
//	v5.push_back(v6);
//
//	cout << "vector<vector> string \n";
//	for (auto el : v5)
//	{
//		for (auto inEl : el)
//		{
//			cout << inEl << " . ";
//		}
//		cout << endl;
//	}
//
//
//	vector<int> v7(100, 3);
//	cout << "----------file with cast---------\n";
//	WriteToFile1(v7);
//	ReadFromFile1();
//
//	vector<char> v8(100, 'a');
//	cout << "----------file with cast---------\n";
//	WriteToFile2(v8);
//	ReadFromFile2();
//
//	system("pause");
//}