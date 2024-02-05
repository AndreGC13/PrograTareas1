Proceso CalculadoraSinCero
	opcion=num1;
	opcion= num2, ;
	opcion=resultado;
	Real;
	
    Repetir
        Escribir("1. Suma");
        Escribir("2. Resta");
        Escribir("3. Multiplicación");
        Escribir("4. División");
        Escribir("5. Salir");
        Escribir("Ingrese la opción deseada:");
        Leer(opcion);
		
        Si opcion = 5 Entonces
            Escribir("¡Hasta luego!");
        Sino
            num1 = 0;  // Inicializar num1 para entrar al bucle
            Mientras num1 = 0 Hacer
                Escribir("Ingrese el primer número (distinto de 0):");
                Leer(num1);
                Si num1 = 0 Entonces
                    Escribir("Error. El número debe ser distinto de 0.");
                FinSi;
            FinMientras;
			
            Escribir("Ingrese el segundo número:");
            Leer(num2);
			
            Si opcion = 1 Entonces
                resultado = num1 + num2;
                Escribir("La suma es:", resultado);
				SinoSi opcion = 2 Entonces
                resultado = num1 - num2;
                Escribir("La resta es:", resultado);
				SinoSi opcion = 3 Entonces
                resultado = num1 * num2;
                Escribir("La multiplicación es:", resultado);
				SinoSi opcion = 4 Entonces
                Si num2 <> 0 Entonces
                    resultado = num1 / num2;
                    Escribir("La división es:", resultado);
                Sino
                    Escribir("Error. No se puede dividir por 0.");
                FinSi;
            FinSi;
        FinSi;
		
    Hasta Que opcion = 5;
FinProceso
