#include <iostream>
#include <cstring>
using namespace std;

char* read()
{
	static char line[100];
	cin.getline(line, 100);
	return line;
}

int main()
{
	auto temp = read();
	
	temp = temp + 'abc';
	temp[2] = 'Q';
	return 0;
}
