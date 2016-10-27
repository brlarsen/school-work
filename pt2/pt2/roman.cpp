#include <iostream>
using namespace std;

struct roman
{
	int		cubits;
	int		palms;
	int		digits;

};

roman make_roman(int c, int p, int d)
{
	roman temp;

	temp.cubits = c;
	temp.palms = p;
	temp.digits = d;

	return temp;
}

roman make_roman(int d)
{
	roman temp;

	temp.cubits = d / 24;
	d %= 24;
	temp.palms = d / 4;
	temp.digits = d % 4;

	return temp;
}


roman add(roman r1, roman r2)
{
	int		i1 = r1.cubits * 24 + r1.palms * 4 + r1.digits;
	int		i2 = r2.cubits * 24 + r2.palms * 4 + r2.digits;

	return make_roman(i1 + i2);
}

void print(roman& d)
{
	cout << d.cubits << " Cubits, " << d.palms << " Palms, " << d.digits << " Digits" << endl;
}

void read(roman* d)
{
	cout << "Cubits:  ";
	cin >> d->cubits;
	cout << "Palms:  ";
	cin >> d->palms;
	cout << "Digits:  ";
	cin >> d->digits;
}
/*int main()
{
	roman roman1;
	roman roman2;
	read(&roman1);
	read(&roman2);
	roman romanTotal = add(roman1, roman2);

	print(romanTotal);

	return 0;
}*/