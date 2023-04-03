/* 

        Funciones en C++
        Ejercicio 16:

    Realice una funcion que dada una matriz
    y un numero de fila de la
    matriz devuelva el menor de los
    elementos almacenados en dicha fila.
 */
#include <iostream>
using std::cout; using std::cin; using std::endl;


//Functions to be fill:
void Add_Matriz(int Ma[50][50], int &num_filas, int &num_colum);
void Show_M(int M[50][50], int n_fi, int b_co);
void Revision_Rows(int Mat[][50], int num_f, int num_col);

int main()
{
    int Matriz[50][50], num_filas, num_columnas;

    Add_Matriz(Matriz, num_filas, num_columnas);
    Show_M(Matriz, num_filas, num_columnas);
    Revision_Rows(Matriz, num_filas, num_columnas);

    return 0;
}

void Add_Matriz(int Ma[50][50], int &num_filas, int &num_colum)
{
    cout << "\t\n----Buen dia usuario----\n" << endl;
    cout << "\nIngrese el numero de filas: ";
    cin >> num_filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> num_colum;

    for(int m = 0; m < num_filas; m++)
    {
        for(int n = 0; n < num_colum; n++)
        {
            cout << "[" << m << "]" << "[" << n << "]: ";
            cin >> Ma[m][n];
        }
    }
}

void Show_M(int M[50][50], int n_fi, int n_co)
{
    cout << "\t\nMostrando la matriz\n";
    for(int i = 0; i < n_fi; i++)
    {
        for(int j = 0; j < n_co; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }
}

void Revision_Rows(int Mat[][50], int num_f, int num_col)
{
    //int fil_selec, Copy_M[fil_selec][50],nu_f, mayor = 0;}
    int nu_f;

    do
    {
        cout << "\nIngrese el numero de la fila a tomar para hacer la comparacion de numeros\n";
        cin >> nu_f;
    } while (nu_f > num_f || nu_f < 0);

    int min = Mat[nu_f][0];

    for(int k = 1; k < num_col; k++)
    {
        if(min > Mat[nu_f][k]) 
            min = Mat[nu_f][k];
    }

    cout << "minimo: " << min << endl;

    //cout << "\nEl numero menor de la fila " << fil_selec << " es: " << mayor << endl;
    // comprobar el mayor de un arreglo
    /*for(int i = 0; i < array; i++)
        if(mayor > array[i] 
        {
            mayor = a
        })*/
}
