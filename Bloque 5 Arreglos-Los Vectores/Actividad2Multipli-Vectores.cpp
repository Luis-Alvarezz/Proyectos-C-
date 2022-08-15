/*
    Bloque 5. Los Vectores / Arrelgos Unidimensionales

    Actividad 2: Escribe un programa que defina un vector de numeros y calcule la multiplicacion acumulada de sus elementos.
*/
#include <iostream>
#include <conio.h> // Para utilizar la funcion getch y evitar que el ejecutable se cierre. 

using std::cout; using std::cin; using std::endl;

int main()
{               //0,1,2,3
    int num[4] = {2,4,5,7};
    int mult = 1;
    
    for(int i = 0; i < 4; i++)  
    {       
        mult = mult * num[i]; // 1*2 = 2, mult pasa a tener valor de 2, 2*4=8, mult=8
        // 8 *num[i] (5), 8*5= 40, mult=40, 40*num[i](7)-> 40*7 = 280 !!
    }

    cout << "La multiplicacion del vector es: " << mult << endl;
    getch();
    return 0;
}