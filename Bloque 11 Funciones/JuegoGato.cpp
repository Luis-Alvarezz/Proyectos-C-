#include <iostream>
#include <conio.h>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;

// Funciones a ocupar:
int Menu(); 
void Users();
void Tablero(char &matriz[3][3]);
void game();

struct S_Game
{
    string name1;
    string name2;
}Player;

int main()
{
    char matriz[3][3];
  switch (Menu())
    {
        case 1: 
            Users();    
            game();
            Tablero(matriz[3][3]);
            break;
        case 2:
            exit(0);
        default:
            cout << "Invalid Input, try again " << endl;
        break;
    }
    return 0;
}
int Menu()
{
    int op;
    cout << endl;
    cout << "---Welcome user, a the Gato's Game--- " << endl;
    cout << " ?What do you want to do? " << endl;
    cout << "1. Play the game " << endl;
    cout << "2. Exit " << endl;
    cin >> op;

    return op; 
}
void Users()
{
    system("clear");

    fflush(stdin);
    cout << "Enter a first player: ";
    getline(cin,Player.name1);
    fflush(stdin);
    cout << "Enter a second player: ";
    getline(cin,Player.name2);

    system("clear");
    cout << "\tWelcome ->" << Player.name1 << "  and -> " << Player.name2 << endl;
}
void Tablero(char *matriz[][0])
{
    char matriz[3][3] = {'1','2','3','4','5','6','7','8','9'};

    system("clear");
    cout << endl;
    cout << "    " << matriz[0][0] << "  |  " << matriz[0][1] << "  |  " << matriz[0][2] << endl; // Space " "-> 4
    cout << "   " << "---------------" << endl;
    cout << "    " << matriz[1][0] << "  |  " << matriz[1][1] << "  |  " << matriz[1][2] << endl; // Space " "-> 4
    cout << "   " << "---------------" << endl;
    cout << "    " << matriz[2][0] << "  |  " << matriz[2][1] << "  |  " << matriz[2][2] << endl; // Space " "-> 4
    cout << endl;
} 
void game(char *matriz[][0])
{
    int op1, op2,emp = 0, pos1,pos2;
    bool end_Game = false;
    
    cout << "\nPlayer 1: " << Player.name1 << endl;
    cout << "Choose your value: 'X or O' -> ";
    cin >> op1;
    if((op1 == 'X') || (op1 == 'x') || (op1 == 'O') || (op1 == 'o'))
    {
        cout << "Value choosen successfully ";
    }   
    else
    {
        cout << "Try again!!"  << endl;
        cin >> op1;
    }
    cout << "Player 2: " << Player.name2 << endl;
    cout << "Choose your value different from the last player: 'X or O' -> ";
    cin >> op2;
    if(op2 == op1)
    {
        cout << "Error!= this value has been chosen, try again " << endl;
        cin >> op2;
    }
    
    while(end_Game == false)
    {
        if(emp != 9 && end_Game != true)
        {
            cout << "Player 1 " << Player.name1 << "Enter value (1-9): ";
            cin >> pos1;
            
            switch(pos1)
            {
                case 1:
                        if(matriz[0][0] == 'x' || matriz[0][0] == 'X' || matriz[0][0] == 'o' || matriz[0][0] == 'O')
                        {
                            cout << "Busy position " << endl;
                            break;
                        }
            }
        }
    }
}