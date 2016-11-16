#pragma once


#ifndef FRACTION_H
#define FRACTION_H


class fraction
{
private:
	int		numerator;
	int		denominator;

public:
	fraction();
	fraction(int n, int d);
	int gcd(int num, int den);

	//add these functions
	//add, sub, mult, div

	fraction add(fraction);
	fraction sub(fraction);
	fraction mult(fraction);
	fraction div(fraction);

	void read();
	void print();
};

#endif
