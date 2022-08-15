#include <iostream>

using namespace std;

int main()
{
	int numero, valor = 8;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero != valor)
	{
		cout << "El numero es diferente de 8";
	}
	else
	{
		cout << "El numero es correcto, es 8!!";
	}
	return 0;
}
