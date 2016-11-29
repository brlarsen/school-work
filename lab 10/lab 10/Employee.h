#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include "Address.h"
#include "Date.h"
#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	Address* addr;
	Date d;


public:

	~Employee() { if (addr != NULL) delete addr; }
	Employee(string a_name, int a_year, int a_month, int a_day) : d(a_year, a_month, a_day), name(a_name), addr(NULL) {}
	
		
	virtual double calcPay() = 0;

	string getName()
	{
		return name;
	}
	
	void setAddress(string a_street, string a_city) 
	{
		if (addr != NULL)
			delete addr;
		addr = new Address(a_city, a_street);
	}

	virtual void display()
	{
		cout << name << " " << endl;
		addr->display();
		d.display();
	}
	
	friend ostream& operator << (ostream& out, Employee& me)
	{
		out << me.name;
		if (me.addr != NULL)
			out << " " << *me.addr;
		out << " " << me.d;
		return out;

	}
};



#endif