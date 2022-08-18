#include<iostream>
#include<conio.h>
using std::cout; using std::cin; using std::endl;

int main()
{
    int num, factorial = 1;

    cout << "\nIngrese un numero entero: ";
    cin >> num;

    if(num < 0)
    {
        cout << "Error, solo se aceptan numeros enteros positivos. ";
    }
    else
    {
        if(num == 0)
        {
            cout << num << "!: " << factorial;
        }
        else
        {       
            for(int i = 1; i <=  num; i++)
            {
                factorial*= i;
            }
                        
            cout << num << "!: " <<  factorial;
        }
    }
    getch();
    return 0;
}
