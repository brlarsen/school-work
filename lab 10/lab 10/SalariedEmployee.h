#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_
#include "Employee.h"
#include <iostream>
using namespace std;

class SalariedEmployee : public Employee
{
private:
	double salary;

public:

	SalariedEmployee(string name, double a_salary, int a_year, int a_month, int a_day)
		:Employee(name, a_year, a_month, a_day), salary(a_salary) {}

	virtual double calcPay()
	{
		return salary / 24;
	}
		

	virtual void display()
	{
		Employee::display();
		cout << " " << salary << " " << calcPay() << endl;
	}

	friend ostream& operator << (ostream& out, SalariedEmployee& me)
	{
		out << (Employee&)me << " " << me.salary;
		return out;

	}
};



#endif
