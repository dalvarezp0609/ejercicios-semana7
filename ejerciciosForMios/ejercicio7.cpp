#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vectorUno[longitud], vectorDos[longitud], vectorSuma[longitud];

    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < longitud; i++)
    {
        cin >> vectorUno[i];
    }

    cout << "\nIngrese los elementos del segundo vector: ";
    for (int i = 0; i < longitud; i++)
    {
        cin >> vectorDos[i];
    }

    for (int i = 0; i < longitud; i++)
    {
        vectorSuma[i] = vectorUno[i] + vectorDos[i];
    }

    cout << "\nLa suma de los dos vectores es: ";
    for (int i = 0; i < longitud; i++)
    {
        cout << vectorSuma[i] << " ";
    }
    
    return 0;
}
