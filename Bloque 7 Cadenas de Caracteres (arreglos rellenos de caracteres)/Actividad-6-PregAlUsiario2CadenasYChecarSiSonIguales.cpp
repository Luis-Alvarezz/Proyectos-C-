/*
    BLOQUE 7. Cadena de caracteres

        Ejercicio 3:
            Pedir al usiario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales,
            en caso de no serlo, indicar cual es la mayor alfabeticamente.
*/
#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char cadena_1[200];
    char cadena_2[200];

    cout << "Comparacion de Cadenas" << endl << "\n";
    cout << "Ingrese una primera frase: " << endl;
    cin.getline(cadena_1,200);

    cout << "\n";
    cout << "Ingrese una segunda frase: " << endl;
    cin.getline(cadena_2,200);

    // Comparacacion de las cadenas:
    if(strcmp(cadena_1,cadena_2) == 0)
    {
        cout << "Ambas cadenas son iguales!!" << endl;
    }
    else
    {
        cout << "Son cadenas Diferentes.. " << endl;
        cout << "\n";
        if(strcmp(cadena_1,cadena_2) > 0)
        {
            cout << "La Cadena 1: '" << cadena_1 << "' Es mayor " << endl;
        }
        else
        {
            cout << "La Cadena 2: '" << cadena_2 << " 'Es Mayor " << endl;
        }
    }
    getch();
    return 0;
}