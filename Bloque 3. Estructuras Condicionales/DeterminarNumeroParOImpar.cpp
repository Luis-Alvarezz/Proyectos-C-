/*
   Bloque 3. Actividad 3: Realice un programa que lea un valor entero y determine si se trata de un número par o impar
*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero%2==0) // lo que hace el programa es dividir el numero ingresado por el usuario entre 2 y lo que saca es el RESIDUO de la division
	{
		cout << "El numero es par: ";
	}
	else
	{
		cout << "El numero es impar: ";
	}
	return 0;
}

