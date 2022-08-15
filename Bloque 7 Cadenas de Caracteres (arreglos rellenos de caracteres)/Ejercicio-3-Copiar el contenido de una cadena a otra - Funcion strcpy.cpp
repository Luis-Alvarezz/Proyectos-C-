/*
   Copiar el contenido de una cadena a otra - Funcion strcpy()
*/
#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char nombre[] = "Alejandro";
    char nombre_2[20];

    strcpy(nombre_2,nombre); // primero la cadena vacia, luego la cadena a la que se manda el contenido

    cout << nombre_2 << endl;
        
    getch();
    return 0;
}