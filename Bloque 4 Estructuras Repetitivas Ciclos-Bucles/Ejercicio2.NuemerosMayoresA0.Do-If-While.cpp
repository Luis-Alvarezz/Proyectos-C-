/*
  Bloque 4. Ejercicio 2: Realice un programa que lea la entrada estándar de números hasta que se introduzca un cero. En ese momento el programa debe terminar
  y mostrar en la salida estándar el número de valores mayores que cero leídos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numero,contador=0;
	
	do
	{
	cout << "Ingrese un numero: ";
	cin >> numero;
	if(numero>0)
	{
		contador++; //aqui aumenta el conteo cada vez que el numero ingresado por el usuario sea mayor a 0.
	}
	
	
	}
	while(numero != 0); // si numero es diferente de 0...
	
	cout << "\nEl total de numero mayores a 0 ingresados fueron: " << contador;
	
	system("pause");
	return 0;
}
