Proceso CalculoIngresosVendedores
	//Pseudocodigo del ejercicio 4.15
    // Defino las variables
    Definir ventasBrutasEnQuetzales, porcentajeComision Como Real;
	
    // Mensaje de bienvenida
    Escribir "¡Bienvenido al programa de cálculo de ingresos en quetzales de vendedores!";
	
    // Utilizo un bucle mientras para recibir la entrada hasta que decida salir
    Mientras Verdadero Hacer
        // Solicito la entrada de las ventas brutas del vendedor en quetzales
        Escribir "Ingrese las ventas brutas en quetzales del vendedor (o ingrese un valor negativo para salir): ";
        Leer ventasBrutasEnQuetzales;
		
        // Verifico si el usuario desea salir
        Si ventasBrutasEnQuetzales < 0 Entonces
            
        FinSi
		
        // Calculo los ingresos del vendedor (ventas brutas * porcentaje de comisión)
        Definir ingresosEnQuetzales Como Real;
        ingresosEnQuetzales = ventasBrutasEnQuetzales * porcentajeComision;
		
        // Muestro los ingresos del vendedor en quetzales
        Escribir "Los ingresos del vendedor en quetzales son: Q", ingresosEnQuetzales;
    FinMientras
	
    // Mensaje de despedida
    Escribir "¡Hasta luego!";
FinProceso
