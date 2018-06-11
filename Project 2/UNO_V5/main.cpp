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
const char DECKSZ = 108;

//Function Prototypes Here
void StartMN(); //Start Menu w/Play or View Current Score
void ScBdDip(); //Score Board Read from File
void GmPlrCt(); //Game Player Count Menu
void filDeck(char [], char); //Fill Deck Function
char color(char); //Color for Deck
char face(char); //Face for Deck 
void shuffle(char [], char); //Shuffle Deck
void prtDeck(char [], char, char); //Print Deck
void prtDck(); //Start of Game Print Deck
char filPlry(char [][DECKSZ], char, char [DECKSZ]);
char wilds(char card);
void game1();
void turn1();
void turn2();

//Program Execution Begins Here

int main(int argc, char** argv) {
    //seeding the random number generator
    srand(static_cast<unsigned int> (time(0)));

    //Declare all Variables Here

    char deck[DECKSZ];
    bool DkChk[DECKSZ];
    char tempDk[DECKSZ];
    char NCARDS = 8;
    char choice1;
    char choice2;
    char choice3;
    char NPLYRS;
    char PLYRTMP;

    //
    //Menu for Play Game or View Score Board
    //Loop and Display menu
    StartMN();
    cin>>choice1;
    switch (choice1) {
        case '1':
        {
            filDeck(deck, DECKSZ);
            prtDck();
            prtDeck(deck, DECKSZ, 25);
            GmPlrCt();
            break;
        }
        case '2':
        {
            ScBdDip();
            break;
        }
        default:
        {
            cout << "Exiting Program" << endl;
            exit(EXIT_SUCCESS);
        }
    }

    //Menu for Player Count
    cin>>choice2;
    switch (choice2) {
        case '1':
        {
            break;
        }
        case '2':
        {
            break;
        }
        case '3':
        {
            break;
        }
        default:
        {
            cout << "Exiting Program" << endl;
            exit(EXIT_SUCCESS);
        }
    }
    if (choice2 == '1') {
        NPLYRS = choice2;
        PLYRTMP = NPLYRS + 3;
    }
    if (choice2 == '2') {
        NPLYRS = choice2;
        PLYRTMP = NPLYRS + 3;
    }
    if (choice2 == '3') {
        NPLYRS = choice2;
        PLYRTMP = NPLYRS + 3;
    }

    NPLYRS -= '0';
    static_cast<int> (NPLYRS);

    char plyrHnd[PLYRTMP][DECKSZ];

    //Shuffle Deck and Fill Player Hands
    shuffle(deck, DECKSZ);
    //filPlry(plyrHnd, PLYRTMP, deck);

    for (int i = 0; i < NPLYRS; i++) {
        for (int card = 0; card < DECKSZ; card++) {
            plyrHnd[i][card] = deck[card];
        }   
    }
    
    cout <<plyrHnd[1]<< endl;
//print
    for (int i = 0; i <= NPLYRS; i++) {
        cout << i << endl << endl;
        for (int card = 0; card < DECKSZ; card++) {
            cout << face(plyrHnd[i][card]) << color(plyrHnd[i][card]) << 
                    wilds(plyrHnd[i][card]) << " ";
            if (card % 25 == (25 - 1))cout << endl;

        }
    }
    //Exit
    return 0;
}

char filPlry(char c[][DECKSZ], char NPLYRS, char deck[DECKSZ]) {
    return 0;
}

void StartMN() {
    //Display menu
    cout << endl << "Choose from the following Menu" << endl;
    cout << "Type 1 to Play UNO!" << endl;
    cout << endl;
    cout << "Type 2 for Current Score Board" << endl;
    cout << endl;
    cout << "Type any other key to Exit" << endl;
}

void GmPlrCt() {
    //Display menu
    cout << endl;
    cout << endl << "Choose from the following Menu" << endl;
    cout << "Type 1 for You vs. 1x Ai!" << endl;
    cout << endl;
    cout << "Type 2 for You vs. 2x Ai!" << endl;
    cout << endl;
    cout << "Type 3 for You vs. 3x Ai!" << endl;
    cout << endl;
    cout << "Type any other key to Exit" << endl;
}

void ScBdDip() {
    exit(0);
}

void filDeck(char c[], char n) {
    for (int eachCrd = 0; eachCrd < n; eachCrd++) {
        c[eachCrd] = eachCrd;
    }
}

char color(char card) {
    string colorVal = "RGBY";
    if (card < 25)return 'R';
    else if (card < 50) return 'G';
    else if (card < 75) return 'B';
    else if (card < 100) return 'Y';
    else return 'W';
}

char face(char card) {
    string faceVal = "0112233445566778899SSWWPP";
    if (card < 100)return faceVal[card % 25];
    return '\0';
}

char wilds(char card) {
    string wildVal = "WWWW4444";
    if (card > 99) {
        return wildVal[card % 25];
    } else return 0;
}

void shuffle(char c[], char nCard) {
    for (int shfl = 1; shfl <= 7; shfl++) {
        for (int card = 0; card < nCard; card++) {
            int random = rand() % nCard;
            char temp = c[card];
            c[card] = c[random];
            c[random] = temp;
        }
    }
}

void prtDeck(char deck[], char nCard, char perLine) {
    for (int card = 0; card < nCard; card++) {
        cout << face(deck[card]) << color(deck[card]) << wilds(deck[card]) << " ";
        if (card % perLine == (perLine - 1))cout << endl;

    }
}

void prtDck() {
    cout << endl;
    cout << "Here is the Deck. It will be shuffled in a moment!" << endl;
}

//void game1(){
//    turn1();
//    turn2();
//    
//    if(hand1<=1){
//        cout<<"Congrats! You Have Won!"<<endl;
//        exit(EXIT_SUCCESS);
//    }
//    if(hand2<=1){
//        cout<<"You Have Lost!"<<endl;
//        exit(EXIT_SUCCESS);
//    }
//}

//void turn1(){
//    cout<<"Lets Play!"<<endl;
//    cout<<deck[DECKSZ][0]<<endl;
//    cout<<hand1[HNDSZ];
//    cout<<"Select a Card that is either matches the Displayed Card from "
//            "the Deck with a number or color!"<<endl;
//    switch(choice3){
//        case '1':{SUBTRCT=deck[DECKSZ]-107;break;}
//        case '2':{break;}
//        case '3':{break;}  
//        default: {cout<<"Exiting Program"<<endl;
//        exit(EXIT_SUCCESS);
//        }
//}
//
//void turn2(){
//    cout<<"Lets Play!"<<endl;
//    cout<<deck[DECKSZ][0]<<endl;
//    cout<<hand2[HNDSZ];
//    cout<<"Select a Card that is either matches the Displayed Card from "
//            "the Deck with a number or color!"<<endl;
//    switch(choice3){
//        case '1':{SUBTRCT=deck[DECKSZ]-107;break;}
//        case '2':{break;}
//        case '3':{break;}  
//        default: {cout<<"Exiting Program"<<endl;
//        exit(EXIT_SUCCESS);
//        }
//}