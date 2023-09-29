#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	char znak;
	int pocet = 0;

	cout << "Zadaj nejaky text: ";
	getline(cin, text);
	cout << "Zadaj nejaky znak: ";
	cin >> znak;

	if (text.length() % 2 == 0)
	{
		cout << "Zadany text je parny." << endl;
	}
	else
	{
		cout << "Tento text je neparny." << endl;
	}
	cout << "Text ma " << text.length() << " znakov." << endl;
	cout << endl << endl;
	for (int i = 0; i < text.length(); i++)
	{
		if (tolower(text[i]) == znak)
		{
			pocet++;
		}
	}
	if (pocet > 0)
	{
		cout << "Pocet - " << znak << " - v texte je: " << pocet << endl;
		pocet = 0;
	}
	cout << endl << endl;
	int prva = 0, posledna = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (tolower(text[i]) == znak)
		{
			posledna = i + 1;
		}
	}
	for (int i = text.length(); i >= 0; i--)
	{
		if (tolower(text[i]) == znak)
		{
			prva = i + 1;
		}
	}
	cout << "Prvy znak - " << znak << " - bol na " << prva << " mieste" << endl;
	cout << "Posledny znak - " << znak << " - bol na " << posledna << " mieste" << endl;
	cout << endl << endl;
	int podmienka = 0, n=text.length();
	for (int i = 0; i < n; i++)
	{
		if (text[i] != text[n - i-1])
		{
			podmienka = 1;
		}
	}
	if (podmienka == 0)
	{
		cout << "Zadany text je palindrom";
	}
	else
	{
		cout << "Zadany text nie je palindrom";
	}
}