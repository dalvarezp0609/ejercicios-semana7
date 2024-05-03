#include <iostream>

using namespace std;

/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

int main()
{
    int n;
    int suma = 0;

    cout << "Ingrese un numero natural: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}