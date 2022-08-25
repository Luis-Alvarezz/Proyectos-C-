/*
    Nivel 10:  Estructuras
      Ejecicio 8:
      Defina una estructura que sirva para representar a una persona
      La estructura debe contener dos campos: el nombre de la persona
      y un valor de tipo logico que indica si la persona tiene algun discapacidad
      Realice un programa que dado un vector de personas, rellene dos nuvos vectores:
      uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga 
      las personas con discapacidad.
*/
#include <iostream>
#include <conio.h>
#include <string.h>
using std::cout; using std::cin; using std::endl;

struct persona
{
    char nombre[30];
    bool band = false;
}personas_genral[200], per_Con_dis[30], per_sin_dis[30];

int main()
{
    int num_per;

    cout << "\tBienvenid@ usuario " << endl;
    cout << "\nIngrese el numero de personas: ";
    cin >> num_per;

    for(int i = 0; i < num_per; i++)
    {
        fflush(stdin); // limpiar el bufer en cada iteracion.
        cout << "\n-> Persona " << i+1 << endl;
        cout << "\nIngrese su nombre: ";
        cin.getline(personas_genral[i].nombre,30);
        cout << "?Tiene alguna discapacidad? (introduzca 1 si es verdad o 0 si es fals0) ";
        cin >> personas_genral[i].band;

        if(personas_genral[i].band == 1)
        {
            personas_genral[i].band = true;
            cout << "\nPersona con discapacidad ";
            per_Con_dis[i].band = personas_genral[i].band;
            cout << endl;
        }
        if(personas_genral[i].band == 0)
        {
            personas_genral[i].band == false;
            cout << "\nPersona sin discapacidad ";
            per_sin_dis[i].band = personas_genral[i].band;
            cout << endl;
        }
        cout << " ";
    }
    cout << "Imprimiendo los datos correspondientes: " << endl;
    for(int i = 0; i < num_per; i++)
    {
        cout << "\nNombre: " << personas_genral[i].nombre << endl;
        if(personas_genral[i].band == 1)
        {
            cout << per_Con_dis[i].nombre << "Persona Discapacitada";
        }
        if(personas_genral[i].band == 0)
        {
            cout << per_sin_dis[i].nombre << "Persona sin Discapacidad ";
        }
    }
}
    