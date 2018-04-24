/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 20th, 2018, 12:10 PM
 * Purpose:  savitch Chap3 Practice Problem 1: Rock, Paper, Scissors
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char plyr1,plyr2;
    
    //Initialize Variables
    plyr1=rand()%3+'R'; //RST
    plyr1=plyr1>'S'?'P':plyr1;//PRS
    plyr2=rand()%3+'R'; //RST
    plyr2=plyr2>'S'?'P':plyr2;//PRS
  
    //Players choice
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Player 1 = "<<plyr1<<endl;
    cout<<"Player 2 = "<<plyr2<<endl;
    
    //Determine the winner
    if(plyr1==plyr2){
        cout<<"The game is a tie"<<endl;
    }else if(plyr1=='P'){
        if(plyr2=='S'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    }else if(plyr1=='S'){
        if(plyr2=='R'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    }else{
        if(plyr2=='P'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    }
    
    
    //Output data
    
    //Exit stage right!
    return 0;
}