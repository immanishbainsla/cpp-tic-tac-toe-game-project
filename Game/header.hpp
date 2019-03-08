//Including IOSTREAM Header file
#include <iostream>
#include <cstdlib>

//Using 'std' NAMESPACE from IOSTREAM..
using namespace std;

    //Declaring Global Variables
    int choice;
    char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char turn = 'X';
    int row, column;
    bool draw = false;


void Game_Table() {

    //Printing instructions to the console..
    cout << "\n\n\n\t\tTik Tak Toe (Tik-Cross) Game" << endl;
    cout << "\n\t\tInstructions: " << endl;
    cout << "\t\t\t1) This is a two player game." << endl;
    cout << "\t\t\t2) Player 1 will be [X]." << endl;
    cout << "\t\t\t3) Player 2 will be [0]." << endl;
    cout << "\t\t\t4) Enter Position to place your X/0(Cross/Tick)." << endl;
    cout << "\n\t\tLet's Play the Game." << endl;
    cout << "\n\t\tPlayer[1]->(X)\n\t\tPlayer[2]->(0)" << endl;

    cout<<"\n\t\t\t==================================\t"<<endl;
    cout<<"\t\t\t||\t                 \t||"<<endl;
    cout<<"\t\t\t||\t                 \t||"<<endl;

    //Printing Game Table
    cout<<"\t\t\t||\t     |     |     \t||"<<endl;
    cout<<"\t\t\t||\t  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  \t||"<<endl;
    cout<<"\t\t\t||\t_____|_____|_____\t||"<<endl;
    cout<<"\t\t\t||\t     |     |     \t||"<<endl;
    cout<<"\t\t\t||\t  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  \t||"<<endl;
    cout<<"\t\t\t||\t_____|_____|_____\t||"<<endl;
    cout<<"\t\t\t||\t     |     |     \t||"<<endl;
    cout<<"\t\t\t||\t  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  \t||"<<endl;
    cout<<"\t\t\t||\t     |     |     \t||"<<endl;

    cout<<"\t\t\t||\t                 \t||"<<endl;
    cout<<"\t\t\t||\t                 \t||"<<endl;
    cout<<"\t\t\t==================================\t\n";

}

void Player_Turn() {

    choice = 0;

    if(turn == 'X') {
        cout<<"\n\n\t\t\tPlayer[1]->(X) Turn: ";
    }
    if(turn == '0') {
        cout<<"\n\n\t\t\tPlayer[2]->(0) Turn: ";
    }

    cin>>choice;

    switch(choice){
        case 1: row = 0;
                column = 0;
            break;
        case 2: row = 0;
                column = 1;
            break;
        case 3: row = 0;
                column = 2;
            break;
        case 4: row = 1;
                column = 0;
            break;
        case 5: row = 1;
                column = 1;
            break;
        case 6: row = 1;
                column = 2;
            break;
        case 7: row = 2;
                column = 0;
            break;
        case 8: row = 2;
                column = 1;
            break;
        case 9: row = 2;
                column = 2;
            break;

        default: cout<<"\n\t\t\tINVALID CHOICE."<<endl;
            break;

    }

    if(turn == 'X' && arr[row][column] != 'X' && arr[row][column] != '0') {
        arr[row][column] = 'X';
        turn = '0';
    }
    else if(turn == '0' && arr[row][column] != 'X' && arr[row][column] != '0') {
        arr[row][column] = '0';
        turn = 'X';
    }
    else {
        cout<<"\n\t\t\tAlready Filled. Try Another Choice.\n";
        Player_Turn();
    }

}

bool Game_Over() {

    //Check whether Player wins...
    for(int i=0; i<3; i++) {

        if((arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]) || (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])) {

            cout<<"\n\t\t\tGame Over.\n\n";
            return false;

        }

    }

    if((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])) {

        return false;

    }

    //Checking whether Game is in Progress..
    for(int i=0; i<3; i++) {

        for(int j=0; j<3; j++) {

            if(arr[i][j] != 'X' && arr[i][j] != '0') {

                return true;

            }

        }

    }

    //Draw Case..
    draw = true;
    return false;

}
