Algoritmo calculadora
	;
	
	Escribir "Seleccione la operacion:";
	Escribir "1: + ";
	Escribir "2: - ";
	Escribir "3: * ";
	Escribir "4: : ";
	
	Leer opcion;
	
	Definir num_1, num_2, resultado Como Real;

	Escribir "Escribí tu primer numero: ";
	Leer num_1;
	Escribir "Escribí tu segundo numero: ";
	Leer num_2;
	
	Segun opcion Hacer
		1:
			resultado <- num_1 + num_2;
		2:
			resultado <- num_1 - num_2;
		3:
			resultado <- num_1 * num_2;
		4:
			resultado <- num_1 % num_2;
		De Otro Modo:
			Escribir "ERROR";
	FinSegun
	
	Escribir "El resultado es "; 
	Leer resultado;
	
FinAlgoritmo
