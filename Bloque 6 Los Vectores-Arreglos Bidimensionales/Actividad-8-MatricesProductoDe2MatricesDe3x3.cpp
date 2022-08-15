/*
    Bloque 6. Matrices  o Tablas

     Ejericio 8:
        Realice un programa que calcule el producto de 
        de dos matrices cuadradas de 3x3
*/
#include<iostream>
#include<conio.h> // Libreria para usar la funcion getch(); y evitar que se cierre el ejecutable.

using std::cout; using std::cin; using std::endl;

int main()
{
    int array_numero_1[100][100];
    int array_numeros2[100][100];
    int filas_a, columnas_a, filas_b, columnas_b;
    int array_producto[100][100];

    cout << "\tPrograma para calcular el producto de dos matrices cuadradas.";
    cout << "\n";

    cout << "Llenando la matriz 1: " << endl;
    cout << "Ingrese el numero de filas: " << endl;
    cin >> filas_a;

    cout << "Ingrese el numero de columnas: " << endl;
    cin >> columnas_a;
    cout << "\n";

    //Llenando la matriz 1:
    for(int i = 0; i < filas_a; i++)
    {
        for(int j = 0; j < columnas_a; j++)
        {
            cout << "Ingrese un numero: " << "[" << i << "][" << j << "]" << endl;
            cin >> array_numero_1[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    // Mostrando la matriz 1:
    cout << "Corroborando la matriz 1: " << endl;
    for(int i = 0; i < filas_a; i++)
    {
        for(int j = 0; j < columnas_a; j++)
        {
            cout << array_numero_1[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Ahora llenaremos las matriz 2:" << endl;
    cout << "Ingrese el numero de filas: " << endl;
    cin >> filas_b;

    cout << "Ingrese el numero de columnas: " << endl;
    cin >> columnas_b;
    cout << "\n";
    // LLENANDO LA MATRIZ 2:
    for(int i = 0; i < filas_b; i++)
    {
        for(int j = 0; j < columnas_b; j++)
        {
            cout << "Ingrese un numero de la matriz 2: " << "[" << i << "][" << j << "]: " << endl;
            cin >> array_numeros2[i][j];
        }
    }
    cout << "\n";
    // Mostrando la matriz 2:
    cout << "Corroborando la matriz 2: " << endl;
    for(int i = 0; i < filas_b; i++)
    {
        for(int j = 0; j < columnas_b; j++)
        {
            cout << array_numeros2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";


    // Para multiplicar las matrices:                                i, y j estan moviendode por cada elemento de array_producto(matriz 3),
    cout << "Multplicando las 2 matrices: " << endl;                // Mientras que z ira agarrando elemento por elemento de array_numero1 y 
    for(int i = 0; i < filas_a; i++)                               // Lo ira multiplicando por cada elemento de la columna de b
    {
        for(int j = 0; j < columnas_b; j++) 
        {   
            for(int z = 0; z < columnas_a; z++)
            {   
                array_producto[i][j] = array_producto[i][j] + array_numero_1[i][z] * array_numeros2[z][j];
                                                                        //fila |columna          fila|columna
            }
        }
    }

    // Mostrar la multiplicacion: 
    for(int i = 0; i < filas_a; i++)
    {
        for(int j = 0; j < columnas_b; j++)
        {
            cout << array_producto[i][j]  << " ";
        }
        cout << "\n";
    }

    getch();
    return 0;
}