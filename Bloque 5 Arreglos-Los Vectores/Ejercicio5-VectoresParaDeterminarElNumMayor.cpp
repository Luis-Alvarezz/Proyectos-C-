/*
    Ejercicio 5:
    Desarrolle un programa que lea la entrada estandar de un vector de enteros 
    y determine el mayor elemento del vector.
*/

#include <iostream>
#include <conio.h> // Para la libreria getch(); y evitar que se cierra el ejecutable.

using std::cout; using std::cin; using std::endl;

int main()
{
    int numero[100];
    int n, mayor = 0;

    cout << "Ingrese el numero de elementos que tendra el vector/arreglo: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese los numeros: " << endl;
        cin >> numero[i]; // Aqui se ALMACENAN LOS NUMEROS EN CADA POSICION DEL ARREGLO.  (GUARDAMOS TODOS LOS ELEMENTOS DEL VECTOR. )

        if(numero[i] > mayor)
        { 
            mayor = numero[i];  // ejemplo del arreglo: 1,2,4,10,5
        }
    }

    cout << "El mayor elemento del vector/arreglo es: " << mayor << endl;
    getch();
    return 0;
}