/*
	Bloque 4: Estructruras retetitivas. 
	EJERCICIO 12. 
		Escriba un programa que calcule el resultado de la siguiente expresion: 
		1-2 + 3-4 + 5-6...n
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int suma1 = 0, n, resta = 0, suma2 = 0; 
	
	std::cout << "\tPara la expresion 1-2 + 3-4 + 5-6...n..."<< std::endl;
	std::cout << "Introduce un numero: ";
	std::cin >> n;
	
	for(int i = 1; i <= n; i = i + 2)
	{
		suma1 = suma1 + i;			
	}
	for (int j = 2; j <= n; j = j + 2)
	{
		suma2 = suma2 + j;
	}
	
	resta = suma1 - suma2;
	
	std::cout << "\nEl resultado de la resta es: " << resta << std::endl;
	
	getch();
	return 0;
}

