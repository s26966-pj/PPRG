#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;

    cout << "Wprowadz ciag znakow: ";
    cin >> str;

    cout << "Ile razy polaczyc ten ciag w jeden?: ";
    cin >> n;

    string result = "";
    for(int i = 0; i < n; i++) {
        result += str;

    }
    cout << result;
    
    return 0;
}
