/*
KALKULATOR MACIERZY
Przykladowe macierze:
1 2 3
4 5 6
7 8 9
1 2 3
1 2 3
1 2 3

10000 10000 10000
10000 10000 10000
10000 10000 10000
123 123 144
1 123333 3
10 1000 10
*/

#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

void createMatrix(int matrix[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10, '\n');
                cout << "Wprowadzono nieprawidlowy znak do macierzy!" << endl;
                cout << "Wprowadz macierz od nowa:" << endl;
                createMatrix(matrix); 
                return;
            }
        }
    }
}

int numberOfDigits(int n)
{
    int m;
    ostringstream strs;
    strs << n;
    string str = strs.str();
    m = str.size();
    return m;
}

void calculateSpace(int matrix[][3], int space[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[j] < numberOfDigits(matrix[i][j]))
            {
                space[j] = numberOfDigits(matrix[i][j]);
            }
        }
    }
}

void printMatrix(int matrix[][3])
{
    int space[3] = {};
    calculateSpace(matrix, space);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                cout << "  { " << setw(space[j]) << matrix[i][j] << " ";
                break;
            case 1:
                cout << setw(space[j]) << matrix[i][j] << " ";
                break;
            case 2:
                cout << setw(space[j]) << matrix[i][j] << " }";
                break;
            }
        }
        cout << endl;
        if (i == 0 || i == 1)
        {
            cout << "  { " << setw(space[0] + space[1] + space[2]) << " "
                 << "   }";
        }
        cout << endl;
    }
}

void printMatrices(int matrix1[][3], int matrix2[][3], char operationChar)
{
    int space1[3] = {}, space2[3] = {};
    calculateSpace(matrix1, space1);
    calculateSpace(matrix2, space2);
    cout << endl;
    cout << "  "
         << "Wczytane dzialanie:";
    cout << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                cout << "  { " << setw(space1[j]) << matrix1[i][j] << " ";
                break;
            case 1:
                cout << setw(space1[j]) << matrix1[i][j] << " ";
                break;
            case 2:
                cout << setw(space1[j]) << matrix1[i][j] << " }";
                break;
            }
        }
        if (i == 1)
        {
            cout << "  " << operationChar;
        }
        else
        {
            cout << "   ";
        }

        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                cout << "  { " << setw(space2[j]) << matrix2[i][j] << " ";
                break;
            case 1:
                cout << setw(space2[j]) << matrix2[i][j] << " ";
                break;
            case 2:
                cout << setw(space2[j]) << matrix2[i][j] << " }";
                break;
            }
        }
        cout << endl;
        if (i == 0 || i == 1)
        {
            cout << "  { " << setw(space1[0] + space1[1] + space1[2]) << " "
                 << "   }";
            cout << "   ";
            cout << "  { " << setw(space2[0] + space2[1] + space2[2]) << " "
                 << "   }";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[][3], int matrix2[][3])
{
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << endl;
    cout << "  "
         << "Macierz wynikowa:" << endl
         << endl;
    printMatrix(result);
}

void subtractMatrices(int matrix1[][3], int matrix2[][3])
{
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    cout << endl;
    cout << "  "
         << "Macierz wynikowa:" << endl
         << endl;
    printMatrix(result);
}

void multiplyMatrices(int matrix1[][3], int matrix2[][3])
{
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << endl;
    cout << "  "
         << "Macierz wynikowa:" << endl
         << endl;
    printMatrix(result);
}

void transposeMatrix(int matrix[][3])
{
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
    cout << endl;
    cout << "  "
         << "Macierz wynikowa:" << endl
         << endl;
    printMatrix(result);
}

int main()
{
    int matrix1[3][3], matrix2[3][3];
    char optionNum;
    bool isTwoMatrices = false;
    cout << "KALKULATOR MACIERZY" << endl
         << endl;

    while (true)
    {
        cout << "Operacje na macierzach:" << endl;
        cout << "1. dodawanie macierzy" << endl;
        cout << "2. odejmowanie macierzy" << endl;
        cout << "3. mnozenie macierzy" << endl;
        cout << "4. transpozycja macierzy" << endl;
        cout << "Wpisz numer operacji (1-4), ktora chcesz wykonac lub \"0\" aby wyjsc.:";

        do
        {
            cin >> optionNum;
            if (optionNum < 48 || optionNum > 52)
            {
                cout << "Nieznany numer operacji!" << endl;
                cout << "Wpisz numer operacji (1-4), ktora chcesz wykonac lub \"0\" aby wyjsc.: ";
            }
        } while (optionNum < 48 || optionNum > 52);

        if (optionNum == '0')
        {
            return 0;
        }
        else if (optionNum == '4')
        {
            cout << "Wprowadz macierz: " << endl;
            createMatrix(matrix1);
            isTwoMatrices = false;
            cout << endl;
            cout << "  "
                 << "Wczytana macierz:" << endl
                 << endl;
            printMatrix(matrix1);
            transposeMatrix(matrix1);
        }
        else
        {
            if (isTwoMatrices)
            {
                char opt;
                cout << "Czy chcesz wykonac dzialanie na tych samych macierzach? (\"1\"-Tak \"2\"-Nie): ";
                do
                {
                    cin >> opt;
                    if (opt < 49 || opt > 50)
                    {
                        cout << "Nieznany numer operacji!" << endl;
                        cout << "Czy chcesz wykonac dzialanie na tych samych macierzach? (\"1\"-Tak \"2\"-Nie): ";
                    }
                } while (opt < 49 || opt > 50);
                if (opt == '2')
                {
                    cout << "Podaj macierz numer 1:" << endl;
                    createMatrix(matrix1);
                    cout << "Podaj macierz numer 2:" << endl;
                    createMatrix(matrix2);
                    isTwoMatrices = true;
                }
            }
            else
            {
                cout << "Podaj macierz numer 1:" << endl;
                createMatrix(matrix1);
                cout << "Podaj macierz numer 2:" << endl;
                createMatrix(matrix2);
                isTwoMatrices = true;
            }

            switch (optionNum)
            {
            case '1':
                printMatrices(matrix1, matrix2, '+');
                addMatrices(matrix1, matrix2);
                break;
            case '2':
                printMatrices(matrix1, matrix2, '-');
                subtractMatrices(matrix1, matrix2);
                break;
            case '3':
                printMatrices(matrix1, matrix2, '*');
                multiplyMatrices(matrix1, matrix2);
                break;
            }
        }
    }
    return 0;
}
