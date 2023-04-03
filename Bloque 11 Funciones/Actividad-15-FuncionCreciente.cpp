
/*Funciones en C++
    Ejercicio 12:
        Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado
        crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es 
        mayor o igual que el elemento que le procede al vector:
*/
#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Funciones a ocupar:
void add_Data();   
void OrderFunc(int V[], int tam);
int tam, vect[50];


int main()
{
    add_Data();
    OrderFunc(vect,tam);

    getch();
    return 0;
}

void add_Data()
{
    cout << "\nHola. " << endl;
    cout << "\nIngrese el tamanio del array: ";
    cin >> tam;

    // llenado de datos
    for(int i = 0; i < tam; i++)
    {
        cout << "Num: " << i+1 << ": ";
        cin >> vect[i];
    }
}

void OrderFunc(int V[], int tam)
{
    float min= 999, mayor = 0;                                                                                            //3, 2, 5, 1, 4
    cout << "\nComprobacion del ordenamiento del vector-- " << endl; // Ordenamiento de modo creciente o ascendente : num-> 25,42,13,57,35 ---> Modo creciente: 13 < 25 < 35 < 45 < 57.
    // Obtener el valor mimino:
    for(int i = 0; i < tam; i++)
    {
        if(min > V[i])
        {
            min = V[i];
        }
    }
    cout << "\nEl minimo dato es: " << min << endl;

    /*for(int i = 0; i < tam; i++)
    {
        mayor = V[i];       // Esto nos indica si cada numero esta acomodado de manera ascendente de uno por uno
        if(min < mayor)
        {
            cout << "Array ordenado crecientemente " << endl;
        }
        else
        {
            cout << "Array no ordenado crecientemente" << endl;
        }
    }*/

    int aux = 1;
    for(int i = 0; i < tam; i++)
    {
        if(V[i] < V[i+1])
        {
            aux++;
        } 
    }
    if(aux == tam)
    {
        cout << "\nArreglo acomodado ascendentemente. " << endl;
    }
    else
    {
        cout << "\nNou, Arreglo no acomodado ascendentemente " << endl;
    }

}