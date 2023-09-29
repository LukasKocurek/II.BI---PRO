#include <iostream>
using namespace std;

int main()
{
	float zaklad, faktorial=1;
	cout << "Zadaj cislo, nasledne sa z neho spravi faktorial: ";
	cin >> zaklad;
	for (int i = 1; i <= zaklad; i++)
	{
		faktorial = faktorial * i;
	}
	cout << "Faktorial cisla " << zaklad << " je: " << faktorial;
}