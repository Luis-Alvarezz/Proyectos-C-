/*
    Funciones en C++
        Ejercicio 4:

        Escribe un programa en C++ que devuelva la parte fraccionaria 
        de cualquier numero introducido por el usuario.
        Por ejemplo, si se introduce un numero 256.879, deberia desplegarse el numero 0.879
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

//funcion:
void pedir_datos();
double parte_frac(double x);

double numero_decimal = 0;
double decimal_f = 0;

int main()
{   
    pedir_datos();
    parte_frac(numero_decimal);

    getch();
    return 0;
}

void pedir_datos()
{
    cout << "Ingrese un numero decimal: ";
    cin >> numero_decimal;
}
double parte_frac(double x)
{
    double resul = 0;

    decimal_f = (int)numero_decimal; // Aqui comvertimos el numero decimal en solamente ENTERO.
    resul = numero_decimal - decimal_f; // Numero_decimal es la parte decimal y decimal_falso es el "Entero".

    cout << "Los decimales son: " << resul << endl;    
}