/*
  Actividad 5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. El programa 
  debe entragar la suma de los valores mayores a 0 introducidos
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numero, suma = 0;
	
	do
	{
		cout << "Ingrese un numero: ";
		cin >> numero;
			if (numero > 0)
			{
			    suma = suma + numero;
			}
	}while(numero<20 || numero > 30 && numero != 0); // si el usuario pone un numero menor a 20, o mayor a 30 el programa se ejecutara... hasta que se rompa
	                                               // el while poniendo 21,22,23,24,25,26,27,28,29,30.  && es un ademas el programa el numero dede ser dif de 0.
	cout << "La suma es: " << suma << endl;                                            
	
	system("pause");
	return 0;
}
