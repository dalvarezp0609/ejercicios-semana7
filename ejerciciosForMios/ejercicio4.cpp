#include <iostream>

using namespace std;

int main()
{
    const int cantidadEstudiantes = 10;
    double calificaciones[cantidadEstudiantes];
    double sumaCalificaciones = 0.0;
    double promedio;

    cout << "Ingresa las calificaciones de los " << cantidadEstudiantes << " estudiantes:" << endl;
    for (int i = 0; i < cantidadEstudiantes; ++i)
    {
        cout << "Calificación del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
    }

    for (int i = 0; i < cantidadEstudiantes; ++i)
    {
        sumaCalificaciones += calificaciones[i];
    }

    promedio = sumaCalificaciones / cantidadEstudiantes;

    cout << "El promedio general de la sección es: " << promedio << endl;
    return 0;
}
