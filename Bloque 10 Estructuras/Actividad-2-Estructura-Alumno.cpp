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
    char nombre[30];
    int edad;
    double promedio;
}alumno[3]; // se crea 3 estructuras del alumno.

int main()
{
    double promedio = 0;
    for(int i = 0; i < 3; i++)
    {   
        fflush(stdin); // Para limipiar el bufer (ya que se llena al terminar 1 alumno).  tambien sirve cin.clear(); y cin.ignore(espacios basura); en LINUX setbuf(stdin,NULL);
        cout << "\nIngrese el nombre del alumno " << i+1 << ": ";
        cin.getline(alumno[i].nombre,30);

        cout << "Ingrese la edad del alumno: " << endl;
        cin >> alumno[i].edad;

        cout << "Promedio del alumno: " << endl;
        cin >> alumno[i].promedio;

        // Comparativa de los promedios: 
        if (alumno[i].promedio > promedio)
        {
            promedio = alumno[i].promedio;
        }
    }
    //Imprimiendo los datos:
    cout << "\nImprimiendo los datos de los alumnos: " << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "\nAlumno " << i+1 << " -> " << alumno[i].nombre << endl;
        cout << "Edad: " << alumno[i].edad << endl;
        cout << "Promedio: " << alumno[i].promedio << endl;
    }
    cout << "\n Promedio mas alto es: " << promedio << endl; 

    getch();
    return 0;
}
