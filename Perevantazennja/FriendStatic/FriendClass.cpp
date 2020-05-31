//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//class Teacher;
//
//class Student
//{
//private:
//	int mark;
//
//public:
//	Student()
//	{
//		mark = 0;
//	}
//	void ShowMark()
//	{
//		cout << mark << endl;
//	}
//
//	friend Teacher;
//};
//
//class Teacher
//{
//	int salary;
//public:
//	void SetMark(Student* s, int mark)
//	{
//		s->mark = mark;
//	}
//};
//
//
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	Student s1;
//	Student s2;
//	s1.ShowMark();
//
//	Teacher t;
//	t.SetMark(&s1, 12);
//	t.SetMark(&s2, 8);
//
//	s1.ShowMark();
//	s2.ShowMark();
//}