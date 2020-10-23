#include <iostream>
#include <string>
#include <vector>
#include "Boek.cpp"

using namespace std;

class Bibliotheek
{
public:
	vector<Boek*> boeken;

	void AddBook(Boek* boek)
	{
		boeken.push_back(boek);
	}

	void ListBooks()
	{
		for (Boek* boekn : boeken)
		{
			if (boeken.empty())
			{
				cout << "Bibliotheek is leeg!" << endl;
				return;
			}
			else
			{
				cout << "Boek genaamd: " << boekn->getName() << endl;
			}
		}
	}
};