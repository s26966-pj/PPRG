#include <iostream>

using namespace std;

int main()
{ 
    int size;
    cout << "Podaj wielkosc tablicy: ";
    cin >> size;
    int tab[10], max = 0;
    cout << "Elementy tablicy: ";
    for (int i = 0; i < size; i++)
    {
        cin >> tab[i];
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    cout << "Najwieksza liczba w tablicy jest: " << max;

    return 0;
}