/*
    Ejercico 5: Escriba una funcion llamada despliegue() que despliegue el valor del argumento unico que se le tranmite cuando es invocada la funcion.
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

// Declarando funciones:
template <class TIPO_D>  // Para poder agregar cualquier tipo de dato
void despliegue(TIPO_D dato);

int main()
{
    int dato_1 = 4;
    float dato_2 = 15.67;
    double dato_3 = 567.7890;
    char dato_4 = 'a';

    despliegue(dato_1);
    despliegue(dato_2);
    despliegue(dato_3);
    despliegue(dato_4);

    getch();
    return 0;
}

template <class TIPO_D>  
void despliegue(TIPO_D dato)
{
    cout << "El tipo de dato: " << dato << endl;   
}