Algoritmo Calcular_Perimetro_Area_Circulo
	//Se define el radio de el numero dado 
	Definir radio, perimetro, area Como Real;
	Escribir 'Ingrese el radio del c�rculo:';
	Leer radio;
	//se establece que el perimetro se saca por la multiplicacion por PI por el radio, en dadop caso el valor sea negativo no se realizara y saltara un error 
	Si radio>0 Entonces
		perimetro <- 2*3.1416*radio;
		area <- 3.1416*radio*radio; // Valor aproximado de pi
		Escribir 'El per�metro del c�rculo es:', perimetro; // Valor aproximado de pi
		Escribir 'El �rea del c�rculo es:', area;
	SiNo
		Escribir 'Error: El radio debe ser un valor positivo.';
	FinSi
FinAlgoritmo
