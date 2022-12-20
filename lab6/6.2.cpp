#include <iostream>
#include <vector>

using namespace std;

struct Student
{
    string firstName;
    int math;
    int biology;
    int it;
    int polish;
};

int main()
{
    vector<Student> students = {{}, {}, {}, {}, {}, {}};
    string classes[] = {"matematyka", "biologia", "informatyka", "jezyk polski"};

    for (int i = 0; i < 6; i++)
    {
        cout << "Podaj imie ucznia nr. " << i+1 <<": ";
        cin >> students[i].firstName;
        cout << "Podaj ocene z matematytki: ";
        cin >> students[i].math;
        cout << "Podaj ocene z bologii: ";
        cin >> students[i].biology;
        cout << "Podaj ocene z informatyki: ";
        cin >> students[i].it;
        cout << "Podaj ocene z jezyka polskiego: ";
        cin >> students[i].polish;
        cout << endl;
    }

    int studentIndex;
    int classIndex;

    while(true)
    {
        do
        {
            cout << "Wprowadz numer ucznia: ";
            cin >> studentIndex;
            if(studentIndex > students.size() || studentIndex <= 0) {
                cout << "Wprowadzono liczbe spoza zakresu!" << endl;
            }
        } while (studentIndex > students.size() || studentIndex <= 0);

        do
        {
            cout << "Wprowadz numer przedmiotu: ";
            cin >> classIndex;
            if(classIndex > 4 || classIndex <= 0) {
                cout << "Wprowadzono liczbe spoza zakresu!" << endl;
            }
        } while (classIndex > 4 || classIndex <= 0);

        switch (classIndex)
        {
        case 1:
            cout << "Ocena ucznia " << students[studentIndex-1].firstName << " z matematyki to " << students[studentIndex-1].math;
            break;
        case 2:
            cout << "Ocena ucznia " << students[studentIndex-1].firstName << " z biologii to " << students[studentIndex-1].biology;
            break;
        case 3:
            cout << "Ocena ucznia " << students[studentIndex-1].firstName << " z informatyki to " << students[studentIndex-1].it;
            break;
        case 4:
            cout << "Ocena ucznia " << students[studentIndex-1].firstName << " z jezyka polskiego to " << students[studentIndex-1].polish;
            break;
        }
        cout << endl << endl;
    }

    return 0;
}
