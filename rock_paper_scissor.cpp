#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int play(char p, char c){
    if (p == c){
        return 0;
    }

    if (p == 'r' && c == 'p'){
        return -1;
    }
    else if (p == 's' && c == 'p'){
        return 1;
    }
    else if (p == 'p' && c == 'r'){
        return 1;
    }
    else if (p == 's' && c == 'r'){
        return -1;
    }
    else if (p == 'r' && c == 's'){
        return 1;
    }
    else if (p == 'p' && c == 's'){
        return -1;
    }
}

int main(){

    char pc,player,playmore;
    
    cout << "\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t";
    cout << "\t *********** Rock, Paper and Scissors Game ***********" << endl;
    cout << "\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t";
  
    cout << endl;
    do{
        int number = 0;
        srand(time(0));       
        number = rand() % 100; 

        if (number < 33)
        {
            pc = 'r';
        }
        else if (number > 66)
        {
            pc = 's';
        }
        else
        {
            pc = 'p';
        }
         cout << "Note: \"r\" for \"Rock\", \"p\" for \"Paper\", \"s\" for \"Scissor\"." << endl;
        cout << "\t\t\t";
        cout << "Enter your choice: ";
        cin >> player;
        int result = play(player, pc);
        if(result == 1){
            cout << "\t\t\t";
            cout << "You won! Congo! " << endl;
           
        }
        else if(result == -1){
            cout << "\t\t\t";
            cout << "You lose! Bad luck next time"  << endl;
        }
        else{
            cout << "\t\t\t";
            cout << "Woah! That's Tie!" << endl;
        }
        cout << "\t\t\t";
        cout << "Do you want to Play Again?" << endl;
        cout << "\t\t\t";
        cout << "Note: Press 'e' to exit! Press Anything to continue: ";
        cin >> playmore;
        cout << "\t\t\t";
        for(int i = 0; i < 50; i++){
            cout << "-";
        }
        cout << endl;
    }while(playmore != 'e');

    return 0;
}
