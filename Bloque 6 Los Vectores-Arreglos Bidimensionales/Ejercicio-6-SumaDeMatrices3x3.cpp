/*
    Bloque 6: Las matrices o tablas.

        Ejercicio 6:
            Realice un programa que calcule la suma
            de dos matrices cuadradas de 3x3.
*/
#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{                       // Posicion:|0,1,2||0,1,2| 
    float matriz_1[3][3]; // Matriz [3][3]
    float matriz_2[3][3];
    int suma = 0;

    cout << "\n";
    cout << "\t";
    cout << "Programa para sumar 2 matrices: " << endl;
    cout << "\n";

    // Llenando la matriz_1:
    cout << "Vamos a llenar la matriz 1." << endl;
    for(int i = 0; i < 3; i++)  // Bucle para las filas
    {
        for(int j = 0; j < 3; j++)  // Bucle para las columnas
        {
            cout << "Ingrese un numero: " << "[" << i << "][" << j << "]:" << endl;
            cin >> matriz_1[i][j];
        }
        cout << "\n";
    }

    // Para corroborar la matriz_1:
    cout << "Corroborando, la matriz 1 es: " << endl;
    for(int i = 0; i < 3; i++) // filas
    {
        for(int j = 0; j < 3; j++)  // Columnas
        {
            cout << matriz_1[i][j];
        }
        cout << "\n";
    }

    // Ahora pasamos a llenar la matriz_2:
    cout << "\n";
    cout << "Ahora llenaremos la matriz 2: " << endl;
    for(int i = 0; i < 3; i++)  // Bucle para las filas
    {
        for(int j = 0; j < 3; j++)    // Bucle para las columnas.
        {
            cout << "Ingrese el numero: " << "[" << i << "][" << j << "]" << endl;
            cin >> matriz_2[i][j];
        }
        cout << "\n";
    }

    cout << "\n";

    // Para corroborar el llenado de la matriz 2:
    cout << "Para corroborar el llenado de la matriz 2: " << endl;
    for(int i = 0; i < 3; i++) // Bucle para las filas
    {
        for(int j = 0; j < 3; j++)  // Bucle para las columnas.
        {
            cout << matriz_2[i][j];
        }
        cout << "\n";
    }

    // Creando la suma de las matrices: 
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            suma =  matriz_1[i][j] + matriz_2[i][j];
        }
        cout << "\n";
    }
    cout << "La suma de las matrices es: " << suma << endl;

    // Mostrando la matriz de sumas:
    cout << "\n";
    cout << "Mostrando la suma de las matrices: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << suma << " ";
        }
        cout << "\n";
    }
    getch();
    return 0;
}