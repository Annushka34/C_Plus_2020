//#include<iostream>
//#include<set>
//#include<iterator>
//#include<vector>
//#include<numeric>
//#include<string>
//
//using namespace std;
//
//struct Num
//{
//	int x;
//	int y;
//	string name;
//	Num(int x, int y, string name)
//	{
//		this->x = x;
//		this->y = y;
//		this->name = name;
//	}
//	bool operator < (const Num & obj) const
//	{
//		return (x < obj.x);
//	}
//	//bool operator < (const Num & obj) const
//	//{
//	//	return name < obj.name;
//	//}
//	friend ostream& operator << (ostream & out,const  Num & obj)
//	{
//		out << "name: "<< obj.name<< " x = " << obj.x << " y = " << obj.y << endl;
//		return out;
//	}
//};
//
//void main()
//{
//	set<int> s{ 5,2,3, 7, 11, 4,1 };
//	for (auto el: s)
//	{
//		cout << el << " ";
//	}
//	cout << endl;
//	cout<<"amount 2: "<<s.count(2);
//	cout << "amount 13: " << s.count(13)<<endl;
//	s.insert(2);
//	s.insert(18);
//	for (auto el : s)
//	{
//		cout << el << " ";
//	}
//	cout << endl;
//
//	set<int>::iterator find = s.find(22);
//	if(find!=s.end())
//	   cout << *find << endl;
//	else cout << "not found\n";
//
//	//---створюємо потоковий ітератор, 
//	//---говоримо з яким оператором він буде працювати і розділювач через який буде виводити
//	ostream_iterator<int> out(cout, "-");
//	set<int> s1{ 1,2,3 };	
//	//---копіюємо наш сет в консоль
//	//---copy - діапазон початокб кінець і куди копіюємо
//	//---виводимо в консоль за допомогою ітератора
//	copy(s.begin(), s.end(), out);
//	//---виводимо в консоль за допомогою ітератора
//	cout << endl;
//	cout << endl;
//
//	
//	set<Num> sNum;
//	Num n(5, 10, "point-1");
//	sNum.insert(n);
//	Num n1(15, 20, "point-12");
//	sNum.emplace(n1);
//	sNum.emplace(n1);//   унікальність перевіряється по адресам
//	sNum.emplace(Num(10, 22,"point-3"));
//	sNum.insert(Num(10, 22, "point-3"));
//	cout << endl;
//	copy(sNum.begin(), sNum.end(), ostream_iterator<Num>(cout, "-"));
//	cout << sNum.size() << endl;
//}