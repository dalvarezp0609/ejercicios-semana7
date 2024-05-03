Algoritmo ProductoPunto
	
    
    Definir long Como Entero;
    Escribir "Ingrese la longitud de los vectores:";
    Leer long;
	
    // Definir los vectores
    Dimension vector1[longitud], vector2[longitud]
    Definir i, productoPunto Como Real;
	
    Escribir "Ingrese los elementos del primer vector:";
    Para i <- 1 Hasta longitud Hacer;
        Escribir "Elemento ", i, ":";
        Leer vector1[i];
    FinPara
	
    Escribir "Ingrese los elementos del segundo vector:";
    Para i <- 1 Hasta longitud Hacer;
        Escribir "Elemento ", i, ":";
        Leer vector2[i];
    FinPara
	
    productoPunto <- 0;
    Para i <- 1 Hasta longitud Hacer;
        productoPunto <- productoPunto + (vector1[i] * vector2[i]);
    FinPara
	
    // Mostrar el resultado
    Escribir "El producto punto de los dos vectores es:", productoPunto;
	
FinAlgoritmo


