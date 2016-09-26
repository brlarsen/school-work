#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()

{

	srand((unsigned)time(NULL));	//seed the generator
	int		target = rand() % 100;	//numbers [0..99]
	int number;

	do{
			
		cout << "Please, enter a number between 0 and 99: " << endl;
		cin >> number;
			
		if (number <= 0)
		{
			cout << "Game over!" << endl;
			exit(2);
		}
		else if (number < target)
			cout << "Your guess is too low, please try again" << endl;
		else if (number > target)
			cout << "Your guess is too high, please try again"  << endl;
		else
			cout << "You guessed correctly!" << endl;

	} while (number != target);
	return 0;
	


}