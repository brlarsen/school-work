#pragma once



class fraction
{
	private:
		int		numerator;
		int		denominator;

	public:
				fraction(int n = 0, int d = 1) : numerator(n), denominator(d) {}
		int		common = gcd(numerator, denominator);
		numerator /= common;
		denominator /= common;
		
};