/*
    Bloque 5: Los vectores/arreglos
    Actividad 8: 
        Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicado por 2 
        y muestre el segundo arreglo. 
*/

#include<iostream>
#include<conio.h> //Libreria para usar la funcion getch(); y evitar que se cierre el ejecutable

using std::cout; using std::cin; using std::endl;

int main()
{
    int array[5]; // Primer arreglo con 5 posiciones
    int n; // variable donde se guarda el numero de vueltas del arreglo
    int array_copia[5]; // se crea la variable de tipo entara array_copia donde se le otorgan los 5 lugares donde se guardaran los elementos del arreglo original
    int multiplicacion = 1; // se crea la variable de tipo entera para multiplicar cada posicion del vector.

    cout << "\n";
    cout << "Ingrese el numero de elementos que tendra el vector/arreglo (DEBEN DE SER 5 NUM) :" << endl;
    cin >> n; 

        if(n == 5)
    {
        //Para controlar el numero de vueltas.
        for(int i = 0; i < n ; i++)
        {
            cout << "Ingrese el numero de la posicion: " << i+1 << endl; //se le pone i+1 por "Estetica" y asi evitar que imprima ingrese el num en la pos: 0, e inicie en 1
            cin >> array[i]; // AQUI ALMACENAMOS LOS NUMEROS EN EL ARREGLO.
        }

        // Para corroborar en que posicion se guardan los elementos del vector.
        for(int i = 0; i < n; i++)
        {
            cout << "Posicion: " << i << "->" << array[i] << endl;
        }

        // PARA PASAR LOS ELEMENTO DEL ARRAY AL ARRAY_COPIA:
        cout << "Ahora pasaremos todos los valores del vector/arreglo 1 a un nuevo vector pero multiplicado x 2: " << endl;
        cout << "\n";
        for(int i = 0; i < 5; i++)
        {
            array_copia[i] = array[i]; // pasamos los datos del arreglo "original" al arreglo_copia
            multiplicacion = 2 * array_copia[i];
            cout << "El nuevo arreglo multiplicado x2 es: " << multiplicacion << endl;
        }
    }
    else
    {
        cout << "No se puede realizar, tiene que un arreglo con 5 numeros!! " << endl;
    }
    getch();
    return 0;
}
