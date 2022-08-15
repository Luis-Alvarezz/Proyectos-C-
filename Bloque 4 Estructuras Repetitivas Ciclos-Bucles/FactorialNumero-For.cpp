// 	Ejercicio 9: Esctriba un programa que calcule el valor de 1*2*3*4...*n (factorial)

// 5! = 5*4*3*2*!

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numero, factorial = 1; //siempre lleva 1 las operaciones iterativas, se pone 1 a la variable que va a guardar el resultado.
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	for(int i = 1; i <= numero; i++)	
	{
		factorial = factorial * i;
	}
	cout << "\nEl factorial es: " << factorial << endl;
	
	
	system("pause");
	return 0;
}
