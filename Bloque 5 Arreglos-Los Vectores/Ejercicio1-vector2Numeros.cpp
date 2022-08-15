/*
        

    Ejercicio 1: Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos
*/

#include <iostream>
#include <conio.h> // Para utilizar la funcion getch y evitar que el ejecutable del programa se cierre.

using std::cout; using std::cin; using std::endl;

int main()
{
    int numeros[5] = {1,2,3,4,5};
    int suma = 0; // Se almacenara el resultado de la suma de todos los elementos del vector.

    for (int i = 0; i < 5; i++)
    {
        suma = suma + numeros[i]; // por que numeros[i]?? por que el i va cambiando, tomara el valor de todos los numeros  que se pusieron en el array
    }
    cout << "La suma de los elementos del vector es: " << suma << endl;

    getch();
    return 0;
}
