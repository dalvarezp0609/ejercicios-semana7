#include <iostream>

using namespace std;

/*  Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector. */

int main()
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vector1[longitud], vector2[longitud], vectorSuma[longitud];

    cout << "Ingrese los elementos del primer vector: " << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector: " << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; i++)
    {
        vectorSuma[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de los vectores es: ";
    for (int i = 0; i < longitud; i++)
    {
        cout << vectorSuma[i] << " ";
    }

    return 0;
}
