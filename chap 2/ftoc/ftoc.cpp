#include <iostream>
using namespace std;

int main()
{
	double f;
	cout << "Enter a temperature in Fahrenheit:  ";  //prompt
	cin >> f;

	//double c = 5 / 9 * (f - 32); // doesn't work
	//double c = 5.0 / 9.0 * (f - 32); // works
	double c = (f - 32) * 5 / 9;       // works

	cout << "The temperature in Celsius = " << c << endl;

	return 0;
}