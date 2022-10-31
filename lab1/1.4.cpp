#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> num1;
    cout << "Podaj druga liczbe" << endl;
    cin >> num2;
    cout << "Podaj trzecia liczbe" << endl;
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "Najwieksza liczba z podanych jest: " << num1 << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << "Najwieksza liczba z podanych jest: " << num2 << endl;
    } else {
        cout << "Najwieksza liczba z podanych jest: " << num3 << endl;
    }

    return 0;
}