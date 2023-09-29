#include <iostream>
using namespace std;

int pocitaj(int a, char operacia, int b)
{
	if (operacia == '+')
	{
		return a + b;
	}
	else if (operacia == '-')
	{
		return a - b;
	}
	else if (operacia == '*')
	{
		return a * b;
	}
	else if (operacia == '/')
	{
		return a / b;
	}
}

int main()
{
	int cislo1, cislo2;
	char operacia;
	cout << "Zadaj 1. cislo: " << endl;
	cin >> cislo1;
	cout << "Zadaj operaciu (+,-,*,/): " << endl;
	cin >> operacia;
	cout << "Zadaj 2. cislo: " << endl;
	cin >> cislo2;
	cout << cislo1 << " " << operacia << " " << cislo2 << " = " << pocitaj(cislo1, operacia, cislo2);
}