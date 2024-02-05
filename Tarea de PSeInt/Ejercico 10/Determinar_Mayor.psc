Algoritmo Determinar_Mayor
	//Realizar esto de manera que se tenga en cuenta que lo que se puede tener es un numero mayor de otro 
	Definir a, b Como Real;
	Escribir 'Ingrese el valor de a:';
	Leer a;
	Escribir 'Ingrese el valor de b:';
	Leer b;
	//Se establece la operacion a realizar mediante la cual se tiene en cuenta que el numero a o numero b es mayor de a o b en este caso se determinara cual de los dos establecidos es mayor 
	Si a>b Entonces
		Escribir 'El mayor número es a:', a;
	SiNo
		Si b>a Entonces
			Escribir 'El mayor número es b:', b;
		SiNo
			Escribir 'Los números son iguales';
		FinSi
	FinSi
FinAlgoritmo
