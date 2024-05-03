#include <iostream>

using namespace std;

const int cantidadEstudiantes = 8;
double calificaciones[cantidadEstudiantes];
double sumaCalificaciones = 0.0;
double promedio;
int aprobados = 0;
int reprobados = 0;

int main() {
    cout << "Ingresa las calificaciones de los " << cantidadEstudiantes << " estudiantes:" << endl;
    for (int i = 0; i < cantidadEstudiantes; ++i) {
        cout << "Calificación del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
    }

    for (int i = 0; i < cantidadEstudiantes; ++i) {
        sumaCalificaciones += calificaciones[i];
        if (calificaciones[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = sumaCalificaciones / cantidadEstudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
