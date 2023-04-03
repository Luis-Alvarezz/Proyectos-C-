/*
/*Paso de parámetros de tipo vector
 Parametros de La función:
     void nombreDeFuncion (tipo nombreArreglo[], int tamañoArreglo)
 LLamada a la función
    nombreDeFuncion(nombreArreglo, tamañoArreglo)
 *

                    //Cuadrados de Los elementos del vector */
#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Funciones a ocupar:
void cuadrado(int VECT[], int tam);
void imprimeDatos(int VECTOR[], int taM);

int main()
{
    // el tamaño es fijo, es decir, constante
    const int TAM = 5; // jamas cambia el valor
    int vec[TAM] = {1,2,3,4,5};


    cuadrado(vec,TAM);
    imprimeDatos(vec,TAM);

    getch();
    return 0;
}

void cuadrado(int VECT[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        VECT[i] = VECT[i] * VECT[i];
    }
}
void imprimeDatos(int VECTOR[], int taM)
{
    cout << "\nVector al cuadrado: " << endl;
    for(int i = 0; i < taM; i++)
    {
        cout << VECTOR[i] << " ";
    }
}