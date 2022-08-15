/*
  Bloque 4. Actividad 3: Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros enteros mayores que cero
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int suma = 0, cuadrado;
	
	for(int i = 1; i<=10; i++)
		{
			cuadrado = i * i; // i va iterando es decir v a valiendo 1, 2,3..se pregunta el programa ¿Cual es el cuadrado de 1? entonces hara i * i es decir 1*1.
		
			suma = suma + cuadrado; // tambien puede ir suma += cuadrado.
	 	}
		 
	cout << "\nEl resultado de la suma de los 10 primeros cuadrados es: " << suma << endl;	 
	 
	getch();
	return 0;
}
