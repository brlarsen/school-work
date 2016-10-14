#include <iostream>
#include "sterling.h"
using namespace std;

sterling make_sterling(int p, int s, int pe)
{
	sterling	temp;
	temp.pounds = p;
	temp.shillings = s;
	temp.pence = pe;

	return temp;
}

sterling	make_sterling(int pe)
{
	sterling	temp;

	temp.pounds = pe / 240;
	pe % 240;
	temp.shillings = pe / 12;
	temp.pence = pe % 12

		return temp;
}

sterling add(sterling st1, sterling st2)
{
	

}
