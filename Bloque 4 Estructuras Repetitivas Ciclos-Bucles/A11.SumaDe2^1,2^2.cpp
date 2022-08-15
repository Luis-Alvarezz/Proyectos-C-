/*
	Bloque 4: Estructruras retetitivas. 
	ACTIVIDAD 11. 
		Escriba un programa que calcule el valor de: 2^1 + 2^2 + 2^3+...+2´n
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
int main()
{
	int suma = 0, elevacion = 0, n;
	
	std::cout << "Ingrese el numero de elementos a sumar: ";
	std::cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		elevacion = pow(2,i);
		suma = suma + elevacion; 
	}
	
	std::cout << "\nLa suma total es: " << suma << std::endl;
	
	system("pause");
	return 0;
}

