#include <iostream>
using namespace std;

int main()
{
    int matrizResultado[2][2];
    int matrizUno[2][2];
    int matrizDos[2][2];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrizUno[i][j];
        }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrizDos[i][j];
        }

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
            matrizResultado[i][j] = matrizUno[i][j] * matrizDos[i][j];
            cout << matrizResultado[i][j] << " ";
            if (j == 1)
                cout << endl;
        }

    return 0;
}
