/*
    Cadena de Caracteres.
   -> arreglo pero relleno de puros caracteres.

*/

#include<iostream>
#include<conio.h>
#include<string.h>

using std::cout; using std::cin; using std::endl;

int main()
{
    char palabra[] = "Alejandro";
    char palabra_2[] = {'A','l','e','j','a','n','d','r','o','\0'}; // se pone '\0' por que asi evitamos que se repita la pabara 2 veces.
    char nombre[30]; 

    cout << palabra << endl;
    cout << "\n";
    cout << palabra_2 << endl;

    cout << "\n";
    cout << "Ingrese su nombre: " << endl;
    // cin >> nombre; -> Ejemplo: eL Usuario pone: "Luis Alvarez", solo imprime Luis. el Cin encuentra un espacio y para el termina alli la cadena.
   // Opcion 2: gets(nombre); // Lo malo es que almacena toda la cadena completa, utiliza memoria que no le pertenece.
    cin.getline(nombre,30,'\n');

    cout << nombre;
    getch();
    return 0;
}
