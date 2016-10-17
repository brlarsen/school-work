#include <iostream>
#include "sterling.h"

using namespace std;

int main()
{
	sterling st;
	read(&st);

	sterling pe;
	read(&pe);
	print(pe);

	sterling u = add(st, pe);
	print(u);

	print(add(st, pe));

	return 0;


}