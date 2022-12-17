#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Podaj liczbe wierszy tablicy: ";
    cin >> rows;

    int tab[2][rows];
    cout << "Podaj elementy tablicy:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> tab[i][j];
        }
    }

    cout << "Tablica przed przeksztalceniem:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 2; j++) {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++) {
        int p = tab[i][0];
        tab[i][0] = tab[i][1];
        tab[i][1] = p;
    }
    
    cout << "Tablica po przeksztalceniu:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 2; j++) {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
