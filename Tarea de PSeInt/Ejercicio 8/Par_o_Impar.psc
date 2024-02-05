Algoritmo Par_o_Impar
	//Se define la varible en este caso para detectar si el numero es impar o par 
	Definir numero Como Entero;
	Escribir 'Ingrese un número:';
	Leer numero;
	//se establece un rango entre un numero par e impar para poder establecer el ingreso de los numeros que sea y determinar si son pares o impares
	Si numero MOD 2==0 Entonces
		Escribir 'El número ingresado es par.';
	SiNo
		Escribir 'El número ingresado es impar.';
	FinSi
FinAlgoritmo
