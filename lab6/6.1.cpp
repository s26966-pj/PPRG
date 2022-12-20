#include <iostream>

using namespace std;

int main()
{
    int  n;

    cout << "Podaj liczbe: ";
    cin >> n;

    int divisibleBy5 = n/5;
    int divisibleBy15 = n/15;
    
    cout << "Liczb naturalnych nie wiekszych od " << n;
    cout << " oraz podzielnych przez 5, ale nie podzielnych przez 3 jest: " << divisibleBy5 - divisibleBy15;
    
    return 0;
}
