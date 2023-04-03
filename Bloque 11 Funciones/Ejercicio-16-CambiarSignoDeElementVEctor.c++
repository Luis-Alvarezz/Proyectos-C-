/*  EJERCICIO 13:
     Realiza una funcidén que tome como pardmetros un vector de numeros y su
    tamaño y cambie el signo de Los elementos del vector. */
#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Funciones a ocupar:
void Add_Data();
void Change_Sign();
void Print_Data();

int Vec[50],tam;

int main()
{
    Add_Data();
    Change_Sign();
    Print_Data();

    getch();
    return 0;
}
void Add_Data()
{
    cout << "\nIngrese el tamanio del vector: ";
    cin >> tam;

    for(int i = 0; i < tam; i++)
    {
        cout << "Num " << i+1 << ": ";
        cin >> Vec[i]; 
    }
}
void Change_Sign()
{
    for(int i = 0; i < tam; i++)
    {
        Vec[i] *= -1;
    }
}
void Print_Data()
{
    cout << "\n----Imprimiendo datos---" << endl;
    for(int i = 0; i < tam; i++)
    {
        cout << "\n Pos " << i +1 << "-> ";
        cout << Vec[i];
    }
}