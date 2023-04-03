// Devorver valores multiples  -> Sumas y multiplicar 2 numeros

#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Declarando funcion(nes);
void calcular(int num1, int num2, int &suma, int &producto);

int main()
{
    int num_1,num_2,suma,producto;

    cout << "Ingrese 2 numeros: " << endl;
    cin >> num_1 >> num_2; 

    // Llamando la funcion:
    calcular(num_1,num_2,suma,producto);

    getch();
    return 0; 
}
void calcular(int num1, int num2, int &suma, int &producto)
{
    suma = num1 + num2;
    producto = num1 * num2;

    cout << "El valor de la suma es: " << suma << endl;
    cout << "El valor del producto es: " << producto << endl; 
}