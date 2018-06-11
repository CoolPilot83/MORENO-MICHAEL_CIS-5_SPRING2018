/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on February 26, 2018, 8:50 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char p1,com1;
    
    //Initialize Variables
    p1=rand()%4+23;
    com1=rand()%4+23;
    
    //Choices
    cout<<"Play 23"<<endl;
    cout<<"Player 1 = "<<endl;
    cin>>p1;
    cout<<"Computer 1 = "<<com1<<endl;
    
    //Determine the winner
    if(p1<com1){
        cout<<"player win"<<endl;
    }else
        if(p1>com1){
            cout<<"computer win"<<endl;
        }
    
    //Output data
    
    //Exit stage right!
    return 0;
}