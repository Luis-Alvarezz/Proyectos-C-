// Metodo burbuja:

#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int numeros[5] = {4,1,2,3,5};
    int aux;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(numeros[j] > numeros[j+1]) // Numero actual > numero + 1 o siguiente.
            {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

  // De manera ascendente:
    cout << "Orden Ascendente: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << numeros[i+1] << " "; // si dejo i sola, imprime del 0-4
    }

    // De orden Descendente
    cout << "\nDe orden Descendente: " << endl;
    for(int i = 4; i >= 0; i--)
    {
        cout << numeros[i+1] << " ";
    }
    getch();
    return 0;
}