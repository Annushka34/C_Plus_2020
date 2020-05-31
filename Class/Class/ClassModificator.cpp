#include<iostream>
#define TASK 1
using namespace std;


#if (TASK == 2)

class Person
{
private://модифікатори доступу
	char _name[255] = {};
	char _group[255] = "PS-13";
	int _age;
	char _surname[255];
public:
	void ShowInfo()
	{
		cout << _name << " " << _surname << " " << _group << " " << _age << endl;
	}
	/*void SetName(const char * name)
	{
		strcpy_s(_name, name);
	}*/

	char * GetGroup()
	{
		return _group;
	}
};

void main()
{
	Person p;
	//p.SetName("Vasilij");
	cout << p.GetGroup() << endl;
	
}


#endif // DEBUG