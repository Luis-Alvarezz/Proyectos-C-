// Ejercicio 14. BLOQUE 4: 

/*
		En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
		
		a) Alumnos que aprobaron todos los examenes.
		b) Alumnos que aprobaron al menos un examen.
		c) Alumnos que aprobaron unicamente el ultimo examen. 
		
		Realice un programa que permita la lectura de los datos y el calculo de las estadisticas. 
*/

#include <iostream>	
#include <vector>

using std::cout; using std::cin; using std::endl;

int main()
{
	int apro_todos_exa = 0, apro_un_exa = 0, apro_ulti_exa = 0;
    int caliFi = 0;
    std::vector<int> todosExamen,mediosExamen,unoExamen;
    std::vector<int> calificacionesVector;

	for(int i = 0; i < 5; i++)
	{
		cout << "En un rango del 0 al 10, elija la calificacion: " << endl;
		cout << "\n" << endl;
		cout << "Alumno: " << i+1 << endl;
		for(int s = 0; s < 3; s++)
		{
			int cali;
			cout << "Ingrese la calificacion del examen "<<s+1<<": "  << endl;
			cin >> cali;
            calificacionesVector.push_back(cali);
		}
        if(calificacionesVector[0] == 10 && calificacionesVector[1] == 10 && calificacionesVector[2] == 10){
            todosExamen.push_back(i);
        }
        if(calificacionesVector[0] < 10 || calificacionesVector[1] < 10 || calificacionesVector[2] < 10){
            mediosExamen.push_back(i);
        }
        if(calificacionesVector[2] < 6){
            unoExamen.push_back(i);
        }
        calificacionesVector.clear();
	}

	cout << "Los alumnos aprobaron todos los examenes " << todosExamen.size() << endl;
	cout << "Los alumnos que solo reprobaron un examen fueron: " << mediosExamen.size() << endl;
	cout << "Los alumnos que solo aprobaron el ultimo examen fueron: " << unoExamen.size() << endl;
}