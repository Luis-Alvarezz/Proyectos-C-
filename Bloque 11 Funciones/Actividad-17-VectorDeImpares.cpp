/*
Funciones en C++

Ejercicio 14:

    Realiza una funcion que tome como
    parametros un vector de enteros y su
    tamaño e imprima un vector con los
    elementos impares del vector recibido. */

#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

// Funciones a ocupar:
void Add_Data();
void Change_Vector();
// void Show_Data();
int Vec[50],tam;

int main()
{
    Add_Data();
    Change_Vector();

    getch();
    return 0;
}
void Add_Data()
{
    cout << "\nIngrese el tamanio que tendra el array: ";
    cin >> tam;

    for(int i = 0; i < tam; i++)
    {
        cout << "Num " << i+1 << "--> ";
        cin >> Vec[i];
    }

}
void Change_Vector()
{
    int cont = 0;
    cout << "\n----Ahora sabremos los numeros impares ingresados---\n";

    for(int i = 0; i < tam; i++)
    {
        if(Vec[i] % 2 != 0)
        {
            cout << "Numero Impar " << endl;
            cont++;
        }
        else
        {
            cout << "\nNumero PAR " << endl;
        }
    }
    cout << "\nNumeros impares encontrados en total ---> " << cont << endl;
}
