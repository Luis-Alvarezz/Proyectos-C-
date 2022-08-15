/*
  Bloque 2. Actividad 7: 
  - La calificacion final de un estudiante es la media ponderada en tres notas:
    La notas de las practicas que cuenta el 30% del total, la nota teorica que cuenta un 60% y la nota de participacion que cuenta el 10% restante.-
    Escribe un programa que lea la entrada estándar las tres notas de un alumno y escriba la salida estándar su nota final.
*/

#include <iostream>

using namespace std;

int main()
{
	float practica, teorica, participacion;
	float notaFinal;
	
	cout << "Ingrese la calificacion de practica: ";
	cin >> practica;
	
	cout << "Ingrese la calificacion teorica: ";
	cin >> teorica;
	
	cout << "Ingrese la calificacion de la participacion: ";
	cin >> participacion;
	
	practica = practica * 0.30;  // Esto es igual a poner practica *= 0.30; 
	teorica = teorica * 0.60;
	participacion = participacion * 0.10;
	
	notaFinal = practica + teorica + participacion;
	
	cout << "\nLa nota final del alumno es: " << notaFinal << endl;
	
	
	
	return 0;
}
