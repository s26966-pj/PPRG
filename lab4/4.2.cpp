#include <iostream>

using namespace std;

void sort(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size - i; j++)
        {
            if (tab[j - 1] > tab[j])
            {
                int p = tab[j];
                tab[j] = tab[j - 1];
                tab[j - 1] = p;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Podaj wielkosc tablicy: ";
    cin >> size;
    int tab[size];
    cout << "Elementy tablicy: ";
    for (int i = 0; i < size; i++)
    {
        cin >> tab[i];
    }
    sort(tab, size);
    int dominant = tab[0], maxCount = 1, count = 1;
    for (int i = 1; i < size; i++)
    {
        if (tab[i] == tab[i - 1])
        {
            count++;
            if (count > maxCount)
            {
                maxCount = count;
                dominant = tab[i];
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << "Najczesciej wystepujacy element w tablicy to: " << dominant;
    return 0;
}
