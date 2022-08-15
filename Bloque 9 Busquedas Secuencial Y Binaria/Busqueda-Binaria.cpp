// Busqueda Binaria.
// Se necesita que el arreglo este ordenado de manera ascendente.

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int numero[5] = {1,2,3,4,5};
    int inferior,superior,mitad,dato;
    bool bandera = false;

    dato = 4; // Numero a buscar.

    // Algoritmo de la busqueda binaria.
    inferior = 0;
    superior = 5;

    while (inferior <= superior)
    {
        mitad = (inferior+superior)/2;

        // Vamos a darnos cuenta si el numero lo encontraremos o no.
        if(numero[mitad] == dato)
        {
            bandera = true;
            break; // Se pone un finalizar para salga del bucle y no pierda tiempo siguiendo buscando mas elementos.
        }
        if(numero[mitad] > dato)
        {
            superior = mitad;
            mitad = (inferior+superior)/2;
        }
        if(numero[mitad] < dato)
        {
            inferior = mitad;
            mitad = (inferior+superior)/2;
        }
    }
    // Imprimiendo:
    if(bandera == true)
    {                                       // mitad lo que guarda es la posicion del arreglo en lo que va verificando.
        cout << "El numero ha sido encontrado en la posicion: " << mitad << endl;
    }
    else
    {
        cout << "El numero no ha sido encontrado. " << endl; 
    }

    getch();
    return 0;
}