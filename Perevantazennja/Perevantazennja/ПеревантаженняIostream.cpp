//#include"Point.h"
//
//class Student
//{
//private:
//	char name[255];
//	int age;
//	int salary;
//public:
//	Student() {}
//	Student(const char * n, int a, int b) : age(a), salary(b)
//	{
//		strcpy_s(name, n);
//		//age = a;  salary = b;
//	}
//	void Show()
//	{
//		cout << name <<" "<< age<<" "<<salary << endl;
//	}
//
//	friend istream& operator >> (istream& in, Student& obj);
//	friend ostream& operator << (ostream& out, Student& obj);
//};
//
//
////istream& <<  ostream& >>
//istream& operator >> (istream& in, Student& obj)
//{
//	cout << "Enter name, age, salary: ";
//	in >> obj.name;
//	in >> obj.age;
//	in >> obj.salary;
//	return in;
//}
//
//ostream& operator << (ostream& out, Student& obj)
//{
//	out << obj.name << " " << obj.age << " " << obj.salary << endl;
//	return out;
//}
//
//void main()
//{
//	srand(time(0));
//	SetConsoleOutputCP(1251);
//	
//	//MyClass obj1(10);
//
//	Student s1[3];
//	for (size_t i = 0; i < 3; i++)
//	{
//		cin >> s1[i];
//	}
//	for (size_t i = 0; i < 3; i++)
//	{
//		cout<< s1[i];
//	}
//
//	//* / + - (*) () [] -> > < == <= >= ! != << >> new delete 
//}