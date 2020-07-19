//#include<iostream>
//#include<vector>
//#include<ctime>
//#include<fstream>
//#include<algorithm>
//#include<iterator>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//	int z;
//public:
//	Point()
//	{
//		x = y = z = 0;
//	}
//	Point(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//		z = 0;
//	}
//	Point(int _x, int _y, int _z)
//	{
//		x = _x;
//		y = _y;
//		z = _z;
//	}
//	friend ostream & operator << (ostream &out, const Point &obj)
//	{
//		out << "Point:\n";
//		out << "X: " << obj.x << " Y: " << obj.y << " Z: " << obj.z << endl;
//		return out;
//	}
//};
//void Show(vector<int> v)
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//}
//void ShowIter(vector<int> v)
//{
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//void ShowIterReverse(vector<int> v)
//{
//	vector<int>::const_reverse_iterator it = v.rbegin();
//	while (it != v.rend())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//void ShowPointIter(vector<Point> v)
//{
//	vector<Point>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//void ShowVecVec(vector<vector<int>> v)
//{
//
//	vector<vector<int>>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		vector<int>::const_iterator It = (*it).begin();
//		while (It != (*it).end())
//		{
//			cout << *It << " ";
//			It++;
//		}
//		cout << endl;
//		it++;
//	}
//	cout << endl;
//}
//void WriteToFile(vector<int> v)
//{
//	ofstream out_file("vector.bin", ios::binary | ios::out);
//	out_file.write((const char*)&v.front(), v.size() * sizeof(int));
//
//
//}
//
//void WriteToFile1(vector<int> v)
//{
//	ofstream outF("vec.dat");
//	ostream_iterator<int> ositer(outF, " ");
//	copy(v.cbegin(), v.cend(), ositer);
//}
//void ReadFromFile()
//{
//	vector <int> to_save(100);
//	to_save.resize(100);
//	ifstream in_file("vector.bin", ios::binary);
//	in_file.read((char*)&to_save.front(), to_save.size() * sizeof(int));
//
//	ShowIter(to_save);
//}
//
//void ReadFromFile2()
//{
//	vector <int> v(100);
//	ifstream inFile("vec.dat");
//	istream_iterator<int> fileIt(inFile);
//	istream_iterator<int> endF;
//	copy(fileIt, endF, back_inserter(v));
//
//	ostream_iterator<int>ositer(cout, ",");
//
//	copy(v.begin(), v.end(), ositer);
//	cout << endl;
//}
//void WriteToFile3(vector<char> v)
//{
//	ofstream outF("vecStr.dat",ios::trunc);
//	ostream_iterator<char> ositer(outF, " ");
//	copy(v.cbegin(), v.cend(), ositer);
//}
//void ReadFromFile3()
//{
//	vector <char> v(10);
//	ifstream inFile("vecStr.dat");
//	istream_iterator<char> fileIt(inFile);
//	istream_iterator<char> endF;
//	copy(fileIt, endF, back_inserter(v));
//
//	ostream_iterator<char>ositer(cout, ", ");
//
//	copy(v.begin(), v.end(), ositer);
//	cout << endl;
//}
//void main()
//{
//	srand(time(0));
//	vector<int> a();
//	vector<int> b(10, 12);
//	vector<int> c(b.begin() + 2, b.end() - 1);
//	vector<int> d(c);
//	for (int i = 0; i < d.size(); i++)
//	{
//		d[i] = rand() % 100;
//	}
//	cout << "Size = " << d.size() << endl;
//	vector<int> e(d.rbegin(), d.rend());
//	cout << "Show:\n";
//	Show(d);
//	cout << "ShowIter:\n";
//	ShowIter(d);
//	cout << "ShowIterReverse:\n";
//	ShowIterReverse(d);
//	cout << "Show(e):\n";
//	Show(e);
//	e.push_back(100);
//	cout << "Show(e):\n";
//	Show(e);
//	Point p = Point();
//	vector<Point> vec(1, p);
//	Point p1(100, 200);
//	vec.push_back(p1);
//	Point p2(100, 200, 300);
//	vec.push_back(p2);
//	ShowPointIter(vec);
//	vec.emplace(vec.begin());
//	ShowPointIter(vec);
//	vec.emplace(vec.begin(), 111, 222);
//	ShowPointIter(vec);
//	vec.emplace(vec.begin() + 3, 111, 222, 333);
//	ShowPointIter(vec);
//	vec.insert(vec.begin() + 2, Point(1, 2, 3));
//	vec[0] = p1;
//	ShowPointIter(vec);
//	vector<vector<int>> vec1(10, vector<int>(10, 10));
//	ShowVecVec(vec1);
//	vector <int> to_save(100,3);
//	WriteToFile1(to_save);
//	ReadFromFile2();
//
//	vector <char> vecStr(10, 'k');
//	WriteToFile3(vecStr);
//	ReadFromFile3();
//
//	ostream_iterator<Point> it5(cout, " ");
//	copy(vec.begin(), vec.end(), it5);
//	system("pause");
//
//}
