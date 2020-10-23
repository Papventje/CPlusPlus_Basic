#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Object
{
	string naam;
	string kleur;

public:
	Object(string n, string k)
	{
		naam = n;
		kleur = k;
	}

	Object()
	{
		naam = "";
		kleur = "";
	}

	vector<Object*> obj;

	void AddObject(Object* object)
	{
		obj.push_back(object);
	}
	 
	void ListObjects()
	{
		if (!obj.empty())
		{
			cout << naam << " bevat: " << obj[0]->getName() << " met de kleur: " << obj[0]->getColor() << endl;
			obj[0]->ListObjects();
		}
	}

	string getName() { return naam; }
	string getColor() { return kleur; }
};