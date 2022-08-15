/*
  Bloque 4: La sentencia While:
  
     while (expresion logica)
     {
        conjunto de instrucciones;
  	 }
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
	
	i = 1;
	
	while (i<=10)
	{
		cout << i << endl; 
		i = i + 1;   // aqui puede ir como i = i+1 ó i++ (significa i = i +1)
	}	
	getch();
	return 0;
}
