/* 
   Bloque 3. Ejercicio10: Mostrar los meses del año, pidiendole al usuario un numero entre (1-12), y mostrar correctamente al mes que corresponde.
*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "\nConforme ingreses un numero, sera correspondido a un mes del año" << endl;
	cout << "\nIngresa un numero (del 1 al 12): ";	
	cin >> numero;
	
	switch(numero)
	{
		case 1:
			cout << "\nEl mes es Enero";
			break;
		case 2:
			cout << "\nEl mes es Febrero";
			break;
		case 3:
			cout << "\nEl mes es Marzo";
			break;
		case 4:
			cout << "\nEl mes es Abril";
			break;
		case 5:
			cout << "\nEl mes es Mayo";
			break;
		case 6:
			cout << "\nEl mes es Junio";
			break;
		case 7:
			cout << "\nEl mes es Julio";
			break;
		case 8:
			cout << "\nEl mes es Agosto";
			break;
		case 9:
			cout << "\nEl mes Septiembre";
			break;
		case 10:
			cout << "\nEl mes es Octubre";
			break;
		case 11:
			cout << "\nEl mes es Noviembre";
			break;
		case 12:
			cout << "\nEl mes es Diciembre";
			break;
		default:
			cout << "\nSolo hay 12 meses;)";
			break;
	}
	
	return 0;
}
