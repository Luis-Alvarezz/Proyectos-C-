    /*
        BLOQUE 7: CADENAS DE CARACTERES:

            Ejercicio 6:

            Convertir dos cadenas de minusculas a mayusculas. Compararlas, 
            y decir si son iguales o no.
    */
    #include<iostream>
    #include<conio.h>
    #include<string.h>

    using std::cout; using std::cin; using std::endl;

    int main()
    {
        char cadena_1[30];
        char cadena_2[30];

        cout << "Ingrese una primera cadena de palabra(s): " << endl;
        cin.getline(cadena_1,30);

        cout << "\n";
        cout << "Ingrese una segunda cadena de palabra(s): " << endl;
        cin.getline(cadena_2,30);
        cout << "\n";

        // Conviertiendo las cadenas a MAYUSCULAS:
        strupr(cadena_1);
        cout << "La primer cadena en MAYUSCULAS es: " << cadena_1 << endl;

        strupr(cadena_2);
        cout << "La segunda cadena en MAYUSCULAS es: " << cadena_2 << endl;

        //Comparacion de cadenas:
        if(strcmp(cadena_1,cadena_2) == 0)
        {
            cout << "Ambas cadenas son iguales!!" << endl;
        }
        else
        {
            cout << "Las cadenas son diferentes! " << endl;
        }
        getch();
        return 0;
    }