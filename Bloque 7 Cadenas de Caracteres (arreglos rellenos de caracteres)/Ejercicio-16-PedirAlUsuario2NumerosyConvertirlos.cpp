/*
    BLOQUE 7: Cadenas de caracteres.
      
      Ejercicio 8:
        Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real,
        y convertirlos a sus respectivos valores, por ultimo sumarlos.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char entero[20];
    int regresa_entero;
    char reales[20];
    float regresa_reales;
    float suma = 0;

    cout << "Ingrese uno o mas numeros enteros: " << endl;
    cin.getline(entero,20);

    cout << "Ingrese uno o mas numeros reales: " << endl;
    cin.getline(reales,20);

    // Para convertir la cadena a numeros entero:
    regresa_entero = atoi(entero);
    cout << "La cadena de enteros a numeros enteros es: " << regresa_entero << endl;

    // Para convertir la cadena de numeros reales a numeros reales:
    regresa_reales = atof(reales);
    cout << "La cadena de reales a numeros reales es: " << regresa_reales << endl;
    cout << "\n";

    // Sumando ahora los numeros enteros y reales:
    suma = regresa_entero + regresa_reales;
    cout << "La suma de ambos numeros es: " << suma << endl;

    getch();
    return 0;
}
