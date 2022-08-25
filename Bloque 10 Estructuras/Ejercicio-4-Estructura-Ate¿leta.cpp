/*
    Hacer un arreglo de estructuras llamada atleta para N numero de atletas 
    que contenga los siguente campos:
      nombre, pais, numero_medallas. y devuelva los datos (nombre,pais) 
      del atleta que ha ganado el mayor numero de medallas.
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

struct atleta
{
    char nombre[30];
    char pais[15];
    int numero_medallas;
}atletas[100]; // Se crea el arreglo de N cantidad de atletas.

int main()
{   
    int num_atletas, mayor = 0, pos_Mayor = 0;

    cout << "\tBienvenido Usuario--" << endl;
    cout << "\nIngrese el numero de atletas: ";
    cin >> num_atletas;

    for(int i = 0; i < num_atletas; i++)
    {
        fflush(stdin); // Para liberar el bufer en cada iteracion
        cout << "\nNombre del atetla " << i+1 << ": ";
        cin.getline(atletas[i].nombre,30);
        cout << "De que pais es: ";
        cin.getline(atletas[i].pais,15);
        cout << "Numero de medallas: ";
        cin >> atletas[i].numero_medallas;
        cout << "\n";

        if(atletas[i].numero_medallas > mayor)
        {
            mayor = atletas[i].numero_medallas;
            pos_Mayor = i; // Se ALMACENA LA POSICION (nombre del atleta)
        }
    }

    // Impresion de datos:
    cout << "\nImpresion de datos correspondientes: " << endl;
    for(int i = 0; i < num_atletas; i++)
    {
        cout << "Atleta: " << i+1 << "-> " << atletas[i].nombre << endl;
        cout << "Pais proveniente: " << atletas[i].pais << endl;
        cout << "Num de Medallas: " << atletas[i].numero_medallas << endl;
        cout << "\n";
    }  
    cout << "\nEl atleta con mayor numero de medallas es: " << atletas[pos_Mayor].nombre << endl;
    cout << "Con total de: " << atletas[pos_Mayor].numero_medallas << endl;
    getch();
    return 0;
}