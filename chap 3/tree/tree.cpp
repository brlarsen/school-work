#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	cout << "Enter the height of the tree: ";
	int t_height;
	cin >> t_height;

	if (t_height < 3 || t_height > 15)
	{
		cerr << "Height is out of bounds" << endl;
		exit(1);
	}

	for (int level = 0; level < t_height; level++)
	{
		for (int spaces = 0; spaces < t_height - level - 1; spaces++)
			cout << ' ';
		cout << "/";
		for (int spaces = 0; spaces < level * 2; spaces++)
			cout << ' ';
		cout << "\\" << endl;
	}

	for (int dashes = 0; dashes < t_height * 2; dashes++)
	{
		cout << "-";
	}
	cout << endl;
	
	
	for (int lines = 0; lines < t_height / 2; lines++)
	{
		for (int spaces = 0; spaces < t_height - 1; spaces++)
		cout << ' ';
		cout << "||" << endl;
	}


	return 0;
}