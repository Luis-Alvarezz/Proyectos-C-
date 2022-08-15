/*
    Bloque 6: Matrices o tablas
        Ejercicio 4:

            Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios,
            copiar el contenido a otra matriz y por ultima mostrarla en pantalla.
*/

#include <iostream>
#include<conio.h> // Para usar la funcion getch(); y evitar que se cierre el ejecutable.

using std::cout; using std::cin; using std::endl;

int main()
{
    float tabla_1[100][100], filas, columnas;
    float tabla_2[100][100];

    cout << "Ingrese el numero de filas: ";
    cin >> filas; 

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
 
    for(int i = 0; i < filas; i++) // Contolamos las filas con el bucle for
    {
        for(int j = 0; j < columnas; j++) // Segundo ciclo o bucle de columnas.
        {
            cout << "Ingrese el numero: " << "["<< i << "]" << "[" << j << "]" << endl;
            cin >> tabla_1[i][j];
        }
    }

    // PARA IMPRIMIR LA MATRIZ:
    cout << "Matriz Original: ";
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            cout << tabla_1[i][j];
        }
        cout << "\n";
    }

    // Para pasar el contenido de la matriz "tabla_1" a la segunda matriz "tabla_2":

    cout << "Pasando la matriz original a la matriz copia tenemos: " << endl;
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            tabla_2[i][j] = tabla_1[i][j]; // Pasamos tabla_1 a tabla_2.
            cout << tabla_2[i][j]; // imprimiendo la nueva matriz!!
        }
    }
    getch();
    return 0;
}