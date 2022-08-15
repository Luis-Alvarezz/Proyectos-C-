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
    char frase[200];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    cout << "Ingrese una frase: " << endl;
    cin.getline(frase,200,'\n');

    for(int i = 0; i < 200; i++)
    {
        switch(frase[i])
        {
            case 'a':
            vocal_a++; // Para que aumente su contador.
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

    cout << "Vocal a ha ha sido encontrada: " << vocal_a << endl;
    cout << "Vocal e ha ha sido encontrada: " << vocal_e << endl;
    cout << "Vocal i ha ha sido encontrada: " << vocal_i << endl;
    cout << "Vocal o ha ha sido encontrada: " << vocal_o << endl;
    cout << "Vocal u ha ha sido encontrada: " << vocal_u << endl;
    getch();
    return 0;
}