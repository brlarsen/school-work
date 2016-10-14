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