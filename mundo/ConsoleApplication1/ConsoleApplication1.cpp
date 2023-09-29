#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Zadaj cislo: ";
	cin >> x;
	cout << "Delicmi tvojho cisla su:";
	for(int i=1;i<=x; i++)
	{ 
	if ((x % i == 0)) 
	{
		cout <<" "<< i;
	}
	}
}