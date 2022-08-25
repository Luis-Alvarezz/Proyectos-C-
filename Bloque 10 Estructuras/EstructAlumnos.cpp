/*
    Bloque 10. Estructuras:

        Ejercicio 2:
          Hacer una estructura llamada alumno, en la cual, se tendra los siguientes campos:
          Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 
          tiene mejor promedio, y posteriormente imprimir los datos del alumno.
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

struct alumno
{
    char nombre[20];
    double promedio;
}alumnos[3]; // Arreglo de 3 alumnos.

int main()
{   
    for(int i = 0; i < 3; i++)
    {   
        fflush(stdin); // Para limpiar el bufer en cada iteracion.
        cout << "Ingrese el nombre del alumno " << i+1 << ": ";
        cin.getline(alumnos[i].nombre,20);
        cout << "Ingrese el promedio: ";
        cin >> alumnos[i].promedio;
    }

    // Impresion de datos:
    cout << "\nImprimiendo los datos correspondientes: " << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "Alumno " << i+1 << "- " << alumnos[i].nombre << endl;
        cout << "Con promedio de: " << alumnos[i].promedio << endl;
    } 

    if((alumnos[0].promedio > alumnos[1].promedio) && (alumnos[0].promedio > alumnos[2].promedio))
    {
        cout << "Alumno con mayor promedio: " << alumnos[0].nombre;
    }
    if((alumnos[1].promedio > alumnos[0].promedio) && (alumnos[1].promedio > alumnos[2].promedio))
    {
        cout << "Alumno con mayor promedio: " << alumnos[1].nombre;
    }
    if((alumnos[2].promedio > alumnos[0].promedio) && (alumnos[2].promedio > alumnos[1].promedio))
    {
        cout << "Alumno con mayor promedio: " << alumnos[2].nombre;
    }
    getch();
    return 0;
}