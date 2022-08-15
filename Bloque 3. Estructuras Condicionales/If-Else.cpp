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
                   CON OPERADOR DE IGUALDAD 
*/

#include <iostream>

using namespace std;

int main()   
{
	int numero, dato = 5; // el = es de asignacion 
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero == dato)  // el == es la igualdad, es decir EL OPERADOR DE IGUALDAD
	{
		cout << "El numero es 5";
	}
	else
	{
		cout << "El numero es diferente de 5";
	}
	
	return 0;
}
