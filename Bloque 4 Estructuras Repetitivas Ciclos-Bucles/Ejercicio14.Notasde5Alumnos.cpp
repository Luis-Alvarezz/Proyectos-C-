
// Ejercicio 14. BLOQUE 4: 

/*
		En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
		
		a) Alumnos que aprobaron todos los examenes.
		b) Alumnos que aprobaron al menos un examen.
		c) Alumnos que aprobaron unicamente el ultimo examen. 
		
		Realice un programa que permita la lectura de los datos y el calculo de las estadisticas. 
*/
/*
#include <iostream>	

using std::cout; using std::cin; using std::endl;

struct Alumno
{
	int exa = 3;
}alumnos;

int main()
{
	int apro_todos_exa = 0, apro_un_exa = 0, apro_ulti_exa = 0;

	for(int i = 1; i <= 5; i++)
	{
		cout << "En un rango del 0 al 10, elija la calificacion: " << endl;
		cout << "\n" << endl;
		cout << "Alumno: " << i << endl;
		for(int i = 0; i < 3; i++)
		{
			float cali;
			cout << "Ingrese la calificacion del examen: "  << endl;
			cin >> cali;
		}

		if (apro_todos_exa > 5)
		{
			apro_todos_exa+= 1;
		}
		if(apro_un_exa > 1)
	}

	cout << "Los alumnos que aprobaron todos los examenes " << apro_todos_exa << endl;
	cout << "Los alumnos que solo aprobaron un examen fueron: " << apro_un_exa << endl;
	cout << "Los alumnos que solo aprobaron el ultimo examen fueron: " << apro_ulti_exa << endl;
}
// +++++
*/

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	float exa1 = 0, exa2 = 0, exa3 = 0;
	float apro_todos_exa = 0, apro_un_exa = 0, apro_ulti_exa = 0;

	cout << "\t En un rango de 0 - 10, proporcione las calificaciones de los alumnos " << "\n" << endl;
	for(int i =1; i <= 5; i++)
	{
		cout << "Alumno: " << i << endl;
		cout << "\n";

		cout << "Escriba la calificacion del primer examen: " << endl;
		cin >> exa1;

		
		cout << "Escriba la calificacion del segundo examen: " << endl;
		cin >> exa2;

		
		cout << "Escriba la calificacion del tercer examen: " << endl;
		cin >> exa3;

		
		if(exa1 > 5 && exa2 > 5 && exa3 > 5)
		{
			apro_todos_exa+= 1;
		}
		if (exa1 < 10 || exa2 < 10 || exa3 < 10)
		{
			apro_un_exa+= 1;
		}
		if (exa3 < 5)
		{
			apro_ulti_exa+= 1;
		}

	}
	cout << "Los alumnos que aprobaron todos los examenes fueron: " << apro_todos_exa << endl;
	cout << "Los alumnos que solo aprobaron un examen fueron: " << apro_un_exa << endl;
	cout << "Los alumnos que solo aprobaron el ultimo examen fueron: " << apro_ulti_exa << endl;
}