/*
Ejercicio #3. Realice un programa que lea la entrada est�ndar los siguientes datos de una persona:

Edad: dato de tipo entero.
Sexo: dato del tipo car�cer
Altura: dato de tipo real
*/

#include <iostream>

using namespace std;

int main()
{
	int edad;
	char sexo[10]; /*char solo guarda un car�cter (1 sola letra)*/ 
	float altura;
	
	cout << "Ingrese la edad: ";
	cin >> edad;
	
	cout << "Ingrese su sexo: ";
	cin >> sexo; //la variable sexo es un dato de tipo cadena, y hay 2 formas de guardar una cadena.
	
	cout << "Ingrese la altura: ";
	cin >> altura;
	
	cout << "\nLa edad ingresada es: "<< edad << endl;
	cout << "El sexo es: "<< sexo << endl;
	cout << "La altura es: "<< altura << endl;
	
	return 0;
}
