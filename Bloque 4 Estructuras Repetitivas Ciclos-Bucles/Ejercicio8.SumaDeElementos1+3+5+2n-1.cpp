/*
  Bloque 4. Ejercicio 8: Escriba un programa que calcule el valor de 1 + 3 + 5 + ... +2n-1.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n, suma = 0;
	
	cout << "Ingrese el numero de elementos: "; // es decir, si el usuario ingresa 5, sumara 1 + 3 + 5
	cin >> n;
	
		for(int i = 1; i<=n-1; i+2)
		{
			suma = suma + i;
		}
		cout << "\nLa suma de los elementos es:" << suma << endl;
	return 0;
}
