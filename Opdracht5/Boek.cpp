#include <iostream>
#include <string>

using namespace std;

class Boek
{
	string name;

public:
	Boek(string n)
	{
		name = n;
	}

	Boek()
	{
		name = "";
	}

	string getName() { return name; }
};