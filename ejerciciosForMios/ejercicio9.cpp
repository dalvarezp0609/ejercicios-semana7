#include <iostream>
#include <string>

using namespace std;

#define FILAS 5
#define COLUMNAS 5

int matrizA[FILAS][COLUMNAS];
int matrizB[FILAS][COLUMNAS];
int producto[FILAS][COLUMNAS];
int filasA, filasB, columnasA, columnasB;

void ingresarMatriz(int matriz[][COLUMNAS], int filas, int columnas, string nombreMatriz)
{
    cout << "Ingrese los elementos de la matriz " << nombreMatriz << ":" << endl;
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }
}

void multiplicarMatrices()
{
    if (columnasA == filasB)
    {
        for (int i = 0; i < filasA; ++i)
        {
            for (int j = 0; j < columnasB; ++j)
            {
                producto[i][j] = 0;
                for (int k = 0; k < columnasA; ++k)
                {
                    producto[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }
    }
    else
    {
        cout << "Las matrices no son compatibles para multiplicación." << endl;
    }
}

void mostrarMatriz(int matriz[][COLUMNAS], int filas, int columnas, string nombreMatriz)
{
    cout << "Matriz " << nombreMatriz << ":" << endl;
    for (int i = 0; i < filas; ++i)
    {
        cout << "[";
        for (int j = 0; j < columnas; ++j)
        {
            cout << matriz[i][j];
            if (j != columnas - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
}

int main()
{
    int opcion;
    cout << "1. Ingresar matrices" << endl;
    cout << "2. Multiplicar matrices" << endl;
    cout << "3. Salir" << endl;
    cout << "Escoja una opción: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        ingresarMatriz(matrizA, FILAS, COLUMNAS, "A");
        ingresarMatriz(matrizB, FILAS, COLUMNAS, "B");
        break;
    case 2:
        multiplicarMatrices();
        mostrarMatriz(matrizA, FILAS, COLUMNAS, "A");
        mostrarMatriz(matrizB, FILAS, COLUMNAS, "B");
        mostrarMatriz(producto, FILAS, COLUMNAS, "producto");
        break;
    case 3:
        cout << "Saliendo..." << endl;
        return 0;
    default:
        cout << "Opción inválida." << endl;
        break;
    }

    main();
    return 0;
}
