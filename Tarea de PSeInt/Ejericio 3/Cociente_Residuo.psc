Algoritmo Cociente_Residuo
	Definir A, B, cociente, residuo Como Entero;
	Escribir 'Ingrese el valor de A:';
	Leer A;
	Escribir 'Ingrese el valor de B:';
	Leer B;
	Si B<>0 Entonces
		cociente <- A/B;
		residuo <- A MOD B; // El cociente es la parte entera de la divisi�n
		Escribir 'El cociente de la divisi�n de A =', A, ' entre B =', B, ' es:', cociente; // El residuo es el resto de la divisi�n
		Escribir 'El residuo de la divisi�n de A =', A, ' entre B =', B, ' es:', residuo;
	SiNo
		Escribir 'Error: No se puede dividir por cero';
	FinSi
FinAlgoritmo
