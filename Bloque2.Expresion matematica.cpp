/*
Bloque 2: 1. Escriba la siguiente expresión como expresión en C++:

a/b + 1
*/

#include <iostream>

using namespace std;

int main ()
{
	float a,b, resultado = 0;
	
	cout << "Ingrese el valor de a: ",
	cin >> a;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	resultado = (a/b) + 1;
	
	cout.precision(3); //para que solo imprima 2 decimales
	cout << "\nEl resultado es: " << resultado << endl; 
	
	return 0;
}
