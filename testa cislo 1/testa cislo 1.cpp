#include <iostream>
using namespace std;

int main()
{
	float cislo, faktorial=1;
	cout << "Zadaj cislo, nasledne sa z neho spravi faktorial: ";
	cin >> cislo;
	for (int i = 1; i <= cislo; i++)
	{
		faktorial = faktorial * i;
		cout << faktorial << endl;
		cout << i << endl;
	}
	cout << "Faktorial cisla: " << cislo << " je: " << faktorial;
}
