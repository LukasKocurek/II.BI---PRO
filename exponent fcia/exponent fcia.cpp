#include <iostream>
using namespace std;

int exponent(int zak, int exp)
{
	int vysledok = 1;
	for (int i = 0; i < exp; i++)
	{
		vysledok = vysledok * zak;
	}
	return vysledok;
}

int main()
{
	int zak, exp;
	cout << "Zadaj zaklad: ";
	cin >> zak;
	cout << "Zadaj exponent: ";
	cin >> exp;
	cout << "Zaklad " << zak << " umocneny na " << exp << " je: "<<exponent(zak, exp);
}