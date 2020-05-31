#include"Header.h"
#define CONSTR 1

#if (CONSTR==2)

void main()
{
	Person p[3]{ Person(22,"Olga"), Person(30, "Petro"), Person(3, "Sardelka") };
	for (int i = 0; i < 3; i++)
	{
		p[i].Show();
	}

	Person * p1 = new Person[3];// array
	delete []p1;
	Person * p2 = new Person(22, "Larisa");// single object
	delete p2;

	/*Person p;
	Person p1(22, "Mikola");
	char name[255];
	cin >> name;
	Person p2(30, name);*/

	/*Group g(3);
	g.ShowGroup();*/
	/*Group g;
	g.AddPerson(22, "Vasilij");
	g.AddPerson(25, "Semen");
	g.AddPerson(30, "Petro");

	g.ShowGroup();*/
	cout << "Main end!!!!!\n";
}


#endif //  CONSTR 2