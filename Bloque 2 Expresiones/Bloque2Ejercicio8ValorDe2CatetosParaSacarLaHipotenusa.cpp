/*
  Blque 2. Actividad 8:
  Escribe un programa que lea la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.
*/

#include <iostream>
#include <math.h> //libreria matematica
using namespace std;

int main()
{
	float hipotenusa, catetoOpuesto, catetoAdyacente;
	
	cout << "Ingrese el valor de cateto Opuesto: ";
	cin >> catetoOpuesto;
	
	cout << "Ingrese el valor del cateto Adyacente: ";
	cin >> catetoAdyacente;
	
	hipotenusa = sqrt (pow(catetoOpuesto,2) + pow (catetoAdyacente,2)); //catetoOpuesto,2 esignifica cateto Opuesto al cuadrado.
	/*
	   a traves del teorema de pitágoras: vcateto Opuesto al 2 + cateto Adyacente al 2!!!
	   sqrt significa raiz cuadrada de simbolo v
	   la funcion pow(dato x,2) ayuda a que el dato x que ingrese el usuario se eleve al cuadrado.
	*/
	
	cout << "\nLa hipotenusa es: " << hipotenusa << endl;
	
	
	return 0;
}
