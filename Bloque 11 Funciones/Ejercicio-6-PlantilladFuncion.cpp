/*
    Ejercicio 6: 
        Escribe una plantilla de funcion llamada maximo() que devuelva el valor 
        maximo de tres argumentos que se transmitan a la funcion cuando sea llamada.
        Suponga que los tres argumentos seran del mismo tipo de datos.
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl; 

//Funcion(nes) a ocupar:
template <class maximo>
void dev_valor_max(maximo num);

double numeros[100];

int main()
{
    dev_valor_max(numeros);

    getch();
    return 0;
}

template <class maximo>
void dev_valor_max(maximo num)
{
    double mayor = 0;

    cout << "\tIngrese 3 numero decimales " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Num " << i+1 << ": ";
        cin >> numeros[i];
    }
    for (int i = 0; i < 3; i++)
    {      
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }
    cout << "El mayor es: " << mayor << endl;
}