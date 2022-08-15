/*
    // Añadir o concatenar una cadena con otra -> Funcion strcat();

    Esta funcion al final de una cadena, te añade lo que tu pides
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char cat_1[] = "Esto es una cadena";
    char cat_2[] = " de ejemplo";
    char cat_3[30];

    // Para pasar las 2 cadenas a una nueva:
    strcpy(cat_3,cat_1); // cat_3 ya almacena, "Esto es una cadena";

    strcat(cat_3,cat_2); // cat_e ya tendria "Esto es una cadena de ejemplo."

    cout << cat_3 << endl;

    getch();
    return 0;
}
