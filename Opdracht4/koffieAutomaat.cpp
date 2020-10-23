#include <iostream>
#include <string>
#include "muntGeld.cpp"

using namespace std;

// Type Koffies: Koffie zwart, Cappuccino, Latte Macchiato

class Coffee
{
public:
	string name;
	int price;

	void setNameAndPrice(string n, int p)
	{
		name = n;
		price = p;
	}
};

class KoffieAutomaat
{
public:

	Coffee c[3];

	VijftigCentMunt vijftig_cent;
	EuroMunt euro;
	KoffieMuntje koffieMuntje;

	int balance = 0;
	bool gratisKoffie = false;

	void ShowCoffee()
	{
		c[0].setNameAndPrice("Koffie Zwart", 50);
		c[1].setNameAndPrice("Cappuccino", 100);
		c[2].setNameAndPrice("Latte Macchiato", 200);

		for (int i = 0; i < 3; i++)
		{
			cout << i+1 << ":" << c[i].name << ", " << c[i].price << " cent" << endl;
		}

		cout << endl; // witregel
	}

	void UseMachine()
	{
		cout << "Welkom bij de koffie machine!" << endl;
		cout << "De volgende producten zijn beschikbaar: " << endl;
		cout << endl; // witregel
		
		ShowCoffee();
	}

	void UseCoin()
	{
		cout << "Je oneindige portemonnee bezit over de volgende munten:" << endl;
		cout << endl; // witregel

		cout << "1: " << vijftig_cent.name << ", waarde: " << vijftig_cent.value << endl;
		cout << "2: " << euro.name << ", waarde: " << euro.value << endl;
		cout << "3: " << koffieMuntje.name << ", waarde: " << koffieMuntje.value << ", gratis koffie!" << endl;

		cout << endl; // witregel

		bool a = true;

		while (a == true)
		{
			cout << "Druk op 1, 2 of 3 om je saldo aan te vullen" << endl;
			cout << "Saldo: " << balance << endl;

			string s;
			cin >> s;
			if (s == "1")
			{
				cout << "Saldo + 50" << endl;
				balance += vijftig_cent.value;
			}
			if (s == "2")
			{
				cout << "Saldo + 100" << endl;
				balance += euro.value;
			}
			if (s == "3")
			{
				cout << "Volgende koffie is gratis!" << endl;
				gratisKoffie = true;
			}

			cout << "Wil je nog meer toevoegen? (Y/N)" << endl;
			cin >> s;
			if (s == "Y" || s == "y")
			{
				//Do nothing
				cout << "OK";
			}
			else if (s == "N" || s == "n")
			{
				a = false;
				GiveCoffee(balance, gratisKoffie);
			}

			cout << endl; // witregel

		}
	}

	void GiveCoffee(int currentBalance, bool gratisKoffie)
	{
		system("cls");
		cout << "Je saldo is: " << currentBalance << endl;
		if (gratisKoffie)
			cout << "Je hebt een koffiemuntje ingeworpen, je keuze is gratis!" << endl;
		cout << "Wat wordt je keuze?" << endl;
		cout << endl; // witregel

		ShowCoffee();

		string s;
		cin >> s;
		for (int i = 0; i < 3; i++)
		{
			string x = to_string(i + 1);
			if (s == x)
			{
				if (currentBalance >= c[i].price || gratisKoffie)
				{
					cout << "Geniet van uw " << c[i].name << "!" << endl;
				}
				else
				{
					cout << "U heeft niet genoeg voor " << c[i].name << "!" << endl;
				}
			}
		}
	}
};



int main()
{
	KoffieAutomaat a;
	a.UseMachine();
	a.UseCoin();
}