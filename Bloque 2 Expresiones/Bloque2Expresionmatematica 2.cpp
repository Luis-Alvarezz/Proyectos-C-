/*
Bloque 2: Ejercicio 2:
Escribe la siguiente expresion matemática como expresion en C++:

          a+b/c+d
*/

#include <iostream>

using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double d;
	double resultado1 = 0;
	double resultado2 = 0;
	double resultadoTotal = 0;
	
	cout << "Ingrese en valor de a: ";
	cin >> a;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	cout << "Ingrese el valor de c: ";
	cin >> c;
	
	cout << "Ingrese el valor de d: ";
	cin >> d;
	
	resultado1 =  a+b;
	resultado2 = c+d;
	resultadoTotal = resultado1 / resultado2;
	
	cout.precision(3);
	
	cout << "\nEl resultado final es: "<< resultadoTotal << endl;
	
	return 0;
}
