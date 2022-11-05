#include <iostream>
#include <conio.h>

using namespace std;

int main()
{   
    string x;
    cout << "Program zatrzyma sie po wprowadzeniu znaku 't'" << endl;
    while(x != "t") {
        cin >> x;
    }
    return 0;
}