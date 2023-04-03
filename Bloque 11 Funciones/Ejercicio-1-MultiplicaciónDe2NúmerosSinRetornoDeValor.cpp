/* Ejercicio 1: Escriba una funcion llamada mult() que acepte 2 numeros en punto
flotante como parametros, multiplique estos 2 numeros y despliegue el resultado.
*/                                                     // despliegue significa que NO retornara valores
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;
#define red 1

// Definiendo las funciones:
void pedir_Datos(); // no tendra parametros por que no utilizara valor 
void mult(float x, float y);

// Variables globales:
float num_1, num_2;

int main()
{
    // mandamos a llamar a la funcion: 
    pedir_Datos(); 
    mult(num_1,num_2); // Es lo mismito a tener (float x, y); num_1 -> x Y num_2 -> y;
    getch();
    return 0;
}

void pedir_Datos()
{
    cout << "Ingrese 2 numeros: " << endl;
    cin >> num_1 >> num_2;
}

void mult(float x, float y)
{
    float multiplicacion = x * y;

    cout << "La multiplicacion es: " << multiplicacion << endl;
}