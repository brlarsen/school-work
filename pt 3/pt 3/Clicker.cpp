#include <iostream>
using namespace std;

class Clicker
{

	private:

		int		counter;

	public:

		
		Clicker(int c = 0) : counter(c) {}

		void click()
		{
			counter++;
		}

		void reset()
		{
			counter = 0;
		}

		void display()
		{
			cout << counter << endl;
		}


};





/*int main()

{

	Clicker		cl = Clicker();
	cl.display();
	cl.click();
	cl.display();
	cl.reset();
	cl.display();
	


	return 0;
}*/




