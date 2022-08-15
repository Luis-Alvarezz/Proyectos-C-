/*
    Bloque 4. Estructuras repetitivas.

  Ejercicio 16:

        Realiza un programa que calcule la descomposicion en factores primos
        de un numero entero.

        Por ejemplo: 20 = 2*2*5.
        NUMERO PRIMOS: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 
*/

#include <iostream>
#include <stdlib.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int numero;

    cout << "Ingrese el numero que desea descomponer en factores primos: " << endl;
    cin >> numero;
    cout << "\n" << endl;
    for(int i = 2; numero > 1; i++)
    {
        while (numero % i == 0)
        {
            cout << numero << " ---- "; 
            cout << " | " << i << "*" << endl;
            numero/= i;
        }
    }
    return 0;
}