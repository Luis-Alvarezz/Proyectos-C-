/*
    7. Desarrollar un programa que determine si una matriz es simetrica o no.
    Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta.

    |8 1 3|      |8 1 3|
    |1 7 4|  --> |1 7 4|
    |3 4 9|      |3 4 9|
*/

#include<iostream>
#include <conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int numeros[100][100];
    int filas, columnas;
    // char bandera = 'F';  --> Opcion 1, es otra manera de hacer booleanos
    bool bandera = false;

    cout << "Ingrese el numero de filas: " << endl;
    cin >> filas;

    cout << "Ingrese el numero de columnas: " << endl;
    cin >> columnas;
    cout << "\n"; 

    // LLenando la matriz:
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            cout << "Ingrese un numero: " << "[" << i << "][" << j << "]: " << endl;
            cin >> numeros[i][j];
        }
        cout << "\n";
    }

    if(filas == columnas)
    {
        for(int i = 0; i < filas; i++) // Bucle para las filas
        {
            for (int j = 0; j < columnas; j++)  //Bucle para las columnas
            {
                if(numeros[i][j] == numeros[j][i])  // Si la matriz normal es igual a su matriz transpuesta:
                {
                    bandera = true; // Opcion 2, la opcion 1 seria bandera = 'T';
                }
            }
        }
    }
    if(bandera == true)
    {
        cout << "Correcto, la matriz es simetrica!! " << endl;
    }
    else
    {
        cout << "Lo siento, la matriz no es simetrica. " << endl;
    }
    getch();
    return 0;
}