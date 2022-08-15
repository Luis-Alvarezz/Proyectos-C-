/*
    Comparar cadenas - > Funcion strcmp()

    A demas la funcion tambien compara cual es la cadena mayor alfabeticamente, esto con la devolucion de un entero 
*/
#include<iostream>
#include<conio.h>
#include <string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char palabra_1[] = "Hola";
    char palabra_2[] = "Hola";

    // la funcion strcmp se usa mas en condicionales.
    if(strcmp(palabra_1,palabra_2) == 0) // si ambas cadenas son iguales.
    {
        cout << "Ambas cadenas son iguales ";
    }
    cout << "\n";
    // Otras maneras de usar la funcion strcmp
    /*
        if(strcmp(palabra1,palabra_2) = 1)  ES DECIR QUE AMBAS CADENAS SON DIFERENTES.

        if(strcmp(palabra_1,palabra_2) != 0)
    */

   char palabra_3[] = "Buenas";
   char palabra_4[] = "buenas";

   if(strcmp(palabra_3,palabra_4) != 0)
   {
        cout << "Ambas cadenas son diferentes.";
   }
    cout << "\n";
   // COMPARACION DE CADENAS ALFABETICAMENTE

   char palab_1[] = "becerro";
   char palab_2[] = "avion";

   if(strcmp(palab_1, palab_2) > 0)
   {
        cout << palab_1 << "Esta despues alfabeticamente"; 
   }

    getch();
    return 0;
}