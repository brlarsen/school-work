/*#include <iostream>
#include <string>
using namespace std;

string reverse(string s)
{
	string r;

	for (int i = 0; i < s.length(); i++)
		r += s[s.length() - 1 - i];

	return r;
}

int main()
{
	string	input;

	cout << " Enter Palindrome: ";
	//cout << input << endl;	// stops at space	
	getline(cin, input);		// discards \n
	cout << input << endl;

	for (int i = 0; i < input.length(); i++)
		while (input[i] == ' ')
			input.erase(i, 1);
	
	if (input == reverse(input))
	{
		cout << "This is a valid palindrome." << endl;
	}
	else
	{
		cout << "This is not a valid palindrome." << endl;
	}
	cout << input << endl;
	getline(cin, input);

		return 0;
}

*/