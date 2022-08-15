/*
  Bloque 3. Ejercicio 8: Escribe un programa que lea la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coicide 
  con alguno de los introducidos con anterioridad
*/

#include <iostream>

using namespace std;

int main()
{
	float n1,n2,n3,n4;
	
	cout << "Ingresa el primer numero: ";
	cin >> n1;
	
	cout << "\nIngrese el segundo numero: ";
	cin >> n2;
	
	cout << "\nIngrese el tercer numero: ";
	cin >> n3;
	
	cout << "\nIngrese el cuarto numero para determinar si coincide con alguno de los introducidos anterioemente: ";
	cin >> n4;
	
	//ejemplo: 15, 10, 20 y cuarto numero: 20
	if(n4==n1 && n4==n2 && n4==n3)
	{
		cout << "\nTodos los numeros son iguales! ";
	}
    else if(n4==n1)
    {
    	cout << "\nEl cuarto digito es igual al primero digito";
	}
	else if(n4==n2)
	{
		cout << "\nEl cuarto digito es igual al segundo digito";
	}
	else if(n4==n3)
	{
		cout << "\nEl cuarto digito es igual al tercer digito";
	}
	else 
	{
		cout << "\nNo coincide con ningunos de los tres numeros ingresados!!";
	}
	return 0;
}

