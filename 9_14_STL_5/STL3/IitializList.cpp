//#include <iostream> 
//#include <vector> 
//#include <string>
//#include<map>
//using namespace std;
//
//class Employee
//{
//public:
//	string name;
//	string surname;
//
//	vector<int> salaryPaid;
//
//	Employee(initializer_list<string> li)
//	{
//		auto it = li.begin();
//		surname = *it;
//		it++;
//		name = *it;
//	}
//
//	Employee(initializer_list<int> li)
//	{
//		salaryPaid = li;
//	}
//	void Show()
//	{
//		//cout <<"name:"<< name << " surname: " << surname  << endl;
//		for (auto it: salaryPaid)
//		{
//			cout << " " << it << endl;
//		}
//	}
//};
//
//
//void Foo(initializer_list<int> li)
//{
//	cout<<*(li.begin());
//}
//
//
//int main(void) {
//	setlocale(LC_ALL, "rus");
//
//	vector<int> v { 1,2,3 };
//	map<int, int> m{ {1,2},{2,10},{3,15} };
//
//	Employee em { "ivanov" ,  "vasja"};
//	Employee em{ 200,500,1230,4500,800 };
//	em.Show();
//
//	int x = 0;
//	int y { 0 };
//
//
//	Foo({ 5, 3, 15 });
//	Foo({ 20, 11 });
//}