/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 17, 2018, 11:30 AM
 * Purpose:  BlackJack Game
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filDEck(char [], char);
char suit(char);
char face(char);
void shuffle(char [], char);
void prtDeck(char [], char, char);
void selSort(char [], char);
char pulDeck(char [], char);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const char DECKSZ=52;
    char deck[DECKSZ];
    const char HNDSZ=5;
    char hand[HNDSZ];
    
    //Input or initialize values Here
    filDEck(deck, DECKSZ);
    //shuffle(deck, DECKSZ);
    //selSort(deck, DECKSZ);
    prtDeck(deck, DECKSZ, 25);
    //Process/Calculations Here
    
    //Output Located Here
 

    //Exit
    return 0;
}

void filDEck(char c[], char n){
    for(int eachCrd=0;eachCrd<n;eachCrd++){
        c[eachCrd]=eachCrd;
    }
}

char suit(char card){
    string suitVal="RBGYW";
    if(card<25)return 'R';
    else if(card<50) return 'B';
    else if(card<75) return 'G';
    else if(card<100) return 'Y';
    else return 'W';
}

char face(char card){
    string faceVal="0123456789SWP";
    return faceVal[card%13];
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
        cout<<face(deck[card])<<suit(deck[card])<<" ";
        if(card%perLine==(perLine-1))cout<<endl;
        
    }
}

void selSort(char deck[], char dkSize){
    for(int lstSize=0;lstSize<dkSize-1;lstSize++){
        char small=deck[lstSize];
        char idxSml=lstSize;
        for(int fndSml=lstSize+1;fndSml<dkSize;fndSml++){
            if(small>deck[fndSml]){
                small=deck[fndSml];
                idxSml=fndSml;
            }
        }
        char temp=deck[lstSize];
        deck[lstSize]=deck[idxSml];
        deck[idxSml]=temp;
    }
}
