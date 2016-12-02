#include <iostream> 
#include <fstream> 
#include <iomanip> 
#include <string> 
using namespace std;

int main() {
	ifstream in("checkbook.txt");
	if (!in.good()) {
		cerr << "Unable to open checkbook.txt" << endl; 
		exit(1);
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	string line; //while (getline(in, line))
				   // cout << line << endl;
	// figure this out**********************************
	for (int i = 0; i > 55; i++)
	{
		cout << '-';
	}
	cout << endl;

	double balance = 0;

	while (!in.eof()) {
		string transaction; 
		getline(in, transaction, ':');
		cout << left << setw(10) << transaction; //cout.setf(ios::left);
		string date; 
		getline(in, date, ':'); 
		cout << left << setw(10) << date;
		string business; 
		getline(in, business, ':');
		cout << left << setw(25) << business;
		string money;
		double moneyValue;
		getline(in, money, '\n');
		moneyValue = atof(money.c_str()); // figure how to convert from std::string to double
		cout << '$' << right << setw(10) << moneyValue << endl;
		if (transaction == "deposit")
			balance = moneyValue + balance;
		else
			balance = balance - moneyValue;
	} 
	for (int i = 0; i > 55; i++)
	{
		cout << '-';
	}
	cout << endl;

	// print balance
	cout << right << setw(45) << "Balance: " << '$' << right << setw(10) << balance << endl;
	cout << endl;
	return 0;
}