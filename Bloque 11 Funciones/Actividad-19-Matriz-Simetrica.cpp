/*Ejercicio 15: Desarrollar una funcidén que determine si una matriz es simétrica o no. *

Una matriz es simetrica: A = A^t  ----> Si la matriz A sea igual a la transpuesta de A pero que tambien la matriz sea cuadrada (2x2,3x3).

- La matriz debe ser cuadrada. _--

- Aij = Aji

|2 5   9|       |2   5   9|
|5 8  -1|   >   |5   8  -1|      INTERCAMBIAR FILAS POR COLUMNAS, primra FILA, con 2da COLUMNA, segunda FILA con segunda COLUMNA
|9 -1 10|       |9   -1 10| */
#include <iostream>
using std::cout; using std::cin; using std::endl;

// Functions to be fill
void Add_M(int Matriz[100][100], int &num_fi, int &num_col); // int Matriz[100][100], int num_fi, int num_col --> SIN & NO SE PASAN LOS DATOS, aqui entra el paso por referencia.
void Show_M(int mat[100][100], int n_fi, int n_col);
void Change_M(int M[100][100], int n_fil, int num_co);

int main()
{
    int mat[100][100], num_fi, num_col;

    Add_M(mat,num_fi,num_col);
    Show_M(mat,num_fi,num_col);
    Change_M(mat,num_fi, num_col);
    
    return 0;
}

void Add_M(int Matriz[100][100], int &num_fi, int &num_col)
{
    cout << "\t\nIngresar matrices CUADRADAS (2z2,3x3)\n";  
    
    do
    {
        cout << "\nIngrese el numero de filas: ";
        cin >> num_fi;
        cout << "Ingrese el numero de columnas: ";
        cin >> num_col;
        if(num_fi != num_col)
            cout << "\nERROR!= Matriz NO simetrica\n"; 
    } while(num_fi != num_col);

    if(num_fi == num_col)
    {
        for(int i = 0; i < num_fi; i++)
        {
            for(int j = 0; j < num_fi; j++)
            {
                cout << "[" << i << "][" << j << "]: ";
                cin >> Matriz[i][j];
            }
        }
    }
}

void Show_M(int mat[100][100], int n_fi, int n_col)
{
    if(n_fi == n_col)
    {
        cout << "\n--------Imprimiendo matriz--------\n";
        for(int m = 0; m < n_fi; m++)
        {
            for(int n = 0; n < n_col; n++)
            {
                cout << mat[m][n] << " ";
            }
            cout << "\n";
        }
    }
}

void Change_M(int M[100][100], int n_fil, int num_co)
{
    bool band = false;
    int cont = 0;   

    if(n_fil == num_co)
    {
        cout << "\nVerificando si la matriz es simetrica\n";
        for(int e = 0; e < n_fil; e++)
        {
            for(int w = 0; w < num_co; w++)
            {
                if(M[e][w] == M[w][e])
                {
                    band = true;
                    cont++; // Se hace un cont por que debe cumplirse el numero de veces que se haga la operacion. 
                }
            }
        }
        // Comprobamos el numero de elemetos por la matriz * cont (que debe tener el numero de elementos total de la matriz)
        if((cont == n_fil*num_co) && (band == true))
        {
            cout << "\n!= Genial, matriz simetrica!! " << endl;
        }
        else
        {
            cout << "\nERROR!= Matriz NO simetrica! " << endl;
        }
    }
}