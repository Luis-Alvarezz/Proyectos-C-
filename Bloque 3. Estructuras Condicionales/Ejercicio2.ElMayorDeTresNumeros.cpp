/*
  Bloque 3. Ejercicio 2: Escriba un programa que lea tres numeros y determine cuál es el mayor de ellos. 
*/

#include <iostream>

using namespace std;

int main()
{
	int numero1, numero2, numero3;
	
	cout << "Ingrese el valor del primer numero: ";
	cin >> numero1;
	
	cout << "Ingrese el valor del segundo numero: ";
	cin >> numero2;
	
	cout << "Ingrese el valor del tercer numero: ";
	cin >> numero3;
	
	// ejemplo: 100, 20, 15
	if (numero1 > numero2 && numero1 > numero3)// se lee: si numero1 es mayor a numero2 pero tambien numero1 es mayor que numero3
	{
		cout << "El mayor es: " << numero1 << endl;
	}
	// ejemplo 2: 20, 100, 15
	else if (numero2 > numero1 && numero2 > numero3)
	{
		cout << "El mayor es: " << numero2 << endl;
	}
	//ejemplo 3: 20, 15, 100
	else if(numero3 > numero1 && numero3 > numero2)
	{
		cout << "El mayor es: " << numero3 << endl;	
	}
	//ejemplo 4: 100, 100, 20
	else if( numero1 == numero2 && numero1 > numero3)
	{
		cout << "El mayor es: " << numero1 << endl; //o tambien puede ser mayor el numero2
	}
	//ejemplo 5: 100, 20, 100
	else if (numero1 > numero2 && numero1 == numero3)
	{
		cout << "El mayor es: " << numero1 << endl;
	}
	//ejemplo 6: 20, 100, 100
	else if(numero2 > numero1 && numero2 == numero3)
	{
		cout << "El mayor es: " << numero2 << endl;
	}
	// 100, 100, 100
	else
	{
	   cout << "los tres numeros son iguales. " << endl;	
	}	

	return 0;
}
