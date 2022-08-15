// Ordenamiento por seleccion

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int numeros[5] = {3,2,1,5,4};
    int aux, num_min;

    for(int i = 0; i < 5; i++) // Pimer bucle para recorrer todo el arreglo.
    {
        num_min = i; // dedusimos que la primera posicion es el "minimo", mas adelante se comprobara.
        for(int j = i + 1; j < 5; j++) // Recorremos mas el arreglo con el segundo bucle:  
        {                              // j = i+1 por que suponemos que la primera posicion es la mejor, entonces que recorra desde la sig posi. 
            if(numeros[j] < numeros[num_min])
            {           // Numeros[j] es el numero donde vamos del arreglo, numeros[min] era la suposicion del menor
                num_min = j; // en caso de que se cumpla el if, el numero de la posicion se convierte en el menor
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[num_min];
        numeros[num_min] = aux;
    }
    // Impresion Ascendente:
    cout << "\nOrden Ascendente: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }

    // Impresion Descndente:
    cout << "\nOrden Descendente: " << endl;
    for(int i = 4; i >= 0; i--)
    {
        cout << numeros[i] << " ";
    }
    getch();
    return 0;
}