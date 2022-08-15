/*
    Longitudes de cadena de caracteres - Funcion strlen()
*/
#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char palabra[] = "Hola como estas?";
    int longitud = 0;

    longitud = strlen(palabra);
    
    cout << "Numero de elementos de la cadena: " << longitud;

    getch();
    return 0;
}