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

	~Employee() {}
	Employee(string a_name, int a_year, int a_month, int a_day) : Date(a_year, a_month, a_day), name(a_name) {}
	
		
		
	void setAddress(string a_street, string a_city) 
	{
		if (addr != NULL)
			delete addr;
		addr = new Address(a_city, a_street);
	}

	void display()
	{
		cout << name << " " << addr->display() << " " << d.display() << endl;
	}
	
	friend ostream& operator << (ostream& out, Employee& me)
	{


	}
};



#endif