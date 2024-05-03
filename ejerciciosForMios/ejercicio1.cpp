#include <iostream>

using namespace std;

int main(int argc, char)

{
    int numero, total = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int contador = 1; contador <= numero; contador++)
    {
        total += contador;
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << numero << " es: " << total << endl;
}
