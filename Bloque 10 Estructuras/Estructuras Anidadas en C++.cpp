// Estructuras anidadas en C++

#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

struct info_direccion
{
    char direccion[30];
    char ciudad[20];
    char providencia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2]; // seran 2 estructuras de tipo empleado.

int main()
{
    for(int i = 0; i < 2; i++)
    {
        fflush(stdin); // Vaciar el bufer y permitir digitar datos....   // cin.ignore(); --> otro modo de limpiar el bufer.
        cout << "\nIngrese su nombre: ";
        cin.getline(empleados[i].nombre,20);

        cout << "\nIngrese la direccion: ";                           // ESTRUCTURA
        cin.getline(empleados[i].dir_empleado.direccion,30);        //
                                                                   //
        cout << "\nIngrese la ciudad: ";                          //
        cin.getline(empleados[i].dir_empleado.ciudad,20);        // ANIDADA
                                                                //
        cout << "\nIngrese la provincia: ";                    //
        cin.getline(empleados[i].dir_empleado.providencia,20);// 

        cout << "\nIngrese el salario: ";
        cin >> empleados[i].salario;
        cout << "\n";
    }

    // Imprimiendo los datos;
    for(int i = 0; i < 2; i++)
    {
        cout << "Nombre del empleado: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
        cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
        cout << "Provincia: " << empleados[i].dir_empleado.providencia << endl;
        cout << "Salario: " << empleados[i].salario << endl;
        cout << "\n";
    }
    getch();
    return 0;
}