/*  
    BLOQUE 7. Cadena de Caracteres
        Ejercicio 2:

        Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido
        hacia otro arreglo de caracteres. 
*/
#include<iostream>
#include<conio.h>
#include <string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char array[200];
    char transpaso[200];
    int longitud = 0;

    cout << "Ingrese una cadena de caracteres: " << endl;
    cin.getline(array,200); // Aqui almacenamos el texto que puso el usuario, respetando el limite declarado.

    cout << "\n";
    cout << "Bien, ahora vamos a pasar el texto a otro arreglo: " << endl;

    strcpy(transpaso,array); // Aqui pasamos la cadena de array hacia -> transpaso

    cout << "El texto que ingreso, fue: " << endl;
    cout << transpaso << endl;

    longitud = strlen(transpaso);

    cout << "\n";
    cout << "La longitud del texto es: " << endl;
    cout << longitud << endl;



    getch();
    return 0;
}
