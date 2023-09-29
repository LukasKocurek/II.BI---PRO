#include <iostream>
using namespace std;

int main()
{
	int i, j, n;
	cout << "Zadaj pocet hviezdiciek, z ktorych sa vytvori pyramida + obratena: ";
	cin >> n;
	cout << endl;
	for (i = 1;i <= n; i++)
	{
		for (int k = n - i; k > 0; k--)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	for (i = n; i >= 1; i--)
	{
		for (int k = n - i; k > 0; k--)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (i=1; i<=n; i++)
	{
		cout << endl;
		for (int k = n - i; k > 0; k--)
		{
			cout << "  ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << "* ";
		}
	}
	cout << endl;
	cout << endl;
	for (i = n; i >= 1; i--)
	{
		for (int k = n - i; k > 0 ; k--)
		{
			cout << "  ";
		}
		for (j = i; j >= 1; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	for (i = n; i >= 1; i--)
	{
		for (j = i; j >= 1; j--)
		{
			cout << "* ";
		}cout << endl;
	}
}
