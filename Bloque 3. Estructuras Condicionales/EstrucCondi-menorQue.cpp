	/*
	  Bloque 3. Condicionales. If-Else, con menor que 
	*/

#include <iostream>

using namespace std;

int main()
{
	int numero, valor = 10;
	
	cout << "Ingresa un numero: ";
	cin >> numero;
	
	if(numero < valor)
	{
		cout << "El numero es menor que 10";
	}
	else
	{
		cout << "El numero es mayor que 10";
	}
	return 0;
}
