#include <iostream>
using namespace std;

int main()
{

	double i1;
	cout << "Please enter i1: ";
	cin >> i1;

	double n1;
	cout << "Please enter n1: ";
	cin >> n1;

	double n2;
	cout << "Please enter n2: ";
	cin >> n2;

	double i2 = (pow(1 + (i1 / n1), n1 / n2) - 1) * n2;
	cout << i2 << endl;

	return 0;

}
