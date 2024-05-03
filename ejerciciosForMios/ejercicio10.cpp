#include <iostream>

using namespace std;

#define MAX_ROWS 5
#define MAX_COLUMNS 5

int matrix[MAX_ROWS][MAX_COLUMNS];
int transposed[MAX_ROWS][MAX_COLUMNS];

void inputMatrix()
{
    int rows, columns;
    cout << "Ingrese las dimensiones de la matriz (filas columnas): ";
    cin >> rows >> columns;

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
}

void transposeMatrix()
{
    int rows = MAX_ROWS, columns = MAX_COLUMNS;
    for (int i = 0; i < columns; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            transposed[i][j] = matrix[j][i];
        }
    }

    cout << "\nMatriz ingresada:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        cout << "[";
        for (int j = 0; j < columns; ++j)
        {
            cout << matrix[i][j];
            if (j != columns - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    cout << "\nTransposición de la matriz ingresada:" << endl;
    for (int i = 0; i < columns; ++i)
    {
        cout << "[";
        for (int j = 0; j < rows; ++j)
        {
            cout << transposed[i][j];
            if (j != rows - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n1. Ingresar datos de la matriz" << endl;
        cout << "2. Transponer matriz" << endl;
        cout << "3. Salir" << endl;
        cout << "Elija una opción: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            inputMatrix();
            break;
        case 2:
            transposeMatrix();
            break;
        case 3:
            cout << "\nSaliendo..." << endl;
            break;
        default:
            cout << "\nOpción inválida. Por favor, ingrese una opción válida." << endl;
            break;
        }
    } while (choice != 3);

    return 0;
}
