#ifndef _SALES_EMPLOYEE_H_
#define _SALES_EMPLOYEE_H_
#include "SalariedEmployee.h"
#include <iostream>
using namespace std;

class SalesEmployee : public SalariedEmployee
{
	private:
		double commission;
		double sales;

	public:

		SalesEmployee(string name, double salary, double a_commission, double a_sales, int a_year, int a_month, int a_day)
			:SalariedEmployee(name, salary, a_year, a_month, a_day), commission(a_commission), sales(a_sales) {}

		virtual double calcPay()
		{
			return SalariedEmployee::calcPay() + commission * sales;
		}

		virtual void display()
		{
			SalariedEmployee::display();
			cout <<" " << commission << " " << sales << " " << calcPay() << endl;
		}

		friend ostream& operator << (ostream& out, SalesEmployee& me)
		{
			out << (SalariedEmployee&)me << " " << me.sales << " " << me.commission;
			return out;
		}


};



#endif