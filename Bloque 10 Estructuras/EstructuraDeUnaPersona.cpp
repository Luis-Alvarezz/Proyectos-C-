// Estructuras basicas en C++

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

struct persona
{
    char nombre[20];
    int edad;
}persona1, persona2; // Declaracion de variables.

int main()
{   // TODO SE AHORRA CON UNA ESTRUCTURA DE PERSONAS Y CON LA CRACION DE UN CICLO FOR.
    cout << "\n";
    cout << "\tPersona 1: ";
    cout << "\nIngrese el nombre de la primera persona: " << endl;
    cin.getline(persona1.nombre,20);

    cout << "\nEdad de la primer persona: " << endl;
    cin >> persona1.edad;

    fflush(stdin); // PARA LIMPIAR EL BUFER.
    cout << "\tPersona 2: ";
    cout << "\nIngrese el nombre de la persona 2: " << endl;
    cin.getline(persona2.nombre,20);

    cout << "\nIngrese la edad de la persona 2: " << endl;
    cin >> persona2.edad;

    // Mostrando los datos:
    cout << "\nImprimiendo los datos correspondientes: ";
    cout << "\nNombre de persona 1: " << persona1.nombre << endl;
    cout << "Edad de persona 1:  " << persona1.edad << endl;
    cout << "\n";

    cout << "\nNombre de la persona 2: " << persona2.nombre << endl;
    cout << "Edad de la persona 2: " << persona2.edad << endl;
    getch();
    return 0;
}
