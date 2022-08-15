/*
    BLOQUE 7: Cadenas de caracteres.

     Ejercicio 7:
        Pedir su nombre al usuario en MAYUSCULAS, si su nombre empieza por la letra A
        convertir su nombre a minusculas, caso contrario, no convertirlo.
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char nombre[20];
    char aux[] = {'A'};
    cout << "\n";
    cout << "Buen dia usuario, ingrese su nombre en MAYUSCULAS: " << endl;
    cin.getline(nombre,30);

    //Comparando cadenas si son mayor de 0, es decir si la cadena nombre(palabra que ingresa el usuario), se compara con la cadena aux
    if(strcmp(nombre,aux) > 0)    // si el nombre inicia con una "A" MAYUSCULA, compara con la cadena Aux para corroborar que coincida con A
    {                              // de ser asi, el > 0 indica que es verdad, entra el if.
        strlwr(nombre); 
        cout << "Bien, su nombre inicia con A, entonces: " << endl;
        cout << "Su nombre en minusculas es: " << nombre << endl;
    }
    else
    {
        cout << "Su nombre no inicia con A, asi se queda xd" << endl;
        cout << "Ingreso: " << nombre << endl;
    }
    
    // LOS MISMO A HACER:
    cout << "\n";
    if(nombre[0] == 'A')
    {
        strlwr(nombre);
        cout << "Su nombre con Minusculas es: " << nombre;
    }

    getch();
    return 0;
}