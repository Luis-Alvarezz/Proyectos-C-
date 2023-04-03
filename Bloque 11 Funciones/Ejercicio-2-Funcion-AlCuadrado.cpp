/*    FUNCIONES EN C++
        Ejercicio 2:

        Escriba una funcion llamada al_cuadrado(), que calcule el cuadrado 
        del valor que se le transmite y despliegue el resultado. La funcion 
        debera ser capaz de elevar al cuadrado numeros flotantes.
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using std::cout; using std::cin; using std::endl;

//Declarando funcion(es)
template <class Cuadrado>
void num_alCuadrado(Cuadrado num);

double num_1;

int main()
{   
    num_alCuadrado(num_1);

    getch();    
    return 0;
}

template <class Cuadrado>
void num_alCuadrado(Cuadrado num)
{
    float cuadra;
    cout << "\nIngrese un numero positivo: ";
    cin >> num_1;

    while (num_1 == 0 || num_1 < 0)
    {
        cout << "ERROR, intenta de nuevo: ";
        cin >> num_1;    
    }    
    cuadra = pow(num_1,2);
    cout << "\nNumero al cuadrado: " << cuadra << endl;
}