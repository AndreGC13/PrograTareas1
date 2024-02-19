Proceso DeterminarMayorDeSerie
	//Pseudocogigo del Ejericicio4.17
    // Defino las variables
    Definir contador, numero, mayor Como Entero;
	
    // Mensaje de bienvenida
    Escribir "�Bienvenido al programa para determinar el mayor n�mero de una serie!";
	
    // Inicializo el contador y la variable mayor
    contador = 1;
    mayor = 0;
	
    // Utilizo un bucle mientras para recibir la entrada y determinar el mayor
    Mientras contador <= 10 Hacer
        // Solicito la entrada del n�mero
        Escribir "Ingrese el n�mero ", contador, ": ";
        Leer numero;
		
        // Verifico si el n�mero ingresado es mayor que el actual valor de 'mayor'
        Si numero > mayor Entonces
            mayor = numero;
        FinSi
		
        // Incremento el contador
        contador = contador + 1;
    FinMientras
	
    // Muestro el resultado
    Escribir "El mayor n�mero de la serie es: ", mayor;
	
    // Mensaje de despedida
    Escribir "�Gracias por usar el programa! �Hasta luego!";
FinProceso
