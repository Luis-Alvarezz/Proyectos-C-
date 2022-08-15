/*
  Bloque 7: Cadenas de Caracteres

  Ejercicio 5:

  Hacer un programa que determine si una palabra es palindroma.
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char palabra[30];
    char aux[30];

    cout << "Vamos a determinar si ingreso una palabra palindroma"<< endl;
    cout << "\n";

    cout << "Ingrese una palabra: ";
    cin.getline(palabra,30);
    cout << "\n";

    cout << "Palabra normal: " << palabra << endl;
    cout << "\n";

    // Primero pasamos la palabra a una segunda cadena:
    strcpy(aux,palabra);

    // En seguida se hace de modo inverso la cadena principal:
    strrev(palabra);
    cout << "Palabra a reves: " << palabra << endl;

    //Despues se hace la comparacion:
    if(strcmp(palabra,aux) == 0)  // SE LEE-> Si.. la comparacion de mi cadena palabra es = a mi cadena aux, entonces:
    {
        cout << "Correcto, palabra palindroma!" << endl;
    }
    else
    {
        cout << "Lo siento, palanra no palindroma.. " << endl;
    }
    getch();
    return 0;
}