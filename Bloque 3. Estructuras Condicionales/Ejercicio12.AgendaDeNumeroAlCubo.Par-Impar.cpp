/*
  Bloque 3. Ejercicio 12: Hacer un menu que cosidere las siguientes opciones:
  case 1: cubo del numero.
  case 2: Número par o impar
  case 3: salir
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int opcion,numero, cubo;
	
	cout << "\t Bienvenido al menu" << endl;
	cout << "1. Cubo de un numero" << endl;
	cout << "2. Numero Par o Impar" << endl;
	cout << "3. Salir" << endl;
	cout << "Por favor ingrese una opcion: " << endl;
	cin >> opcion;
	
	switch(opcion)
	{
		case 1: 
		cout << "\nIntroduca un numero: " << endl;
		cin >> numero; 
		
		cubo = (pow(numero,3));
		cout << "El valor del numero es: " << cubo;
		break;
		  
		case 2:
			cout << "Ingrese un numero: " << endl;
			cin >> numero;
			
			if(numero%2==0)
			{
				cout << "\nEl numero es par";
			}
			else
			{
				cout << "\nEl numero es impar";
			}
			break;
		case 3:
			cout << "Presione cualquier tecla para salir. ";
			break;
	}
	
	return 0;
}

