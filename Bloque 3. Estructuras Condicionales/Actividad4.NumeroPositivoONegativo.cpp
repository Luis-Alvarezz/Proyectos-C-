/*
  Bloque 3. Actividad 4: Comprobar si un numero digitado por el usuario es posotivo o negativo
*/

#include <iostream>

using namespace std;

int main()
{
    float numero;
	
	cout << "Ingrese un numero: ";
	cin >> numero;

	if (numero > 0)
	{
		cout << "El numero es positivo." << endl;
	}	
	else
	{
		cout << "El numero es negativo." << endl;
	}
	return 0;
}
