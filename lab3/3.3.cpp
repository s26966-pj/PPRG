#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Postać rownania kwadratowego: ax2 + bx + c = 0" << endl;
    cout << "Wprowadz a:";
    cin >> a;
    cout << "Wprowadz b:";
    cin >> b;
    cout << "Wprowadz c:";
    cin >> c;
    cout << "Postac Twojego rownania kwadratowego: " << a << "x2 + " << b << "x + " << c << " = 0";
    cout << endl;

    float delta = (pow(b, 2) - 4 * a * c);

    if (delta == 0)
    {
        float x = (b * -1) / 2 * a;
        cout << x;
    }
    else if (delta > 0)
    {
        float x1 = ((b * -1) + sqrt(delta)) / 2 * a;
        float x2 = ((b * -1) - sqrt(delta)) / 2 * a;
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    }
    else
    {
        cout << "Delta mniejsza od zera - brak pierwiastkow";
    }

    return 0;
}