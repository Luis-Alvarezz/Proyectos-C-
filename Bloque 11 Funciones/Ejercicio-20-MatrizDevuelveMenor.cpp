/*
    Funciones en C++
    
    Ejercicio 16:
        
        Realice una funcion que dada una matriz
        y un numero de fila de la matriz
        devuelva el menor 
        de los elementos almacenados en dicha fila */
#include <iostream>
using std::cout; using std::cin; using std::endl;

// Funtions to be fill;
void Add_M(int Ma[][50], int &num_fil, int &num_col);
void Show_M(int M[][50], int n_f, int n_c);
void Return_Row(int M[][50], int nf);

int main()
{
    int Matriz[50][50], num_filas = 0, num_colum = 0;

    Add_M(Matriz, num_filas, num_colum);
    Show_M(Matriz, num_filas, num_colum);
    Return_Row(Matriz, num_filas);
    
    return 0;
}

void Add_M(int Ma[][50], int &num_fil, int &num_col)
{
    cout << "\n\tWelcome User, please enter the following data: \n";
    cout << "Enter a number of rows: ";
    cin >> num_fil;

    cout << "Enter a number of columns: ";
    cin >> num_col;

    for(int m = 0; m < num_fil; m++)
    {
        for(int n = 0; n < num_col; n++)
        {
            cout << "num [" << m << "][" << n << "]: ";
            cin >> Ma[m][n];
        }
    }
}

void Show_M(int M[][50], int n_f, int n_c)
{
    cout << "You have entered tha matrix: \n";

    for(int m = 0; m < n_f; m++)
    {
        for(int n = 0; n < n_c; n++)
        {
            cout << M[m][n] << " ";
        }
        cout << endl;
    }
}

void Return_Row(int M[][50], int nf)
{
    int row_com = 0, menor = 999;
    cout << "\t\nWell, now let`s compare one row of the entered matrix: \n";

    do
    {
        cout << "Enter what row you want to see and analyzen: \n-> ";
        cin >> row_com;
    }while(row_com < 0 || row_com >= nf);

    for(int a = 0; a < nf; a++)
    {
        if(row_com < nf)
        {
            cout << M[row_com][a] << " ";  // Imprime la Matriz en la [posicion de la fila que se haya asignado][numeros de la columna de esa FILA].
            if(menor > M[row_com][a])
            {
                menor = M[row_com][a];
            }
        }
    }

    cout << "\nMinor Number: " << menor << endl;

}