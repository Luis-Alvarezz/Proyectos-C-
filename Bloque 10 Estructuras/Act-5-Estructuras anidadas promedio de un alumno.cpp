/*
    Hacer 2 estructuras, una llamda promedio que tendra los siguientes campos:
    nota1,nota2,nota3; y otra llamada alumno que tendra los siguientes miembros:
    nombre,edad,sexo, hacer que la estructura promedio este anidada en la estructura alumno, 
    luego pedir todos los datos para un alumno, luego calcular su promedio y por ultimo
    imprimir todos los datos incluyendo el promedio
*/
#include<iostream>
#include <conio.h>
using std::cout; using std::cin; using std::endl;

struct promedio
{
    float nota_1;
    float nota_2;
    float nota_3;
};

struct alumno
{
    char nombre[30];
    int edad;
    char sexo[15];
    struct promedio prom; // estructura a anidar, llamada prom
}alum[100]; // arreglo de alum

int main()
{
    int num_alumnos,suma = 0;
    float suma_prom[num_alumnos]; // Suma de promedio, respecto a los alumnos ingresados
    cout << "\nIngrese el numero de alumnos: ";
    cin >> num_alumnos;

    for(int i = 0; i < num_alumnos; i++)
    {
        fflush(stdin); // Limpiar el bufer en cada iteracion
        cout << "\nAlumno: " << i+1 << endl;
        cout << "Ingrese el nombre: ";
        cin.getline(alum[i].nombre,30);
        cout << "Edad: ";
        cin >> alum[i].edad;
        fflush(stdin); // Limpiar el bufer por segunda ocacion.
        cout << "Sexo: ";
        cin.getline(alum[i].sexo,15);

        // Uso de Estructuras Anidadas
        cout << "\nNotas del Alumno " << endl;
        cout << "\nIngrese la primera calificacion: ";
        cin >> alum[i].prom.nota_1;
        
        cout << "Ingrese la segunda calificacion: ";
        cin >> alum[i].prom.nota_2;

        cout << "Ingrese la tercera calificacion: ";
        cin >> alum[i].prom.nota_3;
    
        suma_prom[i] = (alum[i].prom.nota_1 + alum[i].prom.nota_2 + alum[i].prom.nota_3) / 3;
        // Si dejamos suma_num[num_alumnos] -> No refrezca en cada iteracion, todos los alumnos tienen el mismo promedio.
    }
    // Impresion de datos:
    cout << "\n---Imprimiendo los datos correspondientes--- " << endl;
    for(int i = 0; i < num_alumnos; i++)
    {
        fflush(stdin); 
        cout << "Alumno " << i+1 << ": " << endl;
        cout << "Nombre: " << alum[i].nombre << endl;
        cout << "Edad: " << alum[i].edad << endl;
        cout << "Sexo: " << alum[i].sexo << endl;
        cout << "Promedio de: " << alum[i].nombre << ": " << suma_prom[i] << endl;
        cout << " " << endl;
    }
    getch();
    return 0;
}