Algoritmo Calcular_Promedio
	Definir N, suma, numero, promedio Como Real;
	Definir contador Como Entero;
	Escribir 'Ingrese la cantidad de n�meros (N) para calcular el promedio:';
	Leer N;
	Si N>0 Entonces
		suma <- 0;
		Para contador<-1 Hasta N Hacer
			Escribir 'Ingrese el n�mero ', contador, ':';
			Leer numero;
			suma <- suma+numero;
		FinPara
		promedio <- suma/N;
		Escribir 'El promedio de los ', N, ' n�meros ingresados es:', promedio;
	SiNo
		Escribir 'Error: Debe ingresar un valor positivo para N.';
	FinSi
FinAlgoritmo
