// For-ClaseEstructurasRepetitivasJueves17deFebrero2022.cpp 



/*
*  for(expresion 1; espresion logica; expresion 2)
* {
*		conjunto de instrucciones
* }
* 
* for(int i = 0;) solo ejecuta 1 vez
* for (int i = 0; i < 10; )
* 
* palabras reservadas de for:  1.break y 2. continue
* break: funciona cuando la condicion es verdadera, cumple ésta misma y acaba el programa.
* continue: en cuento se detecta, brinca esa iteracion y lo que este despues lo omite 
*/

#include<iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 10; i++) //expresion 1 declara(de donde empieza), la expresion logica lleva la ejecucion, expresion 2 incrementa o decrementa
	{
		if (i == 4) continue; // o if (i==4) break;
		cout << "i: " << i << endl;
		// N numero de  código 
	}

	return 0;
}
