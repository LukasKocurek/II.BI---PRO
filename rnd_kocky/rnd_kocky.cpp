#include <iostream>
using namespace std;

int main()
{
	int n1, n2, h1 = 0, h2 = 0;
	string m1, m2;
	cout << "Zadaj meno prveho hraca: ";
	cin >> m1;
	cout << "Zadaj meno druheho hraca: ";
	cin >> m2;
	cout << endl;
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		n1 = rand() % 6 + 1;
		cout << m1 << " hodil cislo: " << n1 << endl;
		h1 = h1 + n1;
	}
	cout << endl;
	for (int i = 0;i < 5; i++)
	{
		n2 = rand() % 6 + 1;
		cout << m2 << " hodil cislo: " << n2 << endl;
		h2 = h2 + n2;
	}
	cout << endl<< "Sucet hraca " << m1 << " bol " << h1 << endl;
	cout << "Sucet hraca " << m2 << " bol " << h2 << endl << endl;
	if (h1 > h2)
	{
		cout << "Hrac " << m1 << " vyhral so suctom " << h1;
	}
	else if (h2 > h1)
	{
		cout << "Hrac " << m2 << " vyhral so suctom " << h2;
	}
	else
	{
		cout << "Obidvaja hraci mali rovnaky sucet.";
	}
}