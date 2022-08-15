/*
  Bloque . "Estructuras Condicionales"
  
  La sentencia if
  
  if(condicion)
{
   instruccion 1;
}
else
{
  instruccion 2;
}
                   CON OPERADOR DE DIFERENCIA
*/

#include <iostream>

using namespace std;

int main()
{
	int numero, dato = 5;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero != dato) // se lee: numero es diferente de dato si es asi... entra el if
	{
		cout << "El numero no es 5";
	}
	else
	{
		cout << "El numero es 5";
	}
	
	return 0;
}
