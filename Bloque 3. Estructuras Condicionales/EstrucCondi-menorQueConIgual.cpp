/*
  Bloque 3. Condicionales. If-Else, con menor que + igual 
*/
#include <iostream>

using namespace std;

int main()
{
	int numero,valor = 15;
	
	cout << "Ingresa un numero: ";
	cin >> numero;
	
	if(numero <= valor)
	{
		cout << "El numero que ingresaste es menor o igual que 15";
	}
	else
	{
		cout << "El numero que ingresaste es mayor que 15";
	}
	return 0; 	
}

