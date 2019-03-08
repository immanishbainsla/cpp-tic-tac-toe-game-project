//Including User defined Header Files
#include "header.hpp"

//Main Function Starts here...
int main()
{
    while(Game_Over()) {

        system("cls");
        //Printing Game Table to the console...
        Game_Table();

        Player_Turn();

    }

    system("cls");
    Game_Table();

    if(turn == '0' && draw == false){

        cout<<"\n\t\t\tCongratulations!!! Player[1]->(X) Wins. Thanks for Playing.\n";

    }

    else if (turn == 'X' && draw == false) {

        cout<<"\n\t\t\tCongratulations!!! Player[2]->(0) Wins. Thanks for Playing.\n";

    }

    else {

        cout<<"\n\t\t\tMatch Ended in DRAW!!!  Thanks for Playing.\n";

    }

    return 0;
}
