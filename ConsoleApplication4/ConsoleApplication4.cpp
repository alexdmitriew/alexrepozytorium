// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;



void szyfr(int klucz, char tab[])
{
	int dl = strlen(tab);
	if (klucz >= 26 && klucz <= 26) return;

	if (klucz >= 0)
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz <= 'z')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz - 26;
	else
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz >= 'a')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz + 26;
}


int main()
{
	char tab[99];
	int klucz;
	cout << "podaj wyraz skladajacy sie z duzych liter:";
	cin >> tab;
	cout << "podaj klucz z przedzialu [-26..26]:";
	cin >> klucz;
	szyfr(klucz, tab);
	cout << "po zaszyfrowaniu:" << tab << endl;
	szyfr(-klucz, tab);
	cout << "po rozszyfrowaniu:" << tab << endl;

}

