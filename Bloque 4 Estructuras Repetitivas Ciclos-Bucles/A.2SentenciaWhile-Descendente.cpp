/*
  Bloque 4. Sentencia While descendente
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
	i = 10;
	
	while (i>=1)
	{
		cout << i << endl;
		i--; // ó tambien pude ser i = i - 1;
	}
	getch();
	return 0;
}

// al entrar a nuestor archivos y abrir este especificamente, el ejecutable (.exe) no nos deja ver el contenido 
// para ello se ingrese la libreria #include <conio.h>  y arribba del return 0 se pone = getch(); !!!!
