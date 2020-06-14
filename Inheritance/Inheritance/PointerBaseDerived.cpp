#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class User
{
protected:
	int age;
	string name;
public:
	void SetData(int a, string name)
	{
		age = a;
		this->name = name;
	}
	
	void ShowData()
	{
		cout << name<<" "<<age << endl;// becouse name is ambigious
		//name present in User and in BankOperations
	}
};


class Employee : public User
	//	class Employee : public User // inheritance
{
public:
	Employee()
	{
		name = "Employee";
		age = 30;

	}
	int salary;
	void ShowSalary()
	{
		cout << salary;
	}
};

class Student : public User
{
public:
	Student()
	{
		name = "Student";
		age = 20;

	}
	int scholarship;
	void ShowScholarship()
	{
		cout << scholarship << endl;// becouse name is ambigious
		//name present in User and in BankOperations
	}
};
enum class Types { Student, Employee };


void main()
{
	srand(time(0));
	User* user = new User();
	user->SetData(20, "Ivanov");
	user->ShowData();
	cout << "----------------------------\n";
	Student* st = new Student();
	st->scholarship = 1000;
	st->SetData(22, "Petrov");
	st->ShowData();
	st->ShowScholarship();
	cout << "----------------------------\n";

	//---set base pointer on derived object
	User* userBase = new Student();
	userBase->ShowData();
	((Student*)userBase)->scholarship = 1000;

	User** users = new User*[4];
	for (int i = 0; i < 4; i++)
	{
		int a;// = rand() % 2;
		cout << "0 - Student, 1 - Employee";
		cin >> a;
		if (a == (int)Types::Student)
		{
			users[i] = new Student();
		}
		if (a == (int)Types::Employee)
		{
			users[i] = new Employee();
		}
	}

	for (int i = 0; i < 4; i++)
	{
		users[i]->ShowData();
	}
	
	delete user;
}