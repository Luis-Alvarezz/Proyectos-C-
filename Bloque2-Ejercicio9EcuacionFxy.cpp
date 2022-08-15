/*
   Bloque 2. Ejercicio 9:
   - Realice un programa que calcule el valor que toma la siguiente funcion para uno de los valores dados de x, y:
   
   f(x,y) = raiz x / y elevado al 2 - 1
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x, y, resultado = 0;
	
	cout << "Ingrese el valor de x: ";
	cin >> x;
	
	cout << "Ingrese el valor de y: ";
	cin >> y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout << "El resultado de la ecucion es: " << resultado << endl;
	
	return 0;
}
