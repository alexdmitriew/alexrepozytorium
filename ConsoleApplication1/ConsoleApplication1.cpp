// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int liczba[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> liczba[i];
    }

    cout << "Podales nastepujace liczby: ";
    for (int i = 0; i < 10; i++)
    {
        cout << liczba[i] << ", ";
    }
}


