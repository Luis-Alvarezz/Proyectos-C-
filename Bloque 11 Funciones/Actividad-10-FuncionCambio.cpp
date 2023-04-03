/*      FUNCIONES EN C++
 Ejercicio 8:

    Escriba una funcion nombrada cambio() que tenga un parametro en numero entero y seis parametros 
    de referencia en numeros entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente.
    La funcion tiene que considerar el valor entero transmitido como una cantidad en dolares y convertir el valor
    en el numero menor de billetes equivalente */

#include <iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

// Declaracion de funcion
void cambio(int num, int &cien, int & cincuenta, int &veinte, int &diez, int &cinco, int &uno);

int main()
{
    int num, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
    
    cambio(num,cien,cincuenta,veinte,diez,cinco,uno);  
 
    getch();
    return 0;
}

void cambio(int num, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cout << "Ingrese un numero: ";
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        if(num > 0)
        {                       // ejemplo: num -> 342
            cien = num/100;         // 342/100 = 3.42
            num%= 100; // para obtener el residuo      // 342 % 100 = 0.42 -> ese residuo se almacena.  

            cincuenta = num/50;
            num%= 50;   

            veinte = num/100;
            veinte%= 20;

            diez = num/10;
            num%= 10;

            cinco = num/5;
            num%= 5;

            uno = num/1;
            num%= 1;
        }
        else
        {
            cout << "Error, numero menor a 0" << endl;
        }
    }
    cout << "\n\tBanco Nacional de los gringos " << endl;
    cout << "Billetes de 100: " << cien << endl;
    cout << "Billetes de 50: "  << cincuenta << endl;
    cout << "Billetes de 20: " << veinte << endl;
    cout << "Billetes de 10: " << diez << endl;
    cout << "Billetes de 5: " << cinco << endl;
    cout << "Billetes de 1: " << uno << endl;
}