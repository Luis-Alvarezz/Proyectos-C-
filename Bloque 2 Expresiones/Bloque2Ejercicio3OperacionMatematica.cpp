/*
 Bloque 2. Problema 3:
 Escribe la siguiente expresion matemática en C++:
 
            a+b/c / d+e/f
*/

#include <iostream>

using namespace std;

int main()
{
		float a,b,c,d,e,f;
		float resultado = 0;
		
		cout << "Ingrese el valor de a: ";
		cin >> a;
		
		cout << "Ingresa el valor de b: ";
		cin >> b;
		
		cout << "Ingresa el valor de c: ";
		cin >> c;
		
		cout << "Ingresa el valor de d: ";
		cin >> d;
		
		cout << "Ingrese el valor de e: ";
		cin >> e;
		
		cout << "Ingrese el valor de f: ";
		cin >> f;
		
		resultado = (a+(b/c))/(d+(e/f));
		
		cout << "\nEl resultado es: "<< resultado << endl;
		 
	
	return 0;
}
