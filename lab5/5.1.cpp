#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    vector<int> tab(n);
    int max = 0, maxIndex = 0;
    for(int i = 0; i < n; i++) {
        cin >> tab[i];
        if(tab[i] > max) {
            max = tab[i];
            maxIndex = i;
        }
    }
    cout << "Najwieksza wartoscia elementu tablicy jest " << max << " o indeksie " << maxIndex << ".";

    return 0;
}
