#include <iostream>
#include "variables.h"

using namespace std;
/*
C - Create
R - Read
U - Update
D - Delete
*/


//CREATE
void addReg()
void addRedg(){
    cout << "Datos del estudiante\n";
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif)
    cout<< "NOMBRES: ";
    scanf(" %[^\n]", people[pos].name)
    cout << "APELLIDOS: ";
    scanf(" %[^\n]", people[pos].lastname);
    cout << "AÑO";
        scanf(" %[^\n]", people[pos].year);

pos++
}

void showReg();
void showRef(){
    for(int i =0; i < pos; i++){
        printf("Nombre: %s %s \nAño: %d"
        , poeple[i].name, poeple[i]. lastName
        , people[i]. year);
        cout << "********************************\n";
    }
}


void menu(){
    int op=0;
    do{
        cout << "1. Agregar \n";
        cout << "2. Mostrar \n0";
        cout << "3. Salir \n";
        cout << "opcion:";
        cin >> op;
        switch(op){
            case 1:
            addReg();
            system("pause");
            break;
        case 2:
        showReg();
        system("pause");
        break;
        case 3
            break;

        }
    }while (op==3)
}