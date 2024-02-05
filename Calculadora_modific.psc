Algoritmo Calculadora_modific
	Definir Durante,valor1, valor2, resultado como real;
	Definir contador como entero;
	Durante = 1;
	resultado = 0;
	contador = 0;
	
	Escribir "¡Bienvenido a la Calculadora!";
	
	Mientras Durante <> 0 Hacer
		Escribir "Ingrese el primer número";
		leer valor1;
		Escribir "Ingrese el segundo número";
		leer valor2;
		
		Escribir "";
		Escribir "1 = Suma";
		Escribir "2 = Resta";
		Escribir "3 = Multiplicación";
		Escribir "4 = División";
		Escribir "Ingrese cualquier otro número para salir";
		Escribir "";
		Escribir "¿Qué operación desea realizar?";
		leer opciones;
		
		Segun opciones Hacer
			1:
				resultado = valor1 + valor2;
				Escribir "La suma de la operación deseada es: ", valor1, " + ", valor2, " = ", resultado;
			2:
				resultado = valor1 - valor1;
				Escribir "La resta de la operación deseada es: ", valor1, " - ", valor2, " = ", resultado;
			3:
				resultado = valor1 * valor2;
				Escribir "La multiplicación de la operación deseada es: ", valor1, " x ", valor2, " = ", resultado;
			4:
				Si z <> 0 Entonces
					resultado = valor1 / valor2;
					Escribir "La división de la operación deseada es: ", valor1, " / ", valor2, " = ", resultado;
				SiNo
					Escribir "Error: No se puede dividir por cero";
				FinSi
			De Otro Modo:
				Escribir "Sistema finalizado";
				Durante = 0;
		Fin Segun  
		
		contador := contador + 1;
		Escribir "Operaciones realizadas hasta ahora: ", contador;
		Escribir "";
		
	FinMientras
FinAlgoritmo
