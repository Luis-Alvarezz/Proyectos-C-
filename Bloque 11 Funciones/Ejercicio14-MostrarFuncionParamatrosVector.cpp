/*
    Ejercicio 14:
    Realice una funcion que tome como parametros un vector de numeros enteros
    y devuelva la suma de sus elementos */
#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Funciones a ocupar:
void datos(/*int vect[], int tam*/);
int CalcSuma(int vect[], int tam);
void Showvect(int vect[],int tam);
 
 // OPCIOOOOOOOOOOOON 3  Modo Global.
int tam;
int vect[50];

int main()
{
    /* //OPCION 2
    const int tam = 5;
    int vect[tam],suma_s;*/

    datos(/*vect,tam*/);
    CalcSuma(vect,tam);  
    Showvect(vect,tam);

    getch();
    return 0;
}

void datos(/*int vect[], int tam*/) // MAL, al mandar los parametros, los estaba almacenando de manera "local", mientras que en las variables globales no se modificaba nada, por ende valores basura.
{
    cout << "Ingrese el tamanio del vector: ";
    cin >> tam;
    cout << "\n--Ingrese los 5 numeros del vector a llenar--: " << endl;
        /*  OPCION 1
        const int tam = 5;
        int vect[tam];*/
    
    for(int i = 0; i < tam; i++)
    {
        cout << "Num: " << i+1 << ": ";
        cin >> vect[i];
    }
}
int CalcSuma(int vect[], int tam)
{
    int suma = 0;
    for(int i = 0; i < tam; i++)    
    {
        suma+= vect[i]; // sumara ejemplo: vect: 1,3,6,9,12 --> suma = 31
    }
    return suma;
} 
void Showvect(int vect[],int tam)
{
    cout << "\nLa suma del vector es: " << CalcSuma(vect,tam);
}