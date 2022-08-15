/*
   Bloque 4: Actividad 7: Escriba un programa que calcule el valor de: 1 + 2 + 3 ... +n.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n, suma = 0;
	
	cout << "Ingrese el numero de elementos: ";
	cin >> n;
	
	for(int i=1; i<=n; i++) // ¿Por que int i= 1 y no 0? por que es una suma de bastantes elementos pero comienza desde 1 hasta n.
	{
		suma = suma + i; // es suma + i por que i vale 1 por ende estara almacenando 1, luego el iterador vale 2 (1+2 +3 +4 + ... +n) guardamos en la variable suma
		                  // la suma total de todos los numeros hasta n 
	}
	
	cout << "La suma es: " << suma << endl;
			
	system("pause");
	return 0;
}

