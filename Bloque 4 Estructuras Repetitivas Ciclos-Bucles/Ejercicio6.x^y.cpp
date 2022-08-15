/*
  Bloque 4. Ejercicio 6:
  Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la funcion pow.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int x, y, operacion = 1;
	
	cout << "Ingrese el valor de x: ";
	cin >> x;
	
	cout << "Ingresa el valor a lo que quiere elevar x: ";
	cin >> y;
	
    for(int i = 1; i<=y; i++)
    {
    	operacion = operacion * x;
	}

	cout << "El resultado de x^y es: " << operacion << endl; 
	
	system("pause");
	return 0;
}
