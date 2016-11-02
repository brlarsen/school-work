#include <iostream>
#include <string>
using namespace std;

int main(int argc , char* argv[])
{
	int count = 0;
	bool bIsPalindrome = true;
	char palindrome[1000] = "";



	for (int i = 1; i < argc; i++)		//Removes the spaces
	{
		strcat_s(palindrome, 1000, argv[i]);
	}

	for (int i = 0; i < strlen(palindrome) / 2; i++)		//Checks through the palindrome
	{
		if (palindrome[i] != palindrome[strlen(palindrome) - 1 -i] && bIsPalindrome)
			bIsPalindrome = false;
	}


	if (bIsPalindrome)		//Outputs to the console
	{
		cout << "This is a valid palindrome." << endl;
	}
	else
	{
		cout << "This is not a valid palindrome." << endl;
	}
	

	return 0;
}