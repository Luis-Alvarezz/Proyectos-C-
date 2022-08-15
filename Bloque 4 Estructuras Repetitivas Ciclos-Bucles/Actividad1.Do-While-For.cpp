/*
  Bloque 4. Actividad 1: realice un programa que solocite la entrada estándar un numero del 1 al 10, y muestre en la salida estandar su tabla de multiplicar
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numero = 0;
	
	do
	{
		if(numero > 10)
		{
			cout << "\nEl numero ingresado es invalido.";
		}
     	cout << "\nIngrese un numero: ";
		cin >> numero;
	}
	while(numero < 1 || numero > 10);  // || significa ó
	
	for ( int i=1; i<=20; i++)
	{
		cout << numero << " * " << i <<  " = " << numero*i<<endl;
	}
	
	system("pause");
	return 0;
}
