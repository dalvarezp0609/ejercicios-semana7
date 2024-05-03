#include <iostream>

using namespace std;

int main(int argc, char)
{
    int suma = 0;

    for (int numero = 1; numero <= 100; numero++)
    {
        suma += numero * numero;
    }

    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << suma << endl;

    return 0;
}
