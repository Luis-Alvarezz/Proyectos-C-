#include <iostream> //Libreria para el manejo de entrada y salida de datos
#include <stdlib.h> //Esta libreria la usamos por dos cosas: para una "pausa" en el programa y "clarear" todo lo antes escrito

using namespace std; //Estandarizo "std"

int main() //Funcion principal
{
 float baja=999, alta=0, media=0, temp; //Declaro variables tipo float
 
 for(int i=0; i<6; i++) //Bucle for, en el que tambien declaramos un variable tipo entero llamada "i"
 {
  cout<<"Ingrese la temperatura: "; cin>>temp; //Pedimos una valor al usuario y lo almacenamos en "temp"
  media += temp; //Declaramos que "media" es igual a "media" + "temp"
  if(temp<baja) //Si el valor en "temp" es menor al que hay en "baja"
  { //Entonces...
   baja = temp; //Declaramos "baja" igual a "temp"
  }
  if(temp>alta) //Si el valor en "temp" es mayor al que hay en "alta"
  { //Entonces
   alta = temp; //Declaramos "alta" es igual a "temp"
  }
 } //Fin del bucle for
 
 system("CLS"); //Clareamos la pantalla
 media = media / 6; //declaramos que "media" es igual a "media" dividido 6
 cout<<"La temperatura media del dia fue de: "<<media<<endl; //Imprimimos en pantalla "media"
 cout<<"La temperatura mas baja del dia fue de:  "<<baja<<endl; //Imprimimos en pantalla "baja"
 cout<<"La temperatura mas alta del dia fue de: "<<alta<<endl<<endl; //Imprimimos en pantalla "alta"
 
 system("pause"); //Pausa en el programa
 return 0; //Fin del programa
}

