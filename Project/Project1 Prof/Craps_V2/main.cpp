/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 3, 2018, 10:02 AM
 * Purpose: Simulate a pair of dice
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstring>
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12;//Wins given value
    int l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12;//Count of Dice Throws 
    int games, gameLm;
    ifstream in;
    string fileNm;
    while(in>>games);
    games=games>gameLm?gameLm;games;
    // Initial Variables
    games=1000;
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    fileNm="nGames.dat";
    in.open(fileNm.c_str());
    
    //Check the Statistics
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        if(sum==7)w7++;
        else if(sum==11)w11++;
        else if(sum==2)l2++;
        else if(sum==3)l3++;
        else if(sum==12)l12++;
        else{
            bool rollagn;
            do{
                rollagn=true;
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sumAgn=die1+die2;
                if(sumAgn==7){
                    rollagn=false;
                    if(sum==4)l4++;
                    if(sum==5)l5++;
                    if(sum==6)l6++;
                    if(sum==8)l8++;
                    if(sum==9)l9++;
                    if(sum==10)l10++;
                }
                    else if(sumAgn==sum){
                        rollagn=false;
                        switch(sum){
                            case 4:w4++;break;
                            case 5:w5++;break;
                            case 6:w6++;break;
                            case 8:w8++;break;
                            case 9:w9++;break;
                            case 10:w10++;break;
                    }
                }
            }while(rollagn);
        }
    }
    
    //Display Outputs
    cout<<"Number of Craps Games Played = "<<games<<endl;
    cout<<"Result Table"<<endl;
    cout<<"Throw      Wins     Loses"<<endl;
    cout<<" 2 "<<setw(10)<<w2<<setw(20)<<l2<<endl;
    cout<<" 3 "<<setw(10)<<w3<<setw(20)<<l3<<endl;
    cout<<" 4 "<<setw(10)<<w4<<setw(20)<<l4<<endl;
    cout<<" 5 "<<setw(10)<<w5<<setw(20)<<l5<<endl;
    cout<<" 6 "<<setw(10)<<w6<<setw(20)<<l6<<endl;
    cout<<" 7 "<<setw(10)<<w7<<setw(20)<<l7<<endl;
    cout<<" 8 "<<setw(10)<<w8<<setw(20)<<l8<<endl;
    cout<<" 9 "<<setw(10)<<w9<<setw(20)<<l9<<endl;
    cout<<" 10 "<<setw(10)<<w10<<setw(20)<<l10<<endl;
    cout<<" 11 "<<setw(10)<<w11<<setw(20)<<l11<<endl;
    cout<<" 12 "<<setw(10)<<w12<<setw(20)<<l12<<endl;
    cout<<" Sum "<<setw(10)
            <<w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12<<setw(10)
            <<l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12<<setw(10)<<games<<endl;
    
     //Close
    in.close(fileNm)
    //Exit program!
    return 0;
}

