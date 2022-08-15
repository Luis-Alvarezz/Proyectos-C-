/*
  Bloque 4. Ejercicio 4: Escribe un programa que tome cada 4 horas la temperatura del exterior, leyendola durante un periodo de 24 horas.
  Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia,la temperatura m�s alta y la m�s baja.
*/

#include <iostream>
#include <stdlib.h> //Libreria para 2 funciones: Para poner una "pausa" en el programa y "clarear" todo lo antes escrito. 

using namespace std;

int main()
{
	float temp, alta = 0, media = 0, baja = 999;
	
	for(int i=0; i<6; i++) //Bucle for, en el que se declara una variable tipo entera llamada i
	{
		cout << "Ingrese la temperatura: ";
		cin >> temp;
		media = media + temp; // se declara que media es igual a media + temp
		
			if(temp<baja) //si la temp es menor que baja, entonces...
			{
				baja = temp; // se declara que baja es igual a temp
			}
			
			if(temp>alta) //si temp es mayor que alta, entonces....
			{
				alta = temp;
			}
	}
	
	media = media / 6; //Se declara que media es igual a media dividido entre 6 
	cout << "\nLa temperatura media del dia fue: " << media << endl;
	cout << "\nLa temperatura mas baja del dia fue: " << baja << endl;
	cout << "\nLa temperatura mas alta del dia fue: " << alta << endl;
	return 0;
}
