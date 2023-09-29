#include <iostream>
using namespace std;

int faktorial(int fakt)
{
	int vysledok=1;
	for (int i = 1; i <= fakt; i++)
	{
		vysledok = vysledok * i;
	}
	return vysledok;
}

int main()
{
	int zaklad;
	cout << "Zadaj cislo, spravi sa z neho faktorial: ";
	cin >> zaklad;
	cout << "Faktorial cisla " << zaklad << " je: " << faktorial(zaklad);
}