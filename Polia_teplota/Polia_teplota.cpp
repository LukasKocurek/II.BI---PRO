#include <iostream>
using namespace std;

int main()
{
	const int pocet = 10;
	float teplota[20] = {};
	float sucet = 0, priemer = 0;
	srand(time(NULL));

	for (int i = 0; i < pocet; i++)
	{
		teplota[i] = rand() % 11 + 10;
		cout << i + 1 << ". den je teplota: " << teplota[i] << endl;
	}
	for (int i = 0; i < pocet; i++)
	{
		sucet += teplota[i];
	}
	cout << "Sucet vsetkych teplot je: " << sucet << endl;
	priemer = sucet / pocet;
	cout << "Priemerna teplota za " << pocet << " dni je: " << priemer << endl;
	cout << "NADpriemerna teplota bola v tychto dnoch: " << endl;
	for (int i = 0; i < pocet; i++)
	{
		if (teplota[i] > priemer)
		{
			cout << i + 1 << ". den je teplota: " << teplota[i] << endl;
		}
	}
	cout << "PODpriemerna teplota bola v tychto dnoch: " << endl;
	for (int i = 0; i < pocet; i++)
	{
		if (teplota[i] < priemer)
		{
			cout << i + 1 << ". den je teplota: " << teplota[i] << endl;
		}
	}
	int maxteplota, denmaxteploty;
	maxteplota = teplota[9];
	for (int i = 0; i < pocet; i++)
	{
		if (teplota[i] > maxteplota) {
			maxteplota = teplota[i];
			denmaxteploty = i + 1;
		}
	}
	cout << "Najvyssia teplota bola v tychto dnoch: "<<endl;
	for (int i = 0; i < pocet; i++)
	{
		if (teplota[i] == maxteplota)
		{
			cout << i + 1 << ". den je teplota: " << teplota[i] << endl;
		}
	}
	int minteplota, denminteploty;
	minteplota = teplota[9];
	for (int i = 0; i < pocet; i++)
	{
		if (teplota[i] < minteplota) {
			minteplota = teplota[i];
			denminteploty = i + 1;
		}
	}
	cout << "Najnizsia teplota bola v tychto dnoch: "<<endl;
	for (int i = 0; i < pocet; i++)
	{
		if (teplota[i] == minteplota)
		{
			cout << i + 1 << ". den je teplota: " << teplota[i] << endl;
		}
	}
}