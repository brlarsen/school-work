#include <iostream>
#include "fraction.h"
using namespace std;

fraction::fraction()
{

}

fraction::fraction(int n = 0, int d = 1) : numerator(n), denominator(d)
{
	int		common = fraction::gcd(numerator, denominator);
	numerator /= common;
	denominator /= common;
}



int fraction::gcd(int v, int u)
	{
		u = (u < 0) ? -u : u;			// make u non-negative
		v = (v < 0) ? -v : v;			// make v non-negative

		while (u > 0)
		{
			if (u < v)
			{
				int t = u;	// swap u and v
				u = v;
				v = t;
			}

			u -= v;
		}

		return v;				// the GCD of u and v
	}
	

fraction fraction::add(fraction f)
{
	return fraction(numerator * f.denominator + f.numerator * denominator, denominator * f.denominator);
}

fraction fraction::sub(fraction f)
{
	return fraction(numerator * f.denominator - f.numerator * denominator, denominator * f.denominator);
}

fraction fraction::mult(fraction f)
{
	return fraction(numerator * f.numerator, denominator * f.denominator);
}

fraction fraction::div(fraction f)
{
	return fraction(numerator * f.denominator, denominator * f.numerator);
}

void fraction::read()
{
	cout << "Please enter in the numerator: ";
	cin >> numerator;

	cout << "Please enter in the denominator: ";
	cin >> denominator;
}

void fraction::print()
{
	cout << numerator << " / " << denominator << endl;

}