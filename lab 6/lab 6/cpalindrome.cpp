#include <iostream>
#include <string>
using namespace std;

string reverse(string s)
{
	string r;

	for (int i = 0; i < s.length(); i++)
		r += s[s.length() - 1 - i];

	return r;
}

int main(int argc , char* argv[])
{
	int count = 0;
	bool bIsPalindrome = false;
	char palindrome[1000] = "";

	for (int i = 1; i < argc; i++)
	{
		strcat_s(palindrome, 1000, argv[i]);
	}

	auto temp = strlen(palindrome);
	cout << temp << endl;
	//cout << " Enter Palindrome: ";
	//cout << input << endl;	// stops at space	
	//cin.getline(input, 100);		// discards \n
	//cout << input << endl;
	//for (int i = 0; i < strlen(input); i++)
		//while (input[i] == ' ')
			//input.erase(i, 1);
	


	if (bIsPalindrome)
	{
		cout << "This is a valid palindrome." << endl;
	}
	else
	{
		cout << "This is not a valid palindrome." << endl;
	}
	
	//cin.getline(input, 100);

		return 0;
}