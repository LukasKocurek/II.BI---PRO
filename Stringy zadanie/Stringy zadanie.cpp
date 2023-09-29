#include <iostream>
#include <string>
using namespace std;

int main()
{
	string meno;
	char p;
	cout << "Zadaj nejaky text: ";
	getline(cin, meno);
	cout << "Pouzite pismena v texte su: " << endl;
	for (int i = 0; i < meno.length(); i++)
	{
		p = meno[i];
		char o = tolower(p);
		if ((o >= 'a' && o <= 'z') || (o >= 'A' && o <= 'Z'))
		{
			cout << o << endl;
		}
	}
}