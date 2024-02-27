/*--------------Title: Tic-Tac-Toe game----------------
----------------Date: 24/02/2024-----------------------
----------------Author: Ujjwal------------------------*/
//XO GAME
#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n{3};
    int position1,position2;
    int key{0};
    char opt1,opt2;
    string p1,p2;
    
    cout<<"\nWelcome to the game players."<<endl;
    cout<<"Player 1 chooses first in \"X\" or \"O\" and plays first turn.\n"<<endl;
    cout<<"Player1 enter you name: ";
    cin>>p1;
    cout<<"Player2 enter your name: ";
    cin>>p2;
    cout<<"\nPlayer1 is choosing...\nFor \"x\"(press 1)/\"Y\"(press 2): ";
    while(true){
        cin>>key;
        if(key==1){
            opt1='X',opt2='O';
            break;
        }
        else if(key==2){
            opt1='O',opt2='X';
            break;
        }
        else
            cout<<"Not a valid option, choose again! : ";
    }
    cout<<"\n"<<p1<<": "<<opt1<<"\n"<<p2<<": "<<opt2<<endl;
    cout<<"\nRULES:";

    vector<vector<char>> grid (n,vector<char>(n,'_'));

    //printing grid
    cout<<"\n  c1 c2 c3"<<endl;
    for(int i{0};i<n;++i){

        if(i==0)
        cout<<"r1 ";
        else if(i==1)
        cout<<"r2 ";
        else
        cout<<"r3 ";

        for(int j{0};j<n;++j){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n\n";
    }
    cout<<"\nTo fill in:\n(r1,c1)(press \"1\") (r1,c1)(press \"2\") (r1,c1)(press \"3\")\n";
    cout<<"(r1,c1)(press \"4\") (r1,c1)(press \"5\") (r1,c1)(press \"6\")\n";
    cout<<"(r1,c1)(press \"7\") (r1,c1)(press \"8\") (r1,c1)(press \"9\")\n"<<endl;

    bool end =false;
    int c=0;
    while(c<9){

        //asking input position from p1
        if(end!=true&&c<9){
            cout<<"\n"<<p1<<" turn: ";
            cin>>position1;
            c+=1;
            //grid filling criteria after input from Player1
        if(position1==1)
        grid[0][0]=opt1;
        else if(position1==2)
        grid[0][1]=opt1;
        else if(position1==3)
        grid[0][2]=opt1;
        else if(position1==4)
        grid[1][0]=opt1;
        else if(position1==5)
        grid[1][1]=opt1;
        else if(position1==6)
        grid[1][2]=opt1;
        else if(position1==7)
        grid[2][0]=opt1;
        else if(position1==8)
        grid[2][1]=opt1;
        else if(position1==9)
        grid[2][2]=opt1;
      
        //printing grid after taking input from Player1
        for(int i{0};i<n;++i){       
            for(int j{0};j<n;++j){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }

        //player1 winning condition
        if((grid[0][0]==opt1&&grid[0][1]==opt1&&grid[0][2]==opt1)||(grid[1][0]==opt1&&grid[1][1]==opt1&&grid[1][2]==opt1)||(grid[2][0]==opt1&&grid[2][1]==opt1&&grid[2][2]==opt1)||(grid[0][0]==opt1&&grid[1][0]==opt1&&grid[2][0]==opt1)||(grid[0][1]==opt1&&grid[1][1]==opt1&&grid[2][1]==opt1)||(grid[0][2]==opt1&&grid[1][2]==opt1&&grid[2][2]==opt1)||(grid[0][0]==opt1&&grid[1][1]==opt1&&grid[2][2]==opt1)||(grid[0][2]==opt1&&grid[1][1]==opt1&&grid[2][0]==opt1)){
            cout<<"\n"<<p1<<" won...";
            end=true;break;
        }
        }
        
        

        //asking input position from p2
        if(end!=true&&c<9){
            cout<<"\n"<<p2<<" turn: ";
            cin>>position2;
            c+=1;
            //grid filling criteria after taking input from Player2
        if(position2==1)
        grid[0][0]=opt2;
        else if(position2==2)
        grid[0][1]=opt2;
        else if(position2==3)
        grid[0][2]=opt2;
        else if(position2==4)
        grid[1][0]=opt2;
        else if(position2==5)
        grid[1][1]=opt2;
        else if(position2==6)
        grid[1][2]=opt2;
        else if(position2==7)
        grid[2][0]=opt2;
        else if(position2==8)
        grid[2][1]=opt2;
        else if(position2==9)
        grid[2][2]=opt2;

        //printing grid after taking input from Player2
        for(int i{0};i<n;++i){       
            for(int j{0};j<n;++j){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }

        //player2 winning condition
        if((grid[0][0]==opt2&&grid[0][1]==opt2&&grid[0][2]==opt2)||(grid[1][0]==opt2&&grid[1][1]==opt2&&grid[1][2]==opt2)||(grid[2][0]==opt2&&grid[2][1]==opt2&&grid[2][2]==opt2)||(grid[0][0]==opt2&&grid[1][0]==opt2&&grid[2][0]==opt2)||(grid[0][1]==opt2&&grid[1][1]==opt2&&grid[2][1]==opt2)||(grid[0][2]==opt2&&grid[1][2]==opt2&&grid[2][2]==opt2)||(grid[0][0]==opt2&&grid[1][1]==opt2&&grid[2][2]==opt2)||(grid[0][2]==opt2&&grid[1][1]==opt2&&grid[2][0]==opt2)){
            cout<<"\n"<<p2<<" won...";
            end=true;
        break;
        }
        }

        
        
        
    }
    if(end==false)
    cout<<"\nIt's a draw...";
    return 0;
}
