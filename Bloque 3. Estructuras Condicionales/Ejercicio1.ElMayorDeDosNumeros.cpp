/*
  Bloque 3.- 1. Escriba un programa que lea dos números y determine cual de ellos es el mayor.
*/

#include <iostream>
 using namespace std;
 
 int main()
 {	
 	int numero1,numero2;
 	
 	cout << "Ingrese el primer numero: ";
 	cin >> numero1;                  //tambien puede guardarse: cout << "Ingrese 2 numeros: ";
 	                                 // cin >> numero1 >> numero2;
 	cout << "Ingrese el segundo numero: ";
 	cin >> numero2;
 	
 	if (numero1 == numero2)		
 	{
 		cout << "Ambos numeros son iguales";
    }
    else
    {
	
 	if(numero1 > numero2)
 	 {
 		cout << "El mayor es: " << numero1; 
	 }
	 else
	 {
	 	cout << "El mayor es: " << numero2;
	 }
    }
 	return 0;
 }
