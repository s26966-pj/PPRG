#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Wprowadz pierwsza liczbe a: ";
    cin >> a;
    cout << "Wprowadz druga liczbe b: ";
    cin >> b;
    cout << "Liczba a: " << a << endl;
    cout << "Liczba b: " << b << endl;

    // A
    cout << "Wiersz o dlugosci a: " << endl;
    for(int i = 0; i < a; i++) {
        cout << "*";
    }
    cout << endl << endl;
    
    // B
    cout << "Kolumna o dlugosci b: " << endl;
    for(int i = 0; i < b; i++) {
        cout << "*" << endl;
    }
    cout << endl;
    
    // C
    cout << "Prostokat o wymiarach 'a' na 'b': " << endl;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    
    // D
    cout << "Obwod prostokata o wymiarach 'a' na 'b': " << endl;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                 cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    
    // E
    cout << "Trojkat prostokatny rownoramienny z katem ostrym w lewym dolnym rogu: " << endl;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            if(i >= j) {
                 cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    
    // F
    cout << "Trojkat prostokatny rownoramienny z katem ostrym w prawym gornym rogu: " << endl;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            if(i <= j) {
                 cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}