#include <iostream>
using namespace std;

int main()
{
	const int suma = 10;
	int pole[suma];
	float priemer, sucet = 0;

	srand(time(0));
	//vypise 10 nahodnych cisiel od 10 po 30
	for (int i = 0; i < suma; i++)
	{
		pole[i] = rand() % 21 + 10;
		cout << i << ". prvok = " << pole[i] << endl;
	}
	//vypise priemer -||-
	for (int i = 0; i < suma; i++)
	{
		sucet = sucet + pole[i];
	}
	priemer = sucet / suma;
	cout << endl;
	cout << "Priemer tychto cisiel je: " << priemer << endl;
	//vypise parne cisla -||-
	cout << endl;
	for (int i = 0; i < suma; i++)
	{
		if (pole[i] % 2 == 0)
		{
			cout << i << ". prvok " << pole[i] << " je parny" << endl;
		}
	}
	cout << endl;
	//vypise neparne cisla -||-
	for (int i = 0; i < suma; i++)
	{
		if (pole[i] % 2 != 0)
		{
			cout << i << ". prvok " << pole[i] << " je neparny" << endl;
		}
	}
	cout << endl;
	//pocet parnych a neparnych cisiel
	int parne = 0;
	int neparne = 0;
	for (int i = 0; i < suma; i++) {
		if (pole[i] % 2 == 0) {
			parne++;
		}
		else {
			neparne++;
		}
	}
	cout << "Pocet parnych prvkov je: " << parne <<endl;
	cout << "Pocet neparnych prvkov je: " << neparne << endl;
}