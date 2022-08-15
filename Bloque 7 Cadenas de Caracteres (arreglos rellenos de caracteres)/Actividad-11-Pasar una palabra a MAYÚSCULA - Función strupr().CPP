/*
    Pasar una palabra a MAYUSCULA -> Funcion strupr()
*/
#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char palabra[] = "alejandro"; // No pasa nada si alguna de las palabras es MAYUSCULA "Alejandro".

    strupr(palabra);

    cout << "La palabra es: " << palabra << endl;
    
    getch();
    return 0;
}