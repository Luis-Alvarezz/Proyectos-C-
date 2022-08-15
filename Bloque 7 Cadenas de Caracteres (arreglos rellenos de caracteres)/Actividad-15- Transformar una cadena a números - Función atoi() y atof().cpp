/*  
    Transformas cadenas a numeros -> Funcion atoi() y atof()
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char cad[] = "123";
    int numero;

    char cadena[] = "123.453";
    float num;

    // Funcion atoi para convertir cadenas de numeros a numeros enteros:
    numero = atoi(cad);
    cout << "La cadena a numero es: " << numero << endl;

    // Funcion atof para convertir cadenas de numeros a numeros decimales:
    num = atof(cadena);
    cout << "La cadena a numeros decimales es: " << num << endl;

    getch();
    return 0;
}
