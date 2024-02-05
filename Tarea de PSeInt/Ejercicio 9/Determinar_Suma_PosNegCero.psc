Algoritmo Determinar_Suma_PosNegCero
	//Se define cuales son los valores que se quiere establecer de esta manera se tiene dos 
	Definir valor1, valor2, suma Como Real;
	Escribir 'Ingrese el primer valor:';
	Leer valor1;
	Escribir 'Ingrese el segundo valor:';
	Leer valor2;
	//La suma de los valores establecidos diferentes de 0 ya sea negativo y positivo 
	suma <- valor1+valor2;
	Si suma>0 Entonces
		Escribir 'La suma es positiva.';
	SiNo
		Si suma<0 Entonces
			Escribir 'La suma es negativa.';
		SiNo
			Escribir 'La suma es cero.';
		FinSi
	FinSi
FinAlgoritmo
