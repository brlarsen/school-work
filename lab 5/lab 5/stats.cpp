#include <iostream>
#include <iomanip>
using namespace std;

void histogram(int scores[], int count);
double deviation(int scores[], int count);
double mean(int scores[], int count);

int main()
{

	int scores[100];
	int score;
	int count = 0;

	cout << "Enter a score (-1 to stop): ";

	cin >> score;
	while (score != -1)

	{
		scores[count++] = score;
		cout << "Enter a score (-1 to stop): ";
		cin >> score;
	}




	return 0;
}

void histogram(int scores[], int count)
{
	;


}

double deviation(int scores[], int count)
{
	;

	return 0;
}

double mean(int scores[], int count)
{
	double mean = 0;
	for (int index = 0; index < count; index++)
	{
		mean += scores[index];
	}

	return 0;
}