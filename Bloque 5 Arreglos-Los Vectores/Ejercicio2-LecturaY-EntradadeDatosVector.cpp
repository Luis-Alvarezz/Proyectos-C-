/*
    Ejercicio 3: Escribe un programa que lea la entrada estandar de un vector de numeros y muestre en la salida estandar los numeros 
    del vector con sus indices asociados.
*/

#include<iostream>
#include <conio.h> // para usar la funcion getch();

using std::cout; using std::cin; using std::endl;

int main()
{
    int numeros[100]; // creamos el espacio para almacenar los numeros (es un aprox, ya que no sabemos cuantos pondra el usuario).
    int n;

    cout << "Ingrese el numero de elementos que tendra el arreglo: " << endl;
    cin >> n;   
    // ¿Como controlamos el numero de elementos?
    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> numeros[i]; // Aqui GUARDAMOS TODOS LOS ELEMENTOS DEL VECTOR. 
    }

    //Para mostrar los elementos con sus indices asociados.
    for(int i = 0; i < n; i++)
    {
        cout << i << " -> " << numeros[i] << endl;
    }
    getch();
    return 0;
}