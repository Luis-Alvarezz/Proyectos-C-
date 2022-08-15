/*
    Bloque 5. Los Vectores / Arreglos Unidimensionales

    Actividad 4: Escribe un programa que defina un vector de numeros y muestre en la salida estandar 
    el vector en orden inverso - del ultimo al primer elemento.  
*/

#include<iostream>
#include<conio.h> // Para la funcion getch(); y asi evitar que el ejecutable se cierre.

using std::cout; using std::cin; using std::endl;   

int main()
{              //0,1,2,3
    int num[4] = {2,3,4,5};

    for(int i = 0; i < 4; i++)
    {
        cout << "Posicion: " << i << "->" << num[i] << endl;
    }
    cout << "En orden inverso: " << endl;
    for(int i = 4-1; i >= 0; i--)
    {
        cout << "Posicion: " << i << "->" << num[i] << endl;
    }
    getch();
    return 0;
}