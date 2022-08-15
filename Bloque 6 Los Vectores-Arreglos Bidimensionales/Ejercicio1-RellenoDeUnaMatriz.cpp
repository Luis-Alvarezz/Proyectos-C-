/*
    Bloque 6. Los vectores-Arreglos Bidimensionales 

    Ejercicio 1:
        Hacer un programa para rellenar una matriz pidiendo al usuario  el numero de filas
        y columnas, posteriormente mostrar la matriz en pantalla.
*/

#include<iostream>
#include<conio.h> // para la funcion getch(); y evitar que se cierre el ejecutable.

using std::cout; using std::cin; using std::endl;

int main()
{
    int numeros[100][100], filas, columnas;

    cout << "Ingrese el numero de filas: " << endl;
    cin >> filas;
    cout << "Ingrese el numero de columnas: " << endl;
    cin >> columnas;
    cout << "\n";
    // Para rellenar la matriz:
    for(int i = 0; i < filas; i++)    // Pimer búcle de filas
    {
        for(int j = 0; j < columnas; j++)   // Segundo búcle de columnas.
        {
            cout << "Ingrese un numero: [" << i << "]" << "[" << j << "]" << endl; //Aqui vemos la posicion en donde se 
            cin >> numeros[i][j];                                       // guardará cada elemento.
        }
    }

    // Mostrando la matriz: 
    for(int i = 0; i < filas; i++)   // Pimer búcle de filas
    {
        for(int j = 0; j < columnas; j++)   // Segundo búcle de columnas.
        {
            cout << numeros[i][j];
        }
       cout << "\n";
    }
    getch();
    return 0;
}