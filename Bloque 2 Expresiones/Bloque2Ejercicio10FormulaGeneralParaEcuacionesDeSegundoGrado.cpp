/*
   Bloque2. Ejercicio 10:
   - Escribe un programa que calcule las soluciones de una ecuacion de segundo grado de la forma: ax^2 + bx + c = 0,
   teniendo en cuenta que:  x = -b +- raiz b^2 - 4ac / 2a
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c;
	float x1,x2; 
	
	cout << "Ingresa un valor para a: ";
	cin >> a;
	
	cout << "Ingresa un valor para b: ";
	cin >> b;
	
	cout << "Ingresa un valor para c: ";
	cin >> c; 
	
	x1 =  (-b +(sqrt(b*b - 4 * a * c)))/(2 * a);    
	x2 =  (-b -(sqrt(b*b - 4 * a * c)))/(2 * a);     
	
	cout << "\nEl valor de x1 es: " << x1 << endl;
	cout << "El valor de x2 es :" << x2 << endl;
	
	return 0;
}
