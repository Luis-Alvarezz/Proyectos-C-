// Paso de Parametros

// Elevar al cuadrado todos los elementos de una matriz
#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Funciones a ocupar:
void MostrarMatriz(int m[][3],int numFi,int numCol);  // en el numero de columnas es OBLIGATORIO poner hasta donde llega tu atriz, las filas es opcional
void Calcular_cuadrado(int Matriz[][3], int numFilas, int NumColumnas);
void MostrarMatrizElevada(int Ma[][3],int NuFil, int NuCol);


int main()
{
    const int NumFilas = 2;// el valor NUNCA varia
    const int NumColum = 3; // El valor const NUNCA varia 
    int Mat[NumFilas][NumColum] = {{1,2,3},{4,5,6}};

    MostrarMatriz(Mat,NumFilas,NumColum);
    Calcular_cuadrado(Mat,NumFilas,NumColum);
    MostrarMatriz(Mat,NumFilas,NumColum);

    getch();
    return 0;
}

void MostrarMatriz(int m[][3],int numFi,int numCol)
{
    cout << "\nMostrando matriz original: \n";
    for(int i = 0; i < numFi; i++)
    {
        for(int j = 0; j < numCol; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}
void Calcular_cuadrado(int Matriz[][3], int numFilas, int NumColumnas)
{
    cout << "\n------Elevando la matriz al cuadrado-----\n";
    for(int i = 0; i < numFilas; i++)
    {
        for(int j = 0; j < NumColumnas; j++)
        {
            Matriz[i][j] *= Matriz[i][j]; // Elevamos al cuadrado
        }
        cout << "\n"; 
    }
}
void MostrarMatrizElevada(int Ma[][3],int NuFil, int NuCol)
{
    cout <<  "Mostrando matriz elevada al cuadrado: \n";
    for(int i = 0; i < NuFil; i++)
    {
        for(int j = 0; i < NuCol; j++)
        {
            cout << Ma[i][j];
        }
    }
}