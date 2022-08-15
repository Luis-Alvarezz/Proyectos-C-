/*
    Ejericio 3:
        Hacer una matriz de tipo entera de 2x2, llenarla de numeros y luego copiar todo su contenido 
        hacia otra matriz.
*/
#include<iostream>
#include<conio.h> //Para la funcion getch(); y evitar que se cierre el ejecutable.

using std::cout; using std::cin; using std::endl;

int main()
{                      //0,1 -> Posiciones
    int numeros[2][2] = {1,2,  //0
                         3,4}; //1  -> Posiciones   
    int matriz_2[2][2];  //Matriz de copia.

    // Pasando el contenido de numeros hacia matriz_2:
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            matriz_2[i][j] = numeros[i][j];
            cout << matriz_2[i][j];  // AAAAA SE PUEDE IMPRIMIR AQUI:0
        }
        cout << "\n";
    }

    // Mostrando la matriz_2
/*
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << matriz_2[i][j];
        }
        cout << "\n";
    }*/
    getch();
    return 0;
}
