/*
  Bloque 3. Condicionales. If-Else, con mayor que y menor que 
*/

#include <iostream>

using namespace std;

int main()
{
	int numero, dato = 8;
	
	cout << "Ingrese un numero: ";
	cin >> numero; 
	
	if(numero > dato)
	{
		cout << "El numero es mayor a 8";
	}
	else
	{
		cout << "el numero es menor a 5";
	}
	return 0;
}
