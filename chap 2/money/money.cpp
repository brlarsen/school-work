#include <iostream>
using namespace std;

int main()
{
	int pennies;

	cout << "Enter the number of pennies: ";
	cin >> pennies;

	cout << pennies << " pennies = " << endl;

	int dollars = pennies / 100;
	pennies = pennies % 100;

	int quarters = pennies / 25;
	pennies = pennies % 25;

	int dimes = pennies / 10;
	pennies = pennies % 10;

	int nickels = pennies / 5;
	pennies = pennies % 5;

	cout << dollars << " dollars" << endl;
	cout << quarters << " quarters" << endl;
	cout << dimes << " dimes" << endl;
	cout << nickels << " nickels" << endl;
	cout << pennies << " pennies" << endl;

	return 0;
}