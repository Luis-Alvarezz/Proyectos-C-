/*
  Bloque 3. Actividad 5: Escriba un programa que lea la entrada est�ndar un car�cter e indique en la salida est�ndar si el car�cter es una vocal min�scula o no.
*/

#include <iostream>

using namespace std;

int main()
{
	char letra;
	
	cout << "Ingresa una letra: ";
	cin >> letra;
	
	switch(letra)
	{
		case 'a':
			cout << "Es una vocal minuscula. ";
			break;
		case 'e':
			cout << "Es una vocal minuscula. ";
			break;
		case 'i':
			cout << "Es una vocal minuscula. ";
			break;
		case 'o':
			cout << "Es una vocal minuscula. ";
			break;
		case 'u':
			cout << "Es una vocal minuscula. ";
			break;
		default: 
		cout << "No es una vocal minuscula. ";
		break;
	}
	return 0;	
}
