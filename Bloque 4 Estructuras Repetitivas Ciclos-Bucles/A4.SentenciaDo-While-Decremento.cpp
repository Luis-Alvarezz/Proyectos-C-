/*
  Bloque 4. Sentencia Do-While  DESCENDENTE
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int i;
	i = 10;
	
	do
	{
		cout << i << endl;
		i--; // Decrementa el iterador de uno en uno!!! 
	}
	while(i>=1);
	
	system("pause");
	return 0;
}
