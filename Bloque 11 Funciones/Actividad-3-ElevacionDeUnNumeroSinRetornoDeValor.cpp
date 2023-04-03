/*
    Ejercicio 3: escriba una funcion nombrada funpot() que eleve un numero entero 
    que se le transmita a una potencia en numero entero positivo y despliegue el resultado.
    El numero entero posotivo debera ser el segundo valor transmitido a la funcion
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

// Declarando la funcion:
void pedir_datos(); 
void func_pot(int x, int y);

int numero, exponente;

int main()
{
    pedir_datos();
    func_pot(numero, exponente);

    getch();
    return 0;
}

void pedir_datos()
{
    cout << "\nIgrese un numero: ";
    cin >> numero;

    cout << "Ingrese el exponente de elevacion: ",
    cin >> exponente;
}

void func_pot(int x, int y)
{
    long resultado = 1; 
    for(int i = 1; i <= y; i++)
    {
        resultado *= x;
    }
    cout << "El resultado es: " << resultado << endl;
}