/*
  Bloque 2. Ejercicio #5:
  
  Escriba un fragmento de programa que intercambie los valores de dos variables
  Ejemplo: x = 10;
           y = 5;
		   
	Al finalizar el programa debe marcar:  x = 5;
	                                       y = 10; */ 
	
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
   int x,y, aux;
   
   cout << "Ingrese el valor de x: ";
   cin >> x;
   
   cout << "Ingrese el valor de y: ";
   cin >> y;
   /*
   suponiendo que:
   x = 25;
   y = 15;
   
   aux = x; ó aux = 10-x;
   x = y; ó x = 15; 
   y = aux; ó y = 10;   
   */
   
   aux = x; //Aux guarda el valor de x (25)
   x = y; //Aqui x guarda el valor de y (15)
   y = aux; //queremos que y tenga el valor de x, pero aux anteriormente lo tomo.
   
   cout << "\n El nuevo valor de x es: " << x << endl;
   cout << "El nuevo valor de y es: " << y << endl;
   
   return 0;
 }                    
  
  

