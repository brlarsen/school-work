#include <iostream>
#include <iomanip>
using namespace std;

void histogram(int *scores, int count, int(&histogram)[10]);
double deviation(int *scores, int count);
double mean(int *scores, int count);

int main()
{
	int scores[100];
	int score;
	int calculatedHistogram[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int count = 0;

	cout << "Enter a score (-1 to stop): ";

	cin >> score;
	while (score > -1)

	{
		scores[count++] = score;
		cout << "Enter a score (-1 to stop): ";
		cin >> score;
	}

	histogram(scores, count, calculatedHistogram);

	for (int index = 9; index >= 0; index--)
	{
		cout << index << "| ";


		for (int i = 0; i < calculatedHistogram[index]; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "SD: " << deviation(scores, count) << endl;
	int tempDev;
	cin >> tempDev;
	return 0;
}

void histogram(int *scores, int count, int (&histogram)[10])
{
	for (int i = 0; i < count; i++)
	{

		int temp = static_cast<int>(scores[i] / 10);
		if (temp >= 10)
			temp = 9;
		histogram[temp]++;
	}
	

	//return histogram;
}

double deviation(int *scores, int count)
{
	double calculatedMean = mean(scores, count);
	double deviation;
	double tempSum = 0;

	for (int index = 0; index < count; index++)
	{
		tempSum += (scores[index] - calculatedMean) * (scores[index] - calculatedMean); // mean = mean + scores[index];
	}
	
	deviation = sqrtf(tempSum / count);
	return deviation;
}

double mean(int *scores, int count)
{
	double mean = 0;
	for (int index = 0; index < count; index++)
	{
		mean += scores[index]; // mean = mean + scores[index];
	}
	
	return mean / count ;
}