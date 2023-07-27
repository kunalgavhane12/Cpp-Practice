/******************************************************************************
Tic-Tac-Toe Game
*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;
void printBorad();
int checkWin();
void system();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
    int player = 1 ,input,result,status = -1;
    while(status==-1)
    {
        
        player = (player%2==0) ? 2 : 1;
        char mark = (player == 1) ? 'X' : 'O';
        cout << "Please enter Number for player: "<< player << endl;
        cin >> input;
        
        if(input < 1 || input >9)
        {
            cout << "Invaild Input" << endl;
        }
        if(board[input]!='X' && board[input]!='O')
        {
            board[input] = mark;
        }else
        {
            cout <<"Already filled.Please choose another Number: "<<endl;
            continue;
        }
       
        printBorad();
       result = checkWin();
        if(result == 1)
        {
            cout << "Player: " << player << " is the winner" << endl;
            return 0;
        }
        else if(result == 0)
        {
            cout << "Draw Match" << endl;
            return 0;
        }
        
        player++;
    }
    return 0;
}
void printBorad()
{
    system("clear");
    cout<<"**********Tic-Tac-Toe***************" << endl << endl;
    cout << "   |   |  "<<endl;
    cout << " "<<board[1]<<" | "<<board[2]<<" | "<<board[3]<<" "<<endl;
    cout << "___|___|___"<<endl;
    cout << "   |   |  "<<endl;
    cout << " "<<board[4]<<" | "<<board[5]<<" | "<<board[6]<<" "<<endl;
    cout << "___|___|___"<<endl;
    cout << " "<<board[7]<<" | "<<board[8]<<" | "<<board[9]<<" "<<endl;
    cout << "   |   |  "<<endl<<endl;
}

int checkWin()
{
    if(board[1]==board[2] && board[2]==board[3])
    return 1;
    if (board[4]==board[5] && board[5]==board[6])
    return 1;
    if(board[7]==board[8] && board[8]==board[9])
    return 1;
    if (board[1]==board[4] && board[4]==board[7])
    return 1;
    if (board[2]==board[5] && board[5]==board[8])
    return 1;
    if (board[3]==board[6] && board[6]==board[9])
    return 1;
    if ( board[1]==board[5] && board[5]==board[9])
    return 1;
    if (board[3]==board[5] && board[5]==board[7])
    return 1;
    
    int count=0;
    for(int i=0;i<9;i++)
    {
        if(board[i]=='X' || board[i]=='O')
        count++;
    }
    if(count==9)
    {
        return 0;
    }
    return -1;
    
}

