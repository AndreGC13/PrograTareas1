Algoritmo Calcular_Salario_Semanal
	//Se define que lo que se quiere tomar en cuenta
	Definir horas_trabajadas, salario_por_hora, salario_semanal Como Real;
	Escribir 'Ingrese las horas trabajadas por el empleado durante la semana:';
	Leer horas_trabajadas;
	Escribir 'Ingrese el salario por hora del empleado:';
	Leer salario_por_hora;
	//se establece la operacion a realizar por medio de horas trabajadas
	Si horas_trabajadas>=0 Y salario_por_hora>=0 Entonces
		salario_semanal <- horas_trabajadas*salario_por_hora;
		Escribir 'El salario semanal es:', salario_semanal;
	SiNo
		Escribir 'Error: Las horas trabajadas y el salario por hora deben ser valores no negativos';
	FinSi
FinAlgoritmo
