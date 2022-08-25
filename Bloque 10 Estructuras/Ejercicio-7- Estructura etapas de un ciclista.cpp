/*
Ejercicio 7:
        Defina una estructura que indique el tiempo empleado por un ciclista en una etapa
        La estructura debe tener tres campos: horas, minutos y segundos.
        Escriba un programa que dado n etapas calcule el tiempo total 
        empleado en correr todas las etapas 
*/
#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

struct tiempo
{
    float horas;
    float minutos;
    float segundos;
}etapas[100]; // se crea arreglo de etapas.

int main()
{
    int num_etapas, horas_totales = 0, minutos_totales = 0, segundos_totales = 0;
    cout << "\nIngrese el numero de etapas: ";
    cin >> num_etapas;

    for(int i = 0; i < num_etapas; i++)
    {
        cout << "\nEtapa: " << i+1 << endl;
        cout << "\nHoras recorridas: ";
        cin >> etapas[i].horas;
        cout << "Num de minutos: ";
        cin >> etapas[i].minutos;
        cout << "Segundos: ";
        cin >> etapas[i].segundos;

        segundos_totales += etapas[i].segundos;
        if(segundos_totales >= 60)
        {
            segundos_totales -= 60;
            minutos_totales++;
        }
        minutos_totales += etapas[i].minutos;
        if(minutos_totales >= 60)
        {
            minutos_totales -= 60;
            horas_totales++;
        }
        horas_totales += etapas[i].horas;
    }
    /*
        example: 
        H : M  : S
        1 : 35 : 15
        2 : 12 : 3
        1 : 25 : 35
        ------------
        5 :  12  : 53
    */
    cout << "\nTiempo total empleado: " << endl;
    cout << "Horas: " << horas_totales << endl;
    cout << "Minutos: " << minutos_totales << endl;
    cout << "Segundos: " << segundos_totales << endl;
    getch();
    return 0;
}