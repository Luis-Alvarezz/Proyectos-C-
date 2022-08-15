/*
  Bloque 3. Actividad 9: cambia un numero entero con el mismo valor pero en romanos
  
       M = 1000
       D = 500
       C = 100
	   L = 50
	   X = 10
	   V = 5
	   I = 1 
*/

#include <iostream>

using namespace std;

int main()
{
	int numero,unidades,decenas,centenas,millar;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	//este numero se diviridá, ejemplo: 2152 se divida en -> 2000 + 1000 + 50 + 2
	
	unidades = numero%10; numero = numero/10; /*numero = 2152 si lo dividimos / 10 el RESIDUO (cuando dividimos /10 la coma corre un valor hacia la izquierda
	// por lo tanto  nada mas quedaria 2, por lo tanto: Unidades = 2, despues al numeros lo estamos dividiendo /10 (numero 2152, como tomamos las unidades "2")
	entonces al dividir /10 estamos dejando 215 /// unidades = numero%10; (lo que esta haciendo es rescatar y guardar un valor el 2 
	porque se toma al residuo 215,2 en este caso es dos)
	*/
	decenas = numero%10; numero = numero/10; /* decenas= como quedaba 215 ¿Cuales eran las decenas? es "5" que equivale a 50, entonces al dividir 215/10 pues 
    numero es igual a 21
	*/
	centenas = numero%10; numero = numero/10; // centenas = como necesitamos 100 en este caso 21, necesitamos el 1, entonces al dividir 1/10 el residuo es 1
	// Y numero pasa a valor = 2
	millar = numero%10; numero = numero/10;/* millar tendria el valor de 2 y numero pasa a valer 0
	*/
	
	switch(millar)
	{
		case 1:
			cout << "M";
			break;
		case 2:
			cout << "MM";
			break;
		case 3:
			cout << "MMM";
			break;
	}
	switch(centenas)
	{
		case 1: 
		cout << "C";
		break;
		case 2:
			cout << "CC";
			break;
	    case 3:
	    	cout << "CCC";
	    	break;
	    case 4:
	    	cout << "CD"; //d == 500 - 100(C)
	    	break;
	    case 5:
	    	cout << "D"; //D = 500
	    	break;
	    case 6:
	    	cout << "DC"; // D = 500 + C = 100 = DC(600)
	    	break;
	    case 7:
	    	cout << "DCC";
	    	break;
	    case 8:
	    	cout << "DCCC";
	    	break;
	    case 9:
	    	cout << "CM"; // M = 1000 - C = 100 == CM(900)
	    	break; 
	}
	switch(decenas)
	{
		case 1:
			cout << "X"; // X = 10
			break;
		case 2:
			cout << "XX";
			break;
		case 3:
			cout << "XXX"; // XXX = 30
			break;
		case 4:
			cout << "L"; // L = 50 - X = 10 == XL(40)
			break;
		case 5:
			cout << "L";
			break;
		case 6:
			cout << "LX";
			break;
		case 7:
			cout << "LXX";
			break;
		case 8:
			cout << "LXXX";
			break;
		case 9:
			cout << "XC"; // C = 100 - X= 10 == XC(90)
			break;
	}
	switch(unidades)
	{
		case 1:
			cout << "I";
			break;
		case 2:
			cout << "II";
			break;
		case 3:
			cout << "III";
			break;
		case 4:
			cout << "IV";
			break;
		case 5:
			cout << "V";
			break;
		case 6:
			cout << "VI";
			break;
		case 7:
			cout << "VII";
			break;
		case 8:
			cout << "VIII";
			break;
		case 9:
			cout << "IX";
			break;
	}
	return 0;
}
