/* Operaciones Aritm�ticas
Ejercicio 2:
- Escribe un programa que lea de la entrada est�ndar el precio de un producto y muestre en la salida est�ndar el precio del producto
al alplicarle el IVA
*/

#include <iostream>

using namespace std;

int main()
{
	float precio, IVA, precioTotal;
	
	cout << "Ingrese el precio del producto: ";
	cin >> precio;	
	
	IVA = precio * 0.16;
	precioTotal = precio + IVA;
	
	cout << "\nEl precio final del producto con IVA es: " << precioTotal;
	return 0;
}
