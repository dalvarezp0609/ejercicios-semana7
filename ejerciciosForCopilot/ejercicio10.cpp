#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transponerMatriz(const vector<vector<int>> &matriz)
{
    int filas = matriz.size();
    int columnas = matriz[0].size();

    vector<vector<int>> transpuesta(columnas, vector<int>(filas));

    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    return transpuesta;
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

    int filas, columnas;
    cout << "Ingrese el número de filas y columnas de la matriz:" << endl;
    cin >> filas >> columnas;

    cout << "Ingrese los elementos de la matriz por filas:" << endl;
    vector<vector<int>> matriz(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cin >> matriz[i][j];
        }
    }

    vector<vector<int>> transpuesta = transponerMatriz(matriz);

    cout << "La matriz transpuesta es:" << endl;
    imprimirMatriz(transpuesta);

    return 0;
}
