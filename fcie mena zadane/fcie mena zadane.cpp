#include <iostream>
#include <string>
using namespace std;

struct osoba
{
	string meno;
	int vyska;
	int vek;
};

void vypis_osobu(osoba vypis)
{
	cout << "Meno: " << vypis.meno << endl;
	cout << "Vyska: " << vypis.vyska << endl;
	cout << "Vek: " << vypis.vek << endl;
}

int main()
{
	const int pocet = 4;
	osoba Jano;
	osoba Fero;
	osoba David;

	David.meno = "David";
	David.vyska = 157;
	David.vek = 15;
	Jano.meno = "Jano";
	Jano.vyska = 175;
	Jano.vek = 20;
	Fero.meno = "Fero";
	Fero.vyska = 168;
	Fero.vek = 5;

	osoba osoby[pocet];
	osoby[0] = Jano;
	osoby[1] = Fero;
	osoby[2] = David;
	osoby[3].meno = "Jozef";
	osoby[3].vyska = 189;
	osoby[3].vek = 41;

	cout << "Cely zoznam osob: "<<endl;
	for (int i = 0; i < pocet; i++)
	{
		vypis_osobu(osoby[i]);
	}
	cout << "----------------------------------------------"<<endl;

	cout << "Dospeli su: "<<endl;
	for (int i = 0; i < pocet; i++)
	{
		if (osoby[i].vek >= 18)
		{
			vypis_osobu(osoby[i]);
		}
	}
}