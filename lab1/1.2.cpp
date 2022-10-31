#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Podaj liczbę całkowitą: " << endl;
    cin >> number;
    if (number > 0) {
        cout << "Ta liczba jest dodatnia" << endl;
    } else if (number < 0) {
        cout << "Ta liczba jest ujemna" << endl;
    } else {
        cout << "Ta liczba jest zerem" << endl;
    }

    return 0;
}