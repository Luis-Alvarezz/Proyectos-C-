/*
  Bloque 3. Estructuras Condicionales Multiples, "La sentencia Switch"
  
  Switch(expresion)
  {
    case literal1: 
       conjunto de instrucciones1;
       break;
    casae literal2:
       conjunto de instrucciones2;
       break;
    case literal3:
       conjunto de instrcciones3;
       break;
    case literal4:
       conjunto de instrucciones4;
       break;
    
  }
*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "Ingrese un numero entre 1-5: ";
	cin >> numero;
	
	switch(numero)
	{
		case 1:
			cout << "Es el numero 1";
			break;
		case 2:
			cout << "Es el numero 2";
			break;
		case 3:
			cout <<"Es el numero 3";
			break;
		case 4:
			cout << "Es el numero 4";
			break;
		case 5:
			cout << "Es el numero 5";
			break;
		default:
			cout << "No esta en el rango que se pidio";
			break;
	}
	return 0;
}

