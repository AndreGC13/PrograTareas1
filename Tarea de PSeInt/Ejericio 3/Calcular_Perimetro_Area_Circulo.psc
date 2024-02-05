Algoritmo Calcular_Perimetro_Area_Circulo
	//Se define el radio de el numero dado 
	Definir radio, perimetro, area Como Real;
	Escribir 'Ingrese el radio del círculo:';
	Leer radio;
	//se establece que el perimetro se saca por la multiplicacion por PI por el radio, en dadop caso el valor sea negativo no se realizara y saltara un error 
	Si radio>0 Entonces
		perimetro <- 2*3.1416*radio;
		area <- 3.1416*radio*radio; // Valor aproximado de pi
		Escribir 'El perímetro del círculo es:', perimetro; // Valor aproximado de pi
		Escribir 'El área del círculo es:', area;
	SiNo
		Escribir 'Error: El radio debe ser un valor positivo.';
	FinSi
FinAlgoritmo
