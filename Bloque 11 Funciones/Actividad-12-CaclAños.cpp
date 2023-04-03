/*
    Ejercicio 10:
        Escriba una funcion nombrada calc_años() que tenga un 
        parametro entero que represente el numero total de dias desde la fecha 1/1/2000 y parametros
        de referencia nombrados año,mes y dia. La funcion es calcular el año,mes y dia actual 
        para el numero dado de dias que se le transmitan para este problema suponga que cada año tiene 365 dias 
        y cada mes tiene 30 dias
        PERO, si 12 meses * 30 dias  = 360, por lo tanto sobran 5 dias */

#include <iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

 // Funciones a ocupar:
void calcAnios(int num, int &year, int &month, int &day);

int main()
{
    int num, year, month, day;
    calcAnios(num,day,month,year);
}

void calcAnios(int num, int &year, int &month, int &day)
{
        cout << "\n";
        cout << "\t\n--Welcome dear user --" << endl;
        cout << "Please, enter a numer for know the data with 2000's year: ";
        cin >> num;

        if(num > 0 && num <= 365)          //1          2            3
        {  // example: num-> 50     ---- Enero:1-30, Febrero:31-60, Marzo:61-90

            /*      Enero             Febrero
                1,2,3,4,5,6,7       1,2,3,4,5,6,7
                8,9,10,11,12,13     8,9,10,11,12,13
                14,15,16,17,18,19   14,15,16,17,18,19
                20,21,22,23,24,25   20,21,22,23,24,25
                26,27,28,29,30      26,27,28,29,30*/

            year = (num/365)+2000; // ejem: num=125  ---> 125/365 = 0.342 -> solo toma el 0
            num%= 365; // 125 % 365 = .342

            month = (num/30)+1;  // seguimos: 125/30 = 4.17  ---> 4 meses
            num%= 30;

            day = num%30; // Lo que sobra son los dias   

            if(num >= 1 && num <= 30)
            {
                cout << "Month: Enero " << endl;
            }
            else if (num >= 31 && num <= 60)
            {
                cout << "Month: Febrero " << endl;
            }
            else if(num >= 61 && num <= 90)
            {
                cout << "Month: Marzo " << endl;
            }
            else if(num >= 91 && num <= 120)
            {
                cout << "Month: Abril " << endl;
            }
            else if(121 >= 91 && num <= 150)
            {
                cout << "Month: Mayo " << endl;
            }
            else if(num >= 151 && num <= 180)
            {
                cout << "Month: Junio " << endl;
            }
            else if(num >= 181 && num <= 210)
            {
                cout << "Month: Julio " << endl;
            }
            else if(num >= 211 && num <= 240)
            {
                cout << "Month: Agosto " << endl;
            }
            else if(num >= 241 && num <= 270)
            {
                cout << "Month: Septiembre " << endl;
            }
            else if(num >= 271 && num <= 300)
            {
                cout << "Month: Octubre " << endl;
            }
            else if(num >= 301 && num <= 330)
            {
                cout << "Month: Noviembre " << endl;
            }
            else if(num >= 331 && num <= 365)
            {
                cout << "Month: Diciembre " << endl;
            }
            else
            {
                return;
            }
            
            cout << "\nFor u, today is: " << endl;
            cout << "Day-> " << day;
            cout << "\nMonth-> " << month;
            cout << "\nYear-> " << year << endl;
            cout << "\nData: " << day << "|" << month << "|" << year<< endl;
        }
        else
        {
             cout << "Error!= Try again with numbers Greater 0 or smaller at 365." << endl;
        }
}       