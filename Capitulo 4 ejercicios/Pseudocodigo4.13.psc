Algoritmo CalculoRendimientoCombustible
	//Pseudocodigo del ejercicio 4.13 capitulo 4
    // Defino las variables para la entrada
    Definir distanciaRecorrida, litrosConsumidos Como Real;
    
    // Defino las variables para el control del bucle y el resultado acumulado
    Definir continuar, contador Como Entero;
    Definir sumaDistanciaRecorrida, sumaLitrosConsumidos, rendimientoKilometrosPorLitro Como Real;
	
    // Inicializo las variables
    continuar <- 1;
    contador <- 0;
    sumaDistanciaRecorrida <- 0.0;
    sumaLitrosConsumidos <- 0.0;
	
    Escribir '¡Bienvenido al programa de cálculo de rendimiento de combustible!';
	
    Mientras continuar <> 0 Hacer
        Escribir 'Ingrese la distancia recorrida en kilómetros (o ingrese un valor negativo para salir): ';
        Leer distanciaRecorrida;
		
        Si distanciaRecorrida < 0 Entonces
            continuar <- 0; // Establece la condición de salida
        Sino
            Escribir 'Ingrese la cantidad de litros de combustible consumidos: ';
            Leer litrosConsumidos;
			
            // Actualizo las sumas
            sumaDistanciaRecorrida <- sumaDistanciaRecorrida + distanciaRecorrida;
            sumaLitrosConsumidos <- sumaLitrosConsumidos + litrosConsumidos;
			
            // Calculo el rendimiento para este reabastecimiento
            rendimientoKilometrosPorLitro <- distanciaRecorrida / litrosConsumidos;
            Escribir 'Rendimiento en este reabastecimiento: ', rendimientoKilometrosPorLitro, ' km por litro';
			
            // Calculo el rendimiento total hasta este punto
            rendimientoTotalKilometrosPorLitro <- sumaDistanciaRecorrida / sumaLitrosConsumidos;
            Escribir 'Rendimiento total hasta este punto: ', rendimientoTotalKilometrosPorLitro, ' km por litro';
			
            contador <- contador + 1;
            Escribir 'Operaciones realizadas hasta ahora: ', contador;
            Escribir '';
        FinSi
    FinMientras
	
    Escribir '¡Hasta luego!';
FinAlgoritmo

