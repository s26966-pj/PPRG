#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x, y;
    cout << "Wprowadz x: ";
    cin >> x;
    cout << "Wprowadz y: ";
    cin >> y;

    cout << "Suma: " << setprecision(2) << x + y << endl;
    cout << "Różnica: " << setprecision(2) << x - y << endl;
    cout << "Iloczyn: " << setprecision(2) << x * y << endl;
    cout << "Iloraz: " << setprecision(2) << x / y << endl;

    return 0;
}