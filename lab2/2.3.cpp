#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Wprowadz liczbe z przedzialu 1-12: ";
    cin >> n;

    if (n < 12 && n < 1)
    {
        cout << "Wprowadzono liczbe z poza zakresu.";
    }
    else
    {
        switch (n)
        {
        case 1:
            cout << "Styczen" << endl;
            cout << "Ten miesiac ma 31 dni w roku" << endl;
            cout << "Ten miesiac jest pochmurny" << endl;
            break;
        case 2:
            cout << "Luty" << endl;
            cout << "Ten miesiac ma 28 dni w roku nieprzestepnym" << endl;
            cout << "Ten miesiac jest pochmurny" << endl;
            break;
        case 3:
            cout << "Marzec" << endl;
            cout << "Ten miesiac ma 31 dni w roku" << endl;
            cout << "Ten miesiac jest pochmurny" << endl;
            break;
        case 4:
            cout << "Kwiecien" << endl;
            cout << "Ten miesiac ma 30 dni w roku" << endl;
            cout << "Ten miesiac jest sloneczny" << endl;
            break;
        case 5:
            cout << "Maj" << endl;
            cout << "Ten miesiac ma 31 dni w roku" << endl;
            cout << "Ten miesiac jest sloneczny" << endl;
            break;
        case 6:
            cout << "Czerwiec" << endl;
            cout << "Ten miesiac ma 30 dni w roku" << endl;
            cout << "Ten miesiac jest sloneczny" << endl;
            break;
        case 7:
            cout << "Lipiec" << endl;
            cout << "Ten miesiac ma 31 dni w roku" << endl;
            cout << "Ten miesiac jest sloneczny" << endl;
            break;
        case 8:
            cout << "Sierpien" << endl;
            cout << "Ten miesiac ma 31 dni w roku" << endl;
            cout << "Ten miesiac jest sloneczny" << endl;
            break;
        case 9:
            cout << "Wrzesien" << endl;
            cout << "Ten miesiac ma 30 dni w roku" << endl;
            cout << "Ten miesiac jest sloneczny" << endl;
            break;
        case 10:
            cout << "Pazdziernik" << endl;
            cout << "Ten miesiac ma 31 dni w roku" << endl;
            cout << "Ten miesiac jest pochmurny" << endl;
            break;
        case 11:
            cout << "Listopad" << endl;
            cout << "Ten miesiac ma 30 dni w roku" << endl;
            cout << "Ten miesiac jest pochmurny" << endl;
            break;
        case 12:
            cout << "Grudzien" << endl;
            cout << "Ten miesiac ma 31 dni w roku" << endl;
            cout << "Ten miesiac jest pochmurny" << endl;
            break;
        }
    }

    return 0;
}