/*
    Bloque 6: Los vectores/arreglos Bidimensionales
        Ejercicio 2:
            Realiza un programa que defina una matriz de 3x3  y escriba un ciclo para que 
            muestra la diagonal principal de la matriz.
*/
#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{                       //0,1,2 --> Posiciones 
    float matriz[3][3] = {1,2,3,  //0
                          4,5,6,  //1 --> Posiciones
                          7,8,9}; //2
    
   // Mostrando la matriz original: 
    for(int i = 0; i < 3; i++)      // Aqui controlamos las FILAS!!
    {
        for(int j = 0; j < 3; j++)    // Aqui controlamos las COLUMNAS!
        {
            cout << "  Pos: [" << i << "]" << "[" << j << "]" << " -->  " << matriz[i][j];
        }
        cout << "\n";
    }

    //Para mostrar la diagonal principal:
    cout << "La diagonal de la matriz es: " << endl;
    for(int i = 0; i < 1; i++)
    {
            cout << matriz[0][0];
            cout << matriz[1][1];
            cout << matriz[2][2];
    }
    getch();
    return 0;
}