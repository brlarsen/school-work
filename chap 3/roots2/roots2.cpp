#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	cout << "Please enter a: ";		//prompt
	cin >> a;

	if (a == 0)
	{
		cout << "You may not enter '0'\n";
		exit(0);
	}

	double b;
	cout << "Please enter b: ";		//prompt
	cin >> b;

	double c;
	cout << "Please enter c: ";		//prompt
	cin >> c;

	//calculate discriminant
	double discriminant = b * b - 4 * a * c;
	// if discriminant is greater than or equal to 0
	// do what you have done.

	if (discriminant >= 0)
	{

		double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x1 = " << x1 << endl;

		double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x2 = " << x2 << endl;

	}
	//else
	else
	{

		// make a real variable and set equal to -b/2a
		double real = -b / (2 * a);
		// make a imag variable and set it equal to sqrt(-dis) /2a
		double imag = sqrt(-discriminant) / (2 * a);

		// display both outputs
		cout << "x1 = " << real << " + " << imag << "i" << endl;
		cout << "x2 = " << real << " - " << imag << "i" << endl;

	}
	return 0;
}