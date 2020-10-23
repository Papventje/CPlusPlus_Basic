#include <iostream>
#include <string>

using namespace std;

class MuntGeld
{
public:
	string name;
	int value;

	void setNameAndValue(string n, int v)
	{
		name = n;
		value = v;
	}

	void printValues()
	{
		cout << name << ", waarde: " << value << endl;
	}
};

class VijftigCentMunt : public MuntGeld
{
public:
	VijftigCentMunt()
	{
		name = "50 cent munt";
		value = 50;
	}
};

class EuroMunt : public MuntGeld
{
public:
	EuroMunt()
	{
		name = "euro munt";
		value = 100;
	}
};

class KoffieMuntje : public MuntGeld
{
public:
	KoffieMuntje()
	{
		name = "koffiemuntje";
		value = 0;
	}
};

