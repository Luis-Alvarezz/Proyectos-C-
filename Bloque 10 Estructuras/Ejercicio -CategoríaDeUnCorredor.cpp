/*
    1. Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos:
    Nombre, Edad, Sexo, Club, pedir datos al usuario para un corredor, y asignarle una categoria:
    -Juvenil <= 18 años
    -Señor <= 40 años 
    -Veterano <= 40 Años

    Posteriormente imprimir todos los datos del corredor, incluyendo toda su categoria de competicion:
*/
#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

struct corredor
{
    char nombre[30];
    int edad;
    char sexo[10];
    char club[20];
}persona_1;

int main()
{   
    char categoria[20];
     
    cout << "\nIngrese el nombre del corredor: " << endl;
    cin.getline(persona_1.nombre,30);

    cout << "Edad: " << endl;
    cin >> persona_1.edad;

    fflush(stdin); // Aqui se "rompe el programa", para ello aqui se LIMPIA EL BUFER 

    cout << "Sexo: " << endl;
    cin.getline(persona_1.sexo,10);

    cout << "Club: " << endl;
    cin.getline(persona_1.club,20);
    
    if (persona_1.edad <= 18)
    {
        cout << strcpy(categoria, " Juvenil ");
    }
    else if (persona_1.edad <= 40)
    {
        strcpy(categoria," Senor ");
    }
    else
    {
        strcpy(categoria," Veterano ");
    }
    
    cout << "Datos del corredor: ";
    cout << "Nombre: " << persona_1.nombre << endl;
    cout << "Edad: " << persona_1.edad << endl;
    cout << "Sexo: " << persona_1.sexo << endl;
    cout << "Club: " << persona_1.club << endl;
    cout << "CATEGORIA: " << categoria << endl;
    getch();
    return 0;
}