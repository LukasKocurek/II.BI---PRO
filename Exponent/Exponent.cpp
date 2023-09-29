#include <iostream>
using namespace std;

int main()
{
	float zaklad, exponent, vysledok;
	cout << "Zadaj cislo: ";
	cin >> zaklad;
	cout << "Zadaj exponent: ";
	cin >> exponent;
	vysledok = zaklad;
	for (int i = 1; i < exponent; i++)
	{
		vysledok = vysledok*zaklad;
		cout << vysledok << endl;
	}
	cout << "Vysledok je: " << vysledok;
}