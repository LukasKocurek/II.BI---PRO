#include <iostream>
using namespace std;

int main()
{
	int const k = 20;
	int pole[k];
	int cislo, sucet=0;

	srand(time(NULL));

	cout << "Nahodne vygenerovane cisla su: "<<endl;
	for (int i = 0; i < k; i++)
	{
		pole[i] = rand() % 91 + 5;
		cout <<i+1<<". "<<pole[i] << endl;
	}
	cout << endl << endl << endl;
	
	cout << "Zadaj nejake nahodne cislo <5-95>,vypise mensie cisla ako tvoje zadane : ";
	cin >> cislo;
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		if (pole[i] < cislo)
		{
			cout <<i+1<<". "<<pole[i] << endl;
			sucet = sucet + pole[i];
		}
		else
		{
			cout << "";
		}
	}
	cout << "Sucet mensich cisel ako tvoje je: " << sucet << endl;
	
	cout << endl << endl << endl;
	
	cout << "Parne indexy su: "<<endl;
	for (int i = 0; i < k; i++)
	{
		if (pole[i] % 2 == 0)
		{
			cout << i + 1 << ". " << pole[i] << endl;
		}
	}
	cout << endl << endl << endl;
	
	cout << "Cisla mensie ako 30 su: " << endl;
	for (int i = 0; i < k; i++)
	{
		if (pole[i] < 30)
		{
			cout << i + 1 << ". " << pole[i] << endl;
		}
	}
	cout << endl<<endl;
	
	cout << "Cisla mensie ako 30 a zvacsene o 100 su: "<<endl;
	int vypis;
	for (int i = 0; i < k; i++)
	{
		if (pole[i] < 30)
		{
			vypis = pole[i] + 100;
			cout << i + 1 << ". " << vypis << endl;
		}
	}
}