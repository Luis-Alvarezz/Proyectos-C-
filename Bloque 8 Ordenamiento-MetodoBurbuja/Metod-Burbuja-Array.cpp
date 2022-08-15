#include<iostream>
#include<conio.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    int array[5];
    int n, aux;

    cout << "\n";
    cout << "\tMetodo de Burbuja" << endl;
    cout << "\nIngrese el numero de elementos que tendra el array: " << endl;
    cin >> n;

    if (n == 5)
    {
        for(int i = 0; i < n; i++)
        {
            cout << "Ingrese el numero: [" << i << "]: ";
            cin >> array[i]; 
        }

        // Mostrando el arreglo: 
         cout << "\nEl arreglo es: " << endl;
        for(int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
        // Metodo burbuja: 
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(array[j] > array[j+1])
                {
                    aux = array[j];
                    array[j] = array[j+1];
                    array[j+1] = aux;

                }
            }
        }

        cout << "\nDe modo Ascendente: " << endl;
        for(int i = 0; i < n; i++)
        {
            cout << array[i+1] << " ";
        }
    }
    else
    {
        cout << "El arreglo es de 5 elementos, vuelve a intentarlo. " << endl;
    }
    getch();
    return 0;
}