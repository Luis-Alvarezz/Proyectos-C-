#include <iostream>

using namespace std;

int main()
{
	int numero, valor = 10;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero == valor)
	{
		cout << "El numero es correcto, es 10";
	}	
	else
	{
		cout << "El numero es diferente de 10";
	}
	return 0;
}
