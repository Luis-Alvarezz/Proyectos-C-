

#include <iostream>

using namespace std;

int main ()
{
	float a,b;
	float aux;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	/*
	Ejemplo: 
	a = 23.6
	b = 45.9
	*/
	
	aux = a;
	a = b;
	b = aux;
	
	cout << "\nEl nuevo valor de a es: " << a << endl;
	cout << "El nuevo valor de b es: " << b << endl;
	
	
	return 0;
}
