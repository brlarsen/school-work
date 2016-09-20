#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	cout << "Please enter P: ";
	double P;
	cin >> P;

	cout << "Please enter i: ";
	double i;
	cin >> i;

	cout << "Please enter g: ";
	double g;
	cin >> g;

	cout << "Please enter n: ";
	double n;
	cin >> n;

	double f = P * (1 - pow(1 + g, n) * pow(1 + i, n)) / (i - g);
	cout << f << endl;

	return 0;

}