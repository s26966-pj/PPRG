#include <iostream>
#include <vector>

using namespace std;

struct Student
{
    int index;
    string firstName;
    string lastName;
};

int main()
{
    vector<Student> students = {{}, {}, {}, {}};

    cout << "Wprowadz dane czterech uczniow: " << endl;

    for (int i = 0; i < students.size(); i++)
    {
        cout << "Podaj numer indeksu ucznia: ";
        cin >> students[i].index;
        cout << "Podaj imie ucznia: ";
        cin >> students[i].firstName;
        cout << "Podaj nazwisko ucznia: ";
        cin >> students[i].lastName;
        cout << endl;
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 1; j < 4 - i; j++) {
            if(students[j-1].index > students[j].index) {
                int p = students[j-1].index;
                students[j-1].index = students[j].index;
                students[j].index = p;
            }
        }
    }

    cout << "Posortowana lista uczniow: " << endl;
    for (auto student : students) {
        cout << student.index << " " << student.firstName << " " << student.lastName << endl;
    }

    return 0;
}
