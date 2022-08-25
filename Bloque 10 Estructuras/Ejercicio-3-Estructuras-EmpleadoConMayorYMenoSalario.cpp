/*
    Ejercicio 3:
    Realizar un programa que lea un arreglo de estructuras de los datos de N empleados de la empresa
    y que imprima los datos del empleado con mayor y menor salario.
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

struct empleado
{
    char nombre[20];
    float salario;
}emp[100];

int main()
{
    int num_empleados, pos_Mayor = 0, pos_menor = 0;
    float salario_mayor = 0, salario_menor = 999999;
    cout << "\nIngrese el numero de empleados: ";
    cin >> num_empleados;

    for(int i = 0; i < num_empleados; i++)
    {
        fflush(stdin); // Para limpiar el bufer 
        cout << "\nIngrese el nombre del empleado " << i+1 << ": " << endl;
        cin.getline(emp[i].nombre,20);
        cout << "\nIngrese su salario: " << endl;
        cin >> emp[i].salario;

        // SALARIOS-> 200 - 250 - 100

        // Para saber el salario mayor: 
        if(emp[i].salario > salario_mayor)
        {
            salario_mayor = emp[i].salario;
            pos_Mayor = i;  // Se guarda la posicion en este caso, el mayor seria 250, es decir, pos 1.
        }

        // Para saber el salario menor:
        if(emp[i].salario < salario_menor)
        {
            salario_menor = emp[i].salario;
            pos_menor = i; // Se guarda la posicion
        }
    }
    //Imprimiendo datos:
    cout << "\n---EMPLEADOS---" << endl;
    for(int i = 0; i < num_empleados; i++)
    {
        cout << "Empleado -> " << i+1 <<  ": " <<  emp[i].nombre << endl;
        cout << "Salario -> " << ": " << emp[i].salario << endl;
    }                                               // Para eso e guarda la posicion, para saber quien es
    cout << "\nDatos del empleado con mayor salario: " << emp[pos_Mayor].nombre << endl;
    cout << "Con salario de: " << salario_mayor  << endl;
    cout << "\nDatos del empleado con menor salario: " << emp[pos_menor].nombre << endl;
    cout << "Con salario de: " << salario_menor << endl;
    getch();
    return 0;
}