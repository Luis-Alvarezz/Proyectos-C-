/*
  Bloque 3. Condicionales. If-Else, con mayor que + = 
*/

#include <iostream>

using namespace std;

int main()
{
	int numero, dato = 5;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if(numero >= dato)
	{
		cout << "El numero es mayor o igual a 5";
	}
	else
	{
		cout << "El numero es menor a 5";
	}
	return 0;
}

