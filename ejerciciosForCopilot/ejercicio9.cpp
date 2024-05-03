#include <iostream>
#include <vector>

using namespace std;

/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante. */

vector<vector<int>> multiplicarMatrices(const vector<vector<int>> &matriz1, const vector<vector<int>> &matriz2)
{
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int filas2 = matriz2.size();
    int columnas2 = matriz2[0].size();

    if (columnas1 != filas2)
    {
        cout << "Error: Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return {};
    }

    vector<vector<int>> resultado(filas1, vector<int>(columnas2, 0));

    for (int i = 0; i < filas1; ++i)
    {
        for (int j = 0; j < columnas2; ++j)
        {
            for (int k = 0; k < columnas1; ++k)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

void imprimirMatriz(const vector<vector<int>> &matriz)
{
    for (const auto &fila : matriz)
    {
        for (int elemento : fila)
        {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int main()
{
    int filas1, columnas1, filas2, columnas2;
    cout << "Ingrese el número de filas y columnas de la primera matriz:" << endl;
    cin >> filas1 >> columnas1;
    cout << "Ingrese el número de filas y columnas de la segunda matriz:" << endl;
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2)
    {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 1;
    }

    cout << "Ingrese los elementos de la primera matriz por filas:" << endl;
    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    for (int i = 0; i < filas1; ++i)
    {
        for (int j = 0; j < columnas1; ++j)
        {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz por filas:" << endl;
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));
    for (int i = 0; i < filas2; ++i)
    {
        for (int j = 0; j < columnas2; ++j)
        {
            cin >> matriz2[i][j];
        }
    }

    vector<vector<int>> resultado = multiplicarMatrices(matriz1, matriz2);

    cout << "La matriz resultante de la multiplicación es:" << endl;
    imprimirMatriz(resultado);

    return 0;
}
