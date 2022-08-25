// Estructuras basicas en C++

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

struct persona
{
    char nombre[20];
    int edad;
} // Declarando variables y rellenandolos:
person1 = {"Alejandro",20},
persona2 = {"Ruperto",15}
;

int main()
{
    // Para imprimir los datos de una estructura:
    cout << "\n";   
    cout << "El nombre de la persona 1 es: " << person1.nombre << endl;
    cout << "Edad de la persona 1: " << person1.edad << endl;

    cout << "\nEl nombre de la persona 2 es: " << persona2.nombre << endl;
    cout << "La edad de la persona 2 es: " << persona2.edad << endl;

    getch();
    return 0;
}