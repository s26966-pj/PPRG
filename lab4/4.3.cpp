#include <iostream>

using namespace std;

void printTable(int tab[][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl << endl;
    }
}
int main()
{
    int tab[10][10] = {};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            switch (j)
            {
            case 0:
                tab[i][j] = i;
                break;
            case 1:
                tab[i][j] = i + i;
                break;
            case 2:
                tab[i][j] = i * i;
                break;
            case 3:
                tab[i][j] = i + j;
                break;
            case 4:
                tab[i][j] = i - j;
            }
        }
    }
    printTable(tab);

    return 0;
}
