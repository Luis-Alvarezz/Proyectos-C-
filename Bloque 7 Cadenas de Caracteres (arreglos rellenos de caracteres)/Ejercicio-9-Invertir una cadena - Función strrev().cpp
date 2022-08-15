/*
    Invertir una cadena -> funcion strrev(); 
*/
#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char cad[] = "Alejandro";

    // Aqui invertimos el orden de la cadena.
    strrev(cad);

    cout << "La cadena invertida es: " << endl; 
    cout << cad;
    getch();
    return 0;
}