// Busqueda secuencial (busquedas en arreglos)

//a[] = {3,4,2,1,5}; ¿Que pasa con una variable? -> dato=4;  para darnos cuentas si realmente pertenece al arreglo

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int a[5] = {3,4,2,1,5};
    int i, dato;
    bool bandera = false; // lo mismo a poner char bandera = 'F';  --> PARA DARNOS CUENTA SI EL NUMERO EXISTE O NO EN EL ARRAY

    dato = 4;
    // Busqueda Secuencial:
    i = 0;
    while((bandera == false) && (i < 5))
    {
        if(a[i] == dato)
        {
            bandera = true;
        }
        i++; // para que itere en todas las posiciones!
    }
    if(bandera == false)
    {
        cout << "El numero a buscar no existe en el arreglo. " << endl;
    }
    else if(bandera == true)
    {
        cout << "El numero ha sido encontrado en la posicion: " << i << endl;
    }                                                            // i-1 por la linea 25 aun asi encontrar el numero, itera 1 posicion mas
     
    getch();
    return 0;
}