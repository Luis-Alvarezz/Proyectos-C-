/*
    BLOQUE 7: Cadena de caracteres

        Ejercicio 4:
        Crear una cadena que contenga la siguiente frase: "Hola que tal", 
        luego crear otra cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre 
        al final de la primera cadena y mostrar el mensaje completo
        "Hola que tal, (nombre de usuario)".
*/

#include <iostream>
#include <conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char primera_Cadena[] = "Hola que tal ";
    char nombre_usuario[10];
    char bienvenida[200];

    cout << "Ingrese su nombre: " << endl;
    cin.getline(nombre_usuario,10);

    // primero pasamos la primer cadena a la tercera.
    strcpy(bienvenida,primera_Cadena);

    // despues contatenamos/añadimos el resto de texto de la cadena 2 a la cadena 3
    strcat(bienvenida,nombre_usuario);

    cout << "\n";
    cout << bienvenida << endl;
    getch();
    return 0;
}