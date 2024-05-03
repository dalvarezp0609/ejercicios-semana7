Algoritmo CalificacionesGrupo
	
    // Definir arreglo y variables
    Dimension calificaciones[8] ;
    Definir suma, promedio Como Real;
    Definir aprobados, reprobados Como Entero;
	
    Para i <- 1 Hasta 8 Hacer
        Escribir "Ingrese la calificación del estudiante ", i, ":";
        Leer calificaciones[i];
    FinPara

    aprobados <- 0;
    reprobados <- 0;
    suma <- 0;
	
    Para i <- 1 Hasta 8 Hacer
        suma <- suma + calificaciones[i];
    FinPara
	
    promedio <- suma / 8;
	
    Para i <- 1 Hasta 8 Hacer
        Si calificaciones[i] >= 60 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
    FinPara
	
    // resultados
    Escribir "Cantidad de alumnos aprobados:", aprobados;
    Escribir "Cantidad de alumnos reprobados:", reprobados;
    Escribir "Promedio general del grupo:", promedio;
	
FinAlgoritmo
