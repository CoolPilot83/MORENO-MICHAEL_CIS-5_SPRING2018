/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 20, 2018, 11:30 AM
 * Purpose:  Uno Game for Project
 */

//System Libraries Here
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void StartMN();                 //Start Menu w/Play or View Current Score
void ScBdDip();                 //Score Board Read from File
void GmPlrCt();                 //Game Player Count Menu
void filDeck(char [], char);    //Fill Deck Function
char color(char);               //Color for Deck
char face(char);                //Face for Deck 
void shuffle(char [], char);    //Shuffle Deck
void prtDeck(char [], char, char);//Print Deck
void prtDck(char [], char, char);//Print Deck
char pulDeck(char [], char);    //Pull from Deck
//void deal1(char [],vector, vector, int);                   //Deal 8 Cards to Each Player

//Program Execution Begins Here
int main(int argc, char** argv) {
    //seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const char DECKSZ=108;
    char deck[DECKSZ];
    const char HNDSZ=8;
    char hand[HNDSZ];
    char choice1;
    char choice2;
    
    //Menu for Play Game or View Score Board
        //Loop and Display menu
    StartMN();
    cin>>choice1;
    switch(choice1){
        case '1':{filDeck(deck, DECKSZ);prtDck(deck, DECKSZ, 25);/*GmPlrCt();*/
            break;}
        case '2':{ScBdDip();break;}  
        default: cout<<"Exiting Program"<<endl;
        }

    
    
    
    //Menu for Player Count
    //cin>>choice2;
    //switch(choice2){
        //case '1':{break;}
       // case '2':{ScBdDip();break;}
        //case '3':{ScBdDip();break;}  
       // default: cout<<"Exiting Program"<<endl;
        //}

    //Shuffle Deck
    shuffle(deck, DECKSZ);
    //prtDeck(deck, DECKSZ, 25);
    
    //Deal Them Out!
    //deal1(deck[DECKSZ],vector pHand1, vector pHand2, 8);
    //Process/Calculations Here
    
    //Output Located Here
 

    //Exit
    return 0;
}

void StartMN(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 to Play UNO!"<<endl;
    cout<<endl;
    cout<<"Type 2 for Current Score Board"<<endl;
    cout<<endl;
    cout<<"Type any other key to Exit"<<endl;
}

void GmPlrCt(){
    //Display menu
    cout<<endl;
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for You vs. 1x Ai!"<<endl;
    cout<<endl;
    cout<<"Type 2 for You vs. 2x Ai!"<<endl;
    cout<<endl;
    cout<<"Type 3 for You vs. Friend vs. 1x Ai!"<<endl;
    cout<<endl;
    cout<<"Type any other key to Exit"<<endl;
}


    
















void ScBdDip(){
   
}

void filDeck(char c[], char n){
    for(int eachCrd=0;eachCrd<n;eachCrd++){
        c[eachCrd]=eachCrd;
    }
}

char color(char card){
    string colorVal="RGBY";
    if(card<25)return 'R';
    else if(card<50) return 'G';
    else if(card<75) return 'B';
    else if(card<100) return 'Y';
    else return 'W';
}

char face(char card){
    string faceVal="0112233445566778899SSWWPP";
    if(card<100)return faceVal[card%25];
    return '\0';
}

char wilds(char card){
    string wildVal="WWWW4444";
    if(card>99){
        return wildVal[card%25];
    }
    else return 0;
}

void shuffle(char c[], char nCard){
    for(int shfl=1;shfl<=7;shfl++){
        for(int card=0;card<nCard;card++){
            int random=rand()%nCard;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}

void prtDeck(char deck[], char nCard, char perLine){
    for(int card=0;card<nCard;card++){
        cout<<face(deck[card])<<color(deck[card])<<wilds(deck[card])<<" ";
        if(card%perLine==(perLine-1))cout<<endl;
        
    }
}

void prtDck(char deck[], char nCard, char perLine){
    cout<<endl;
    cout<<"Here is the Deck. It will be shuffled in a moment!"<<endl;
    for(int card=0;card<nCard;card++){
        cout<<face(deck[card])<<color(deck[card])<<wilds(deck[card])<<" ";
        if(card%perLine==(perLine-1))cout<<endl;
        
    }
}

//void deal1(char deck[DECKSZ],vector pHand1, vector pHand2, int a){
   // vector<vector<int>> pHand1(a);
   // for(int i=0;i<deck[DECKSZ];i--){
        
   // }
   // for(int qNum=0;qNum<q;qNum++){
    //    int i, j;
    //    cin>>i>>j;
    //    cout<<a[i][j]<<endl;
   // }
//}