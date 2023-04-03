#include <iostream>
using std::cout; using std::cin; using std::endl;

// Funcion a ocupar:
void Ordenar(int vec[20], int num);

int main()
{   
    int vector[20], numero;

    Ordenar(vector, numero);

    return 0;
}

void Ordenar(int vec[20], int num)
{
    cout << "\nIngrese la cantidad de numeros que tendra el arreglo\n->  ";
    cin >> num;


    // Primero llenamos el arreglo de x cantidad de numeros ingresados por el usuario.
    for(int m = 0; m < num; m++)
    {
        cout << "Num ["  << m << "]: ";
        cin >> vec[m];
    }

    
    //  Verificamos numeros ingredsados:
    cout << "\nCorroborando arreglo de numeros: \n";
    for(int i =  0; i < num; i++)
    {
        cout << vec[i] << " " << endl;
    }

    int pos = 0, aux = 0, pos2 = 0, aux2 = 0;
    int SaveRe[20], cont= 0;
    // Algoritmo de busqueda y acomodo de datos:
    for(int j = 0; j < num; j++)
    {
        pos = j; // es nuestra flechita que ira de posicion en posicion.
        aux = vec[j]; // para saber que numero es.

        while((pos > 0) && (vec[j-1] > aux)) // es una comparacion a la izquierda,
        {               // si el anterior es > al num sig:  Ejm: 5 > 3?
            vec[j] = vec[j-1]; // Sip, entonces el 5, pasa a la posicion del 3 y viceversa.
            pos--;
        }
        vec[j] = aux; // Para refrescar la iteracion.


        // Comparacion de repeticion de numeros :
        aux2 = vec[j+1];  // en aux2 almacenamos el siguiente numero del arreglo,
        if(aux == aux2) // cmoparamos [pos_actual] == [pos_siguiente]
        {
            SaveRe[j] = vec[j];
            cont++;
        }

        cout << "\nNumeros del arreglo repetidos: " << cont << ": " << SaveRe[j] << endl;
    }
}