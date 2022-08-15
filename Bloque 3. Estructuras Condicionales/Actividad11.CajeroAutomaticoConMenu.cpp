/*
  Bloque 3. Actividad 11: Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares 
*/

#include <iostream>

using namespace std;

int main()
{
	int saldoinicial = 1000, opcion;
	float dineroextra, saldo = 0, retiro;
	
	cout << "\tBienvenido a su cajero automatico. " << endl; // /t se e carga de centrar el texto y dejar un salto de lina!
	cout << "1. Ingresar dinero en cuenta" << endl;
	cout << "2. Retirar el dinero de la cuenta" << endl;
	cout << "3. Salir" << endl;
	cout << "Elija la opcion que desee: " << endl;
	cin >> opcion;
	
	switch(opcion)
	{
		case 1:
			cout << "Ingrese la cantidad de dinero que desea ingresar: ";
			cin >> dineroextra;
			saldo = saldoinicial + dineroextra;
			cout << "Dinero en total: " << saldo << endl;
			break;	
		case 2:
			cout << "Ingrese la cantidad de dinero que va a retirar: ";
			cin >> retiro;
			if(retiro > saldoinicial)
			{
				cout << "No tiene esa cantidad de dinero!! ";
			}
			else
			{
				saldo = saldoinicial - retiro;
				cout << "Dinero actual: " << saldo;
			}
		case 3:
			break;
	}
	
	return 0;
}
