/*
    BLOQUE 7: Cadenas o Caracteres:

    Ejercicio 1: 
        Hacer un programa que pida al usuario que digite una cadena de caracteres,
        luego verifique la cantidad de caracteres, y si este supera a los 10 caracteres
        mostrarla en pantalla, en caso contrario, no mostrarla.
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char cadena[20];
    int longitud = 0;

    cout << "Ingrese cualquier pequeño texto: " << endl;
    cin.getline(cadena,20);
    cout << "\n";

    longitud = strlen(cadena);
    cout << "La longitud del texto es: "  << longitud;
    cout << "\n";

    // Como tal debe de ir longitud > 10.
    if(longitud > 10)
    {
        cout << "EL texto ingresado es valido, supera 10 caracteres. " << endl;
        cout << "\n";
        cout << "Texo ingresado: " << cadena;
    }
    else
    {
        cout << " El Texto no alcanza el minimo de 10 caracteres para imprimirse." << endl;
    }
    getch();
    return 0;
}