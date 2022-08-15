// Ejercicio While 

#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    int numero;

    cout << "Ingrese un numero(0 para salir): ";
    cin >> numero;

    while(numero!= 0)
    {
        cout << "Ingrese un numero (0 para salir)" << endl;
        cin >> numero;
    }
 
    system("pause");
    return 0;
}