/*
	Bloque 4: Estructuras repetitivas.
Ejercicio 10:

	Escriba un programa quee calcule el valor de: 1!+2!+3!+...+n! (Suma de factoriales)
*/

#include<iostream>

int main()
{
	int numero, factorial = 1, sumaFactorial = 0;
	
	std::cout << "Ingrese un numero para hacer suma de factoriales: ";
	std::cin >> numero;
	
	for(int i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
		sumaFactorial = sumaFactorial + factorial;
	}
	
	std::cout << "\nLa suma de factoriales es: " << sumaFactorial << std::endl;
		
	return 0;
}
