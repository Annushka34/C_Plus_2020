//#include<iostream>
//#include<string>
//using namespace std;
//
//class User
//{
//private:
//	int age;
//protected:
//	string surname;
//public:
//	string name;
//	User()
//	{
//		//cout << "Create user\n";
//		age = 20;
//		name = "no name";
//		surname = "no surname";
//	}
//	User(int a, string n, string s)
//	{
//		age = a;
//		name = n;
//		surname = s;
//	}
//	void Show()
//	{
//		cout << name << " " << surname << "  " << age << endl;
//	}
//	~User()
//	{
//		//cout << "delete User\n";
//	}
//};
//
//class BankOperataions
//{
//public:
//	int bankAccount;
//	int money=1000;
//	BankOperataions()
//	{
//		//cout << "create BankOperataions\n";
//	}
//	BankOperataions(int m)
//	{
//		money = m;
//	}
//	void GetMoney(int sum)
//	{
//		cout << sum << " you got\n";
//		money -= sum;
//	}
//	~BankOperataions()
//	{
//		//cout << "delete BankOperataions\n";
//	}
//};
//
//class Employee : public User, public BankOperataions
//	//	class Employee : public User // inheritance
//{
//public:
//	Employee()
//	{
//		//cout << "Create employee\n";
//	}
//	int salary;
//	~Employee()
//	{
//		//cout << "delete Employee\n";
//	}
//};
//
//class Student : public User, public BankOperataions
//{
//public:
//	int scholarship;
//	Student()
//	{
//		//cout << "Create student\n";
//		scholarship = 0;
//	}
//	Student(int age, string name, string surname, int money) 
//		: User(age, name, surname), BankOperataions(money)
//	{
//		scholarship = 0;
//	}
//	
//	~Student()
//	{
//		//cout << "delete Student\n";
//	}
//};
//
//
//void main()
//{
//	//User u;
//	Student st(30,"Vasja", "Pupkin", 2000);
//	st.Show();
//	st.GetMoney(200);
//}