/*
	Ejercicio 6:

	Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector
	cuyo valor equivale a la suma del resto de numeros del vector.
*/

#include <iostream>
#include <conio.h> //Libreria para usar la funcion getch(); y evitar que se cierre el ejecutable

using std::cout; using std::cin; using std::endl;

int main()
{                   //0,1,2,3,4
	int arreglo[5] = {1,2,3,4,10};
	int suma = 0;

	cout << "\n";

	suma = arreglo[0] + arreglo[1] + arreglo[2] + arreglo[3];
	cout << "Suma de los arreglos: ";
	cout << suma << endl;

	for(int i = 0; i < 5; i++) // For para imprimir la posicion del vector junto su numero
	{
		cout << "Posicion: " << i << "->" << arreglo[i] << endl;

			if(suma == arreglo[i])
		{
			cout << "La suma del vector/arreglo coincide con un numero" << endl;
		}
		if(suma != arreglo[i])
		{
			cout << "La suma del vector/arreglo NO coincide con un numero" << endl;
		}

	}
	getch();
	return 0;
}