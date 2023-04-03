/* Plantillas de una funcion 

    Ejemplo: Sacar el valor absoluto de un numero 
*/
#include<iostream>
#include<conio.h>
#include <math.h>
using std::cout; using std::cin; using std::endl;

// Declaracion de la funcion: COMO NO ESPECIFICA QUE TIPO DE NUMERO.
template <class TIPOD> // --> Plantilla de funcion, ENGLOBA diferentes funciones(int, float, double)
void mostrar_Abso(TIPOD numero);


int main()
{
    int num_1 = 4;
    float num_2 = 56.67;
    double num_3 = 123.5678;

    mostrar_Abso(num_1);
    mostrar_Abso(num_2);
    mostrar_Abso(num_3);
    
    getch();
    return 0;
}

template <class TIPOD>
void mostrar_Abso(TIPOD numero)
{
    if(numero < 0)
    {
        numero *= -1;
    }
    cout << "\nEl valor absoluto del numero es: " << numero << endl;
}