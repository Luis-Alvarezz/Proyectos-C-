// Bñpque 4
// Ejercicio 13. Hacer un programa que realice la serie fibonacci -> 1 1 2 3 5 8 13 ..... n

#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
	int n,x = 0, y = 1, z = 1;
	
	cout << "Ingrese el numero de elementos: " << endl;
	cin >> n;
	
	cout << "1 ";
	for(int i = 1; i <= n; i++)
	{
		z = x + y;  // 0+1= 1 | 1+1= 2 | 1+2 = 3 | 2+3 = 5;
		cout << z << " "; // 1 | 2 | 3 | x
		
		x = y; //1 | 1(y aun no cambia su valor) | 2
		y = z;//1 | 2 | 3
		// Algoritmo definido de la serie fibonacci 
	}
	
	cout << "\n";
	system("pause");
	
	return 0;
}
