/* Funciones en C++
    Ejercicio 19:
        
        Escriba una funcion que en C++ llamada mayor()
        que devuela la fecha mas reciente de cualquier
        par de dechas que se le transmitan.
         Por ejemplo, si se transmiten las fechas 10/09/2005
         y 11/03/2015 a mayor() 
         sera devuelta la segunda mayor*/
#include <iostream>
using std::cout; using std::cin; using std::endl;


struct Data
{
    int Day;
    int Month;
    double year;
}Arry[30];
int cont = 1, diff = 0;

// Funtions to be fill:
void Add_Date();
void mayor();
void Show_Date();

int main()
{
    Add_Date();
    Show_Date();
    mayor();

    return 0;
}


void Add_Date()
{
    char opc;
    cout << "\t\n----- Welcome User ----- \n";
    
    do
    {
        cout << endl;
        cout << "Do you want add Dates?:-> \nResp= ";
        cin >> opc;
        cout << endl;

        if(opc == 'y' || opc == 'Y')
        {
            cont++;
            diff++;
            for(int q = cont - 1; q < cont; q++)
            {
                cout << "---User:" << q << endl;
                
                // Fill the year:
                do
                {
                    cout << "Enter a year (greater that 2000 - Actuality): ";
                    cin >> Arry[q].year;

                    if(Arry[q].year < 2000 || Arry[q].year > 2023)
                        cout << "\nError!= Enter a correct values\n";

                } while(Arry[q].year < 2000 || Arry[q].year > 2023); // -> Es correcta la condicion, pregunta hasta que se adjunte un dato correcto dentro del rango
                                                                    // Arry[q].year >= 2000 && Arry[q].year < 2023 -> Esta mal, por que se cumpla o NO la condicion, el programa sigue
                // Fill the Month(s):
                do
                {
                    cout << "Enter a Month (1-12): ";
                    cin >> Arry[q].Month;

                    if(Arry[q].Month < 1 || Arry[q].Month > 12)
                        cout << "\nError!= Enter a correct values \n" << endl;
                } while(Arry[q].Month < 1 || Arry[q].Month > 12);

                // Fill the day(s):
                do
                {
                    cout << "Enter a Day (For Example: 1-30): ";
                    cin >> Arry[q].Day;

                    if(Arry[q].Day < 1 || Arry[q].Day > 31)
                        cout << "\nError!= There are no day greater that 31\n";
                } while(Arry[q].Day < 1 || Arry[q].Day > 31); // Basicamente es ¿Que ROMPE esta condicion? pues que el dia sea menor a 1 osea negativo y mayor a 31 
            }
        }   
        else
            return;  
    } while((opc != 'Y' || opc != 'y') || (opc == 'N' || opc == 'n')); // opc == 'Y' || opc == 'y' esta condicion si pongo 'e', 'o' lo que sea, termina el programa !!

}

void Show_Date()
{
    cout << "\t\n********** Print the Date(s) registred **********\n";
    for(int a = 1; a <= cont-1; a++)  // con a = 0, esta mal, por que estoy comenzando a contar desde 1, y toma el valor 0 !!!!
    {                           // Me hacia falta el cont - 1 xD para descontar el usuario extra que se crea al incrementar y no aceptar !!! 
        cout << "User--- " << a << endl;
        cout << "Day-> " << Arry[a].Day << endl;
        cout << "Month-> " << Arry[a].Month << endl;
        cout << "Year-> " << Arry[a].year << endl;
        cout << "\n"; 
    }
}

void mayor()
{
    int aux = 0;
    aux = cont-diff;

    cout << "\nLa fecha mas reciente ingresada fue: " << endl;
    //( for(int r = 1; r < cont - 1; r++)
    for(int r = 0; r < aux; r++)
    {
        if(cont = cont-1)
        {
            cout << "\t\n---------- Date recient---------- \n " << endl;
            cout << Arry[r].Day << endl;
            cout << Arry[r].Month << endl;
            cout << Arry[r].year << endl;
        }
    }
}