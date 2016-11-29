#ifndef _WAGED_EMPLOYEE_H_
#define _WAGED_EMPLOYEE_H_
#include <iostream>
#include "Employee.h"
using namespace std;

class WagedEmployee : public Employee
{
private:
	double wage;
	double hours;

public:

	WagedEmployee(string name, double a_wage, double a_hours, int a_year, int a_month, int a_day)
	: Employee(name, a_year, a_month, a_day), wage(a_wage), hours(a_hours) {}

	virtual double calcPay()
	{
		return wage * hours;

	}

	virtual void display()
	{
		Employee::display();
		cout << " " << wage << " " << hours << " " << calcPay() << endl;
	}

	friend ostream& operator << (ostream& out, WagedEmployee& me)
	{
		out << (Employee&)me << " " << me.wage << " " << me.hours << endl;
		return out;

	}




};



#endif