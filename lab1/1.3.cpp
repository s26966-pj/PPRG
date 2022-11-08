#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Wprowadz liczbe calkowita" << endl;
    cin >> number;
    if (number == 0) {
        cout << "Ta liczba jest zerem" << endl;
    } else if (number % 2 == 0) {
        cout << "Ta liczba jest parzysta" << endl;
    } else {
        cout << "Ta liczba jest nieparzysta" << endl;
    }

    return 0;
}