    /*
    Ejercicio 7:
    Intercambiar el valor de 2 variables utilizando el paso de parametros por referencia
*/
#include <iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

//Funcion(es):
void intercambiar(int &numero_1, int &numero_2);

int main()
{
    int num1 = 10, num2 = 15;

    cout << "El valor de num 1: " << num1 << endl;
    cout << "El valor de num 2: " << num2 << endl;
    cout << "\n";

    //Llamando a la funcion:
    intercambiar(num1,num2);

    cout << "El nuevo valor de num 1: " << num1 << endl;
    cout << "El nuevo valor de num 2: " << num2 << endl;
    getch();
    return 0;
}

void intercambiar(int &numero_1, int &numero_2)
{
    int aux;

    aux = numero_1;
    numero_1 = numero_2;
    numero_2 = aux;

    // aqui imprimimos el orden ya intercambiado.
    /*
    cout << "El valor de num 1: " << numero_1 << endl;
    cout << "El valor de num 2: " << numero_2 << endl; */
}