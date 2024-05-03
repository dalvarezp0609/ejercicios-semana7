Algoritmo PromedioGeneral
	
    Definir notas Como Real;
    Definir suma, promedio Como Real;
    Definir i Como Entero;
	
    Para i <- 1 Hasta 10 Hacer
        Escribir "Ingrese la nota del estudiante ", i, ":";
        Leer notas;
    FinPara
	
    suma <- 0;
    Para i <- 1 Hasta 10 Hacer
        suma <- suma + notas;
    FinPara
    
    promedio <- suma / 10;
	
    // Mostrar el promedio general
    Escribir "El promedio general de la sección es:", promedio;
	
FinAlgoritmo

