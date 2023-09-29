#include <iostream>
using namespace std;

int main()
{
	float c1, c2, vysledok;
	char po,x;
	do {
	cout << "Napis nejaku poctovu operaciu (+,-,*,/): ";
	cin >> c1 >> po >> c2;
	switch (po) 
		{
		case '+':
			vysledok = c1 + c2;
			cout << "Vysledok je: " << vysledok << endl;
			break;
		case '-':
			vysledok = c1 - c2;
			cout << "Vysledok je: " << vysledok << endl;
			break;
		case '*':
			vysledok = c1 * c2;
			cout << "Vysledok je: " << vysledok << endl;
			break;
		case '/':
			vysledok = c1 / c2;
			cout << "Vysledok je: "<< vysledok <<endl;
			break;
		default:
			cout << "Nezadal si spravneho operatora!!";
			break;
		}
	cout << "Chces pokracovat? (a/n): ";
	cin >> x;
	} while (x == 'a');
	if (x == 'n')
	{
		cout << "Dakujem za pouzitie kalkulacky";
	}
	return 0;
}