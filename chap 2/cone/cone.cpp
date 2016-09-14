#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double r;
	cout << "Please enter radius: ";		//prompt
	cin >> r;

	double h;
	cout << "Please enter height: ";		//prompt
	cin >> h;

	double V = (1.0 / 3.0) * M_PI * (r * r) * h;
	cout << "Volume = " << V << endl;

	double S = M_PI * (r * r) + M_PI * r * sqrt (r * r + h * h);
	cout << "Surface Area = " << S << endl;

	return 0;
}