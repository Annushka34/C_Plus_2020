//#include<iostream>
//#include<string>
//using namespace std;
//
//class User
//{
//private:
//	int age;
//	string name;
//protected:
//	string surname;
//
//public:
//	User()
//	{
//		age = 20;
//		name = "no name";
//		surname = "no surname";
//	}
//	
//	//---100 fields
//	void Show()
//	{
//		cout << name <<" "<< surname <<"  "<<age<< endl;
//	}
//	void SetAge(int a)
//	{
//		age = a;
//	}
//	void SetData(string name, string surname)
//	{
//		this->name = name;
//		this->surname = surname;
//	}
//};
//
//class Employee : public User 
////	class Employee : public User // inheritance
//{
//public:
//	int bankAccount;
//	void SetEmployeeData()
//	{
//		SetData("Employee", "Employee");	
//	}
//	void Show()
//	{
//		cout << "*\n";
//	}
//	// age//  cant access to private field
//};
//
//class Student : public User
//{
//public:
//	int scholarship;
//};
//
//
//void main()
//{
//	User u;
//	u.SetData("Ivan", "Ivanov");
//	u.Show();
//
//	Student vu;
//	vu.SetData("Olesko", "Vip Ivanov");
//	vu.SetAge(25);
//	vu.Show();
//	vu.scholarship = 1000;
//
//	Employee* vuPtr = new Employee();
//	vuPtr->SetEmployeeData();
//	vuPtr->bankAccount = 123456789321;
//	vuPtr->Show();
//}