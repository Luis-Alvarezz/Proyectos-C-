/*
  Bloque 3. Actividad 7: Escriba un programa que solicite una edad (un entero) e indique en la salida est�ndar si la edad introducida est� en el rango [18 - 25 a�os].
*/

#include <iostream>

using namespace std;

int main()
{
	int edad;
	
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	//rango de 18-25 es decir, 18-19-20-21-22-23-24-25
	if(edad>=18 && edad<=25)
	{
		cout << "Su edad esta en el rango de 18-25, usted puso: " << edad << endl;
	}
	else
	{
		cout << "Su edad NO esta en el rango de 18-25, usted puso: " << edad << endl;
	}
	return 0;
}

