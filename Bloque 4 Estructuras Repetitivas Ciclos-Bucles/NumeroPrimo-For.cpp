#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "Ingrese un numero a desear si es primo: ";
	cin >> numero;
	bool esPrimo = true;
	for(int i = 2; i<numero-1; i++)
	{
		if (numero % i == 0)
		{
			esPrimo = false;
			break;
		}
		
	}
	if(esPrimo)
	{
		cout << " El numero :" << numero << " Es primo!" ;
	}
	else
	cout << " El numero: " << numero << " No es primo! ";

	
	return 0;
}

//hacer este mismo programa con un operador ternario //reemplazar linea 21 a la 26
