// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Wprowadz liczbe pierwsza: ";

	cin >> a;

	cout << "Wprowadz liczbe druga: ";

	cin >> b;
	int iloczyn = a * b;

	while (a != b)
	{
		if (a < b)
			b = b - a;

		else
			a = a - b;
	}

	int nww = iloczyn / a;

	cout << "najmniejsza wspolna wielokrotnosc: ";

	cout << nww;


}
