Proceso CalculadoraSinCero
	opcion=num1;
	opcion= num2, ;
	opcion=resultado;
	Real;
	
    Repetir
        Escribir("1. Suma");
        Escribir("2. Resta");
        Escribir("3. Multiplicaci�n");
        Escribir("4. Divisi�n");
        Escribir("5. Salir");
        Escribir("Ingrese la opci�n deseada:");
        Leer(opcion);
		
        Si opcion = 5 Entonces
            Escribir("�Hasta luego!");
        Sino
            num1 = 0;  // Inicializar num1 para entrar al bucle
            Mientras num1 = 0 Hacer
                Escribir("Ingrese el primer n�mero (distinto de 0):");
                Leer(num1);
                Si num1 = 0 Entonces
                    Escribir("Error. El n�mero debe ser distinto de 0.");
                FinSi;
            FinMientras;
			
            Escribir("Ingrese el segundo n�mero:");
            Leer(num2);
			
            Si opcion = 1 Entonces
                resultado = num1 + num2;
                Escribir("La suma es:", resultado);
				SinoSi opcion = 2 Entonces
                resultado = num1 - num2;
                Escribir("La resta es:", resultado);
				SinoSi opcion = 3 Entonces
                resultado = num1 * num2;
                Escribir("La multiplicaci�n es:", resultado);
				SinoSi opcion = 4 Entonces
                Si num2 <> 0 Entonces
                    resultado = num1 / num2;
                    Escribir("La divisi�n es:", resultado);
                Sino
                    Escribir("Error. No se puede dividir por 0.");
                FinSi;
            FinSi;
        FinSi;
		
    Hasta Que opcion = 5;
FinProceso
