/*
   Bloque 4. La sentencia do while
      do
      {
        conjunto de instrucciones; 
  	  }
  	  while (expresion logica);
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	i = 1;
	
	do
	{
		cout << i << endl;
		i++; //aumenta el interador de uno en uno tambien puede ser i = i + 1;
	}
	while(i<=10);
	
	getch();
	return 0;
}
