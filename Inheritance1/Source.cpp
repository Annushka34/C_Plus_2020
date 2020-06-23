#include"Header.h"
#include"Employee.h"
#include"IdCard.h"
#include"Departament.h"




void main()
{
	IdCard* card = new IdCard();
	Employee employee;
	employee.name = "Vasilij";
	employee.SetCard(card);
	Room r(321);
	Room r1(452);
	employee.AddRoom(r);
	employee.AddRoom(r1);
	//employee.ShowData();

	IdCard* card1 = new IdCard();
	Employee employee1;
	employee1.name = "Ivan";
	employee1.SetCard(card);
	employee1.AddRoom(r);

	employee.AddPosition("accounter");
	employee.AddPosition("economist");
	employee.AddPosition("HR");

	Departament dep;
	dep.AddEmployee(employee);
	dep.AddEmployee(employee1);
	dep.ShowEmployees();

	dep.GetPersonCount();
	cout << Employee::counter << endl;

	delete card1;
	delete card;
}