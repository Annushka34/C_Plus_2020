//#include<iostream>
//#include<string>
//using namespace std;
//
//class User
//{
//private:
//	int age;
//public:
//	string name;
//};
//
//class BankOperataions
//{
//public:
//	int bankAccount;
//	int money = 1000;
//	string name;
//};
//
//class Employee : public User, public BankOperataions
//	//	class Employee : public User // inheritance
//{
//public:
//	int salary;
//};
//
//class Student : public User, public BankOperataions
//{
//public:
//	int scholarship;
//	void ShowData()
//	{
//		cout << User::name << endl;// becouse name is ambigious
//		//name present in User and in BankOperations
//	}
//};
//
//class WorkedStudent : public Student, public Employee
//{
//public:
//	int profit;
//};
//
//
//void main()
//{
//	//User u;
//	Student st;
//	st.User::name = "Ivanov";
//	st.BankOperataions::name = "Currency account";
//
//	WorkedStudent ws;
//	ws.Student::bankAccount = 31656446;
//	ws.Student::User::name = "Pupkin";
//	ws.Employee::User::name = "Semechkin";
//	ws.Employee::BankOperataions::name = "Currency account";
//}