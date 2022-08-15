/*
  Bloque 3. Ejercicio 6: Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter si el caracter es 
  una vocal minúscula, es una vocal mayúscula o no es una vocal
*/

#include <iostream>

using namespace std;

int main()
{
	char letra;
	
	cout << "Ingrese una letra: ";
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
	case 'A':
		cout << "Es una vocal Mayuscula. ";
		break;
	case 'E':
		cout << "Es una vocal Mayuscula. ";
		break;
	case 'I':
		cout << "Es una vocal Mayuscula. ";
		break;
	case 'O':
		cout << "Es una vocal Mayuscula. ";
		break;
	case 'U':
		cout << "Es una vocal Mayuscula. ";
		break;
	default:
		cout << "No es una vocal!!! ";
		break;
	}
	return 0;
}

