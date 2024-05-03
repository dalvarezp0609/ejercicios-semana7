Algoritmo SumaNumerosPares
	
    Definir suma Como Entero;
    suma <- 0;
	
    Para numero <- 100 Hasta 200 Hacer
        Si numero MOD 2 = 0 Entonces
            
            suma <- suma + numero;
        FinSi
    FinPara
    
    Escribir "La suma de los números pares entre 100 y 200 es:", suma;
	
FinAlgoritmo

