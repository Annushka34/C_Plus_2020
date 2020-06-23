#pragma once
#include"Header.h"
#include"Unit.h"
#include"Employee.h"

class Departament: public Unit
{
	vector<Employee> employees;
public:
	void AddEmployee(Employee em)
	{
		employees.push_back(em);
	}
	void ShowEmployees()
	{
		for (auto em : employees)
		{
			em.ShowData();
		}
	}
	void GetPersonCount()
	{
		cout << "persons = " << employees.size() << endl;
	}
};
