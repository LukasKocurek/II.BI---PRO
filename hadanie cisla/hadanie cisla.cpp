#include <iostream>
using namespace std;

int main()
{
	int n, o, t = 1;
	srand(time(0));
	n = rand() % 21;
	o = 1;
	while (o != n)
	{
		cout << "Zadaj tvoj odhad, o ktore cislo moze ist (cisla su od 1 po 20): ";
		cin >> o;
		if (n < o)
		{
			cout << "Zadaj mensie cislo" << endl;
			t++;
		}
		else if (o < n)
		{
			cout << "Zadaj vacsie cislo: " << endl;
			t++;
		}

	}
	cout << "Gratulujem, uhadol si cislo!, Uhadnute cislo bolo: " << n << endl;
	cout << "Pocet pokusov na uhadnutie cisla bol: " << t;
}