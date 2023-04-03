// Paso por referencia 

#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Declarando funciones:
void valNuevo(int& xnum, int& ynum);

int main()
{
    int num_1, num_2;

    cout << "Ingrese 2 numeros: ";
    cin >> num_1 >> num_2;

    // Llamado de la funcion para imprimir los numeros por referencia 
    valNuevo(num_1,num_2);

    // Imprimiendo los nuevos valores modificados 
    cout << "El valor del primer numero es: " << num_1 << endl;
    cout << "El valor del segundo valor es: " << num_2 << endl;
    getch (); 
    return 0;
}

void valNuevo(int &xnum, int &ynum)
{   
    // Para imprimir las variables por referencia (por direccion de memoria)
    cout << "El valor del primer numero es: " << xnum << endl;
    cout << "El valor del segundo numermo es: " << ynum << endl;

    // Para cambiar el valor de las variables:
    xnum = 89;
    ynum = 45;
}