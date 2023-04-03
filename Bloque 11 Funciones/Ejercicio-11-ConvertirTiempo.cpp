/*
    Ejercicio 9: Escriba una funcion nombrada tiempo () que tenga un parametro de numero 
    entero llamado totalseg y tres parametros de referencia enteros nombrados horas, min y seg.
    La funcion es convertir el numero de segundos transmitida en un numero equivalente a horas, minutos y segundos */

#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

void tiempo(int totalseg, float &horas, float &min,float &seg);
int main()
{
    float horas,min,seg;
    int totalSeg;

    tiempo(totalSeg,horas,min,seg);
    getch();
    return 0;
}
void tiempo(int totalseg, float &horas, float &min,float &seg)
{   
    cout << "\nIngrese el total de segundos: " << endl;
    cin >> totalseg;

    if(totalseg > 0)
    {
                            // Ejemplo = 5389 segTotales  = 
        horas = totalseg/3600; // 3600 cantidad de segundos en una hora.  || 5389/3600 -> 1.4969  and 5389 % 3600 --> 0.4969 
        totalseg%= 3600;

        min = totalseg / 60; // -> Cantida de segundos en 1 minuto
        totalseg%= 60;

        seg = totalseg / 1;
        totalseg%1; 
                        
        cout << "Conversion de segundos a: " << endl;
        cout << "Horas: " << horas << endl;
        cout << "Minutos: " << min << endl;
        cout << "Seg: " << seg << endl;
    }
    else
        cout << "\nError numero menor a 0" << endl;
}