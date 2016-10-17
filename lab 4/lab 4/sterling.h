#ifndef STERLING
#define STERLING

#pragma once
struct sterling
{
	int		pounds;
	int		shillings;
	int		pence;
};

sterling make_sterling(int p, int s, int pe);
sterling make_sterling(int pe);
sterling add(sterling st1, sterling st2);
void print(sterling& st);
void read(sterling* st);

#endif