/*
    5. Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta.
    La matriz transpuesta es aquella en que la columna i era la fila i de la matriz 
    original

    |1 2 3|       |1 4 7|
    |4 5 6|  -->  |2 5 8|
    |7 8 9|       |3 6 9|
*/
#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int numero[3][3]; // Posiciones --> 0,1,2.

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Ingrese un numero: " << "[" << i << "]" << "[" << j << "]: " << endl;
            cin >> numero[i][j];
        }
    }

    // Para mostrar la matriz:
    cout << "La matriz original es: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << numero[i][j];
        }
        cout << "\n";
    }

    // para imprimir la matriz transpuesta: 
    cout << "La matriz transpuesta es: " << endl;;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << numero[j][i]; // Primero se imprimen las columnas y en seguida las filas.
        }
        cout << "\n";
    }

    getch();
    return 0;
}
