/*
    Ejercicio 15:
    Realice un programa que solicite al usuario que piense un numero entero entre el 1 y 100. El programa debe generar un numero aleatorio
    en ese mismo rango [1-100], e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, así hasta que lo divine,
    y por ultimo mostrarle en numero de intentos que le llevo.

    variable = limite_inferior + rand() % (limite_superior +1  - limite_inferior); 
*/

#include <iostream>
#include <stdlib.h>  // Libreria para poner la funcion de system pause
#include <time.h> // Libreria para generar numero aleatorio 

using std::cout; using std::cin; using std::endl;
int main()
{
    int numero, dato, contador = 0;

    srand(time(NULL)); // Genera un numero aleatorio. 
    dato = 1 + rand() % (101 - 1);  // con esto se genera un numero aleatorio.

    do
    {
        cout << " Digite un numero: " << endl;
        cin >> numero;

        if (numero > dato)
        {
            cout << "Ingrese un numero menor! " << endl;
        }
        if(numero < dato)
        {
            cout << "Ingrese un numero mayor!! " << endl;
        }
        contador++;

    } while (numero != dato); // Por que lo que hace el programa es igualar los valores, cuando detecte que el numero es = al dato, 
    // significa que el usuario adivino el numero que la maquina puso aleatoriamente 
    
    cout << "\n Felicidades, has adivinado el numero!!! " << endl;
    cout << "Numero de intentos: " << contador << endl;

    system("Pause");
    return 0;
}