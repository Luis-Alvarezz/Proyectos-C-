// Metodo por Insercion

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int numeros[5] = {4,2,3,1,5};
    int pos, aux;

    // Algoritmo por metodo de Insercion
    for(int i = 0; i < 5; i++)
    {
        pos = i; // Es nuestra flechita (posicion).
        aux = numeros[i]; // Para saber el numero en el que vamos. Va a guardar el numero exacto en el que vamos.

        while((pos > 0) && (numeros[pos-1] > aux))
        {
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux; // Para que valla refrescando en cada iteracion del bucle en que numero vamos.
    }

    // Impresion Ascendente:
    cout << "\nOrden Ascendente: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }

    // Impresion Descendente:
    cout << "\nOrden Descendente: " << endl;
    for(int i = 4; i >= 0; i--)
    {
        cout << numeros[i] << " "; 
    }
    getch();
    return 0;
}