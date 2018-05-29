/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 17, 2018, 10:00 AM
 * Purpose:  Deck creation for dominion
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char NCARDS=7;//Column Dimensions for the players 2-D array


//Function Prototypes Here
void filMny(char [], char);
void filPts(char [], char);
void filAct(char [], char);
void filPlry(char [][NCARDS], char);
void prntDck(char [], char);
void prntPly(char [][NCARDS], char);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const char NPLYRS=2;
    const char NMNY=99-2*5;// 2 Plyrs start with 5 bronze money
    const char NPTS=90-2*2;//2 plyrs start with 2 1 pt cards
    const char NACT=100;
    char mnyDeck[NMNY];
    char ptsDeck[NPTS];
    char actDEck[NACT];
    char cards[NPLYRS][NCARDS];
    
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Hello World"<<endl;

    //Exit
    return 0;
}
void filMny(char m[], char n){
    char cnt=0;
    //33 Silver
    for(int i=1;i<=33;i++){
        m[cnt++]='S';
    }
    //33 Gold
    for(int i=1;i<=33;i++){
        m[cnt++]='G';
    }
    //33 Bronze
    for(int i=1;i<=33;i++){
        m[cnt++]='B';
    }
    if(cnt!=n)cout<<"Error in filling the money deck";
}

void filPts(char p[], char n){
    char cnt=0;
    //30 3's
    for(int i=1;i<=30;i++){
        p[cnt++]='3';
    }//30 6's
    for(int i=1;i<=30;i++){
        p[cnt++]='6';
    }//30-4 1's
    for(int i=1;i<=26;i++){
        p[cnt++]='1';
    }
    if(cnt!=n)cout<<"Error in filling the point deck";
}

void filAct(char a[], char n){
    char cnt=0
    for(int i=1;i<=10;i++){
        for(int j=1;j<10;j++){
            a[cnt++]='a'+i;
        }
    }
    if(cnt!=n)cout<<"Error in filling the action deck";
}

void filPlry (char [] [NCARDS], char n){
    for(int i=0;i<=n;i++){
        //Each player gets 5 bronze cards 
        for(int j=0;j<5;j++){
            p[i][j]='B';
        }
        //Each player gets 2 1pt cards
        for(int j=5;j<NCARDS;j++){
            p[i][j]='1';
        }
    }
}
void prntDck(char d[], char n, char perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntPly(char [] [NCARDS], char){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0; j<NCARDS;j++){
            cout<<p[i][j]<<" ";
        }
    }
}