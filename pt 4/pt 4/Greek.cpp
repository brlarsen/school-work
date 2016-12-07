#include <iostream>
#include <string>
using namespace std;


class Gamma
{
private:
	int id;

public:
	Gamma(int a_id) : id(a_id) {}

	void display()
	{
		cout << id << endl;
	}

};



class Beta
{
private:

	double cost;

public:

	Beta(double a_cost) : cost(a_cost) {}

	void display()
	{
		cout << cost << endl;
	}
};


class Alpha
{
private:
	string name;
	char part;
	Gamma g;
	Beta* b;

public:

	Alpha(string a_name, char a_part, int a_id)
		: name(a_name), part(a_part), b(NULL), g(a_id) {}

	~Alpha()
	{
		if (b != NULL)
			delete b;
	}

	void setBeta(double a_cost)
	{
		if (b != NULL)
			delete b;
		b = new Beta(a_cost);
	}

	void display()
	{
		cout << name << endl;
		cout << part << endl;
		g.display();
		if (b != NULL)
			b->display();
	}
};

class Delta : public Alpha
{
private:
	string desc;

public:

	Delta(string a_name, char a_part, int a_id, string a_desc)
		:Alpha(a_name, a_part, a_id), desc(a_desc) {}

	void display()
	{
		Alpha::display();
		cout << desc << endl;
	}
};

int main()
{
	string nam = "delta";
	char cha = 'c';
	int in = 22;
	double doub = 22.22;
	Delta d(nam, cha, in, nam);
	d.setBeta(doub);
	d.display();

	return 0;
}

