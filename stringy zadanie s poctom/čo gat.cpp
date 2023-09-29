#include <iostream>
#include <string>
using namespace std;

int main()
{
	string meno;
	int pocet = 0;
	char znak;
	cout << "Zadaj nejaky text, vypise ti ake a kolko pismen sa nachadzalo v texte: ";
	getline(cin, meno);

	for (char znak = 'a'; znak <= 'z'; znak++)
	{
		for (int i = 0; i < meno.length(); i++)
		{
			if (tolower(meno[i]) == znak)
			{
				pocet++;
			}
		}
		if (pocet > 0) {
			cout << "Pocet " << znak << " je: " << pocet << endl;
		}
		pocet = 0;
	}
}