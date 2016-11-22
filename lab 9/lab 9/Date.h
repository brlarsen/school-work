#ifndef _DATE_H_
#define _DATE_H_
#include <iostream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date(int a_year, int a_month, int a_day)



	void display()
	{

	}

	friend ostream& operator << (ostream& out, Date& me)
	{


	}
};



#endif
