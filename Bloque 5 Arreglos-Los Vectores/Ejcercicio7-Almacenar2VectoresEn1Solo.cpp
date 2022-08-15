/*
    Bloque 5:  Los Vectores / Arreglos
    Ejercicio 7: 
    Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en un nuevo vector
    situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido
    del nuevo vector en la salida estandar.
*/

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{                   // 0    1    2    3    4
    char letras1[] = {'a', 'b', 'c', 'd', 'e'};
    char letras2[] = {'f', 'g', 'h', 'i', 'j'};
    char letras3[10];

    // Copiando los elementos del arreglo letras1 hacia letras3

    for(int i = 0; i < 5; i++)  // aqui se ocupan las primeras 5 posiciones
    {
        letras3[i] = letras1[i];  // guardamos en letras3 los elementos del vector letras1
        cout << "Posicion: " << letras3[i] << endl;
    }
    cout << "El primer arreglo/vector es: " << letras3 << endl;
    cout << "\n";
    //copiando los elemento del arreglo letras2 hacia letras3
    for(int i = 5; i < 10; i++) // --> Aqui empezamos a almacenar desde la posicion 5 hasta n-1.
    {
        letras3[i] = letras2[i-5]; // se le resta 5 unidades por que el bucle va de 5 hasta el 9, si se le pone de 5-9 el arreglo tiene 5 elementos, si ponemos del 5-10 
        cout << "Posicion2: " << letras3[i] << endl;                   // pondra elemntos basura. 
    }
    cout << "El segundo arreglo/vector es: " << letras3 << endl;
    cout << "\n" << endl;
    //Para mostrar el nuevo vector:
    for(int i = 0; i < 10; i++)
    {
        cout << "posicion nueva: " << i << "->" << " El conjunto de ambos arreglos es: " << letras3[i] << endl;
    }
    getch();
    return 0;
}
