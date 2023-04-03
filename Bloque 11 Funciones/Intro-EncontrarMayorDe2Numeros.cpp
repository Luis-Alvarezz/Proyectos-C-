// Ejemplo: Encontrar el mayor de 2 numeros

#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

//Prototipo de Funcion:
int encontrar_Max(int x, int y); //  Hay una funcion llamada encontrar_Max que me va a retornar un valor de tipo entero y que tiene 2 parametros.

int main()  
{
    int n1,n2;
    int mayor;

    cout << "\nIngrese 2 numeros: " << endl;
    cin >> n1 >> n2;

    mayor = encontrar_Max(n1,n2); // n1 = x y n2 = y
    // pasamos el numero a mayor, para saber cual valor es el que vamos a imprimir.
    cout << "\nEl mayor de los 2 num es: " << mayor << endl;

    // Para no poner una variable, tambien se puede hacer:
    // cout << "\nEl mayot de los 2 numeros es: " << encontrar_Max(n1,n2);
    getch();
    return 0;
}

//Definicion de funcion:
int encontrar_Max(int x, int y)
{
    // En esta funcion se hara ver cual de los numeros es mayor:
    int Num_Max;

    if(x > y)
    {
        Num_Max = x;
    }
    else
    {
        Num_Max = y;
    }

    return Num_Max; // retornamos el valor entero de tipo int.
}