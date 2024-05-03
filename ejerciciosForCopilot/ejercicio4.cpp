#include <iostream>

using namespace std;

/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

int main()
{
    float nota, suma = 0, promedio;
    int estudiantes = 10;

    for (int i = 1; i <= estudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / estudiantes;

    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}