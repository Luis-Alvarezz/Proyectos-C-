// Pasar palabras a minusculas -> Funcion strlwr();

#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char palabra[] = "PROGRAMACION ATS"; // No hay problemas si hay letras en minusculas.

    strlwr(palabra);

    cout << "La palabra en minusculas es: " << palabra << endl;
    getch();
    return 0;
}