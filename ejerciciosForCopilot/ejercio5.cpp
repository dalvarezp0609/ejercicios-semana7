#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int estudiantes = 8;
    vector<float> notas(estudiantes);
    int aprobados = 0, reprobados = 0;
    float suma = 0, promedio;

    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];

        if (notas[i] >= 6)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    promedio = suma / estudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
