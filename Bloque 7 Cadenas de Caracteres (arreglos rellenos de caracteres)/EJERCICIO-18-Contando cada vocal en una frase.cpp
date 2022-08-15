/*
    9. Realice un programa que lea una cadena de caracteres en la entrada estandar 
    y muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena.
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char texto[30];
    int longitud = 0;
    // Como seran contadores:
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    cout << "Ingrese el texto: " << endl;
    cin.getline(texto,30);

    // Para sacar la longitud del texto:
    longitud = strlen(texto);
    cout << "La longitud del texto(contando espacios) es: " << longitud << endl;
    cout << "\n";

    // Para hacer el texto en minusculas:
    strlwr(texto); //-> Para llevar un control acerca de Mayusculas o minusculas.

    // Para ir de letra entre letra:
    for(int i = 0; i < 30; i++)
    {
        switch(texto[i])
        {
            case 'a' :
                vocal_a++;
                break;
            case 'e':
                vocal_e++;
                break;
            case 'i':
                vocal_i++;
                break;
            case 'o':
                vocal_o++;
                break;
            case 'u':
                vocal_u++;
                break;    
        }
    }

    cout << "Numero de vocales a: " << vocal_a << endl;
    cout << "Numero de vocales e: " << vocal_e << endl;
    cout << "Numero de vocales i: " << vocal_i << endl;
    cout << "Numero de vocales o: " << vocal_o << endl;
    cout << "Numero de vocales u: " << vocal_u << endl;

    getch();
    return 0;
}
