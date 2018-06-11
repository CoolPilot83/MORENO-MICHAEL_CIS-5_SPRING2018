/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on May 25th, 2018, 5:48 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int lotto[5];
    int user[5];
    
   
    
    //User Input
    for(int i=1;i<=5;i++){
        cout<<"Enter number choice #"<<i<<": "<<endl;
        cin>>user[i];
    }
    //Initialize Variables
    cout<<"The winning numbers are.\n";
     //Random Lotto numbers
    for(int j=1;j<=5;j++){
        lotto[j]=rand()% 9+0;
        cout<<lotto[j]<<" | ";
    }
    cout<<"\n-------------------"<<endl;
    if(user[1]==lotto[1]&&user[2]==lotto[2]&&user[3]==lotto[3]&&
            user[4]==lotto[4]&&user[5]==lotto[5]){
        cout<<"YOU WIN THE GRAND PRIZE!!!";
    }
    if(user[1]==lotto[1]){
        cout<<user[1]<<" | ";
    }else{
        cout<<" "<<" | ";
    }if(user[2]==lotto[2]){
        cout<<user[2]<<" | ";
    }else{
        cout<<" "<<" | ";
    }if(user[3]==lotto[3]){
        cout<<user[3]<<" | ";
    }else{
        cout<<" "<<" | ";
    }if(user[4]==lotto[4]){
        cout<<user[4]<<" | ";
    }else{
        cout<<" "<<" | ";
    }if(user[5]==lotto[5]){
        cout<<user[5]<<" | ";
    }else{
        cout<<" "<<" | ";
    }
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}