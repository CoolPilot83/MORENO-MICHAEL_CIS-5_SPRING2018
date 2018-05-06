/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 28 @ 2100 HRS
 * Purpose:  Midterm Problem 3
 */


//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int THSND=1000;//Thousands
const int HNDRD=100; //Hundreds
const int TEN=10;    //Tens

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char n1000s,n100s,n10s,n1s;
    unsigned short number;
    string dollar="";
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    while(number<1||number>3000);
    
    //Calculate the 1000's, 100's, 10's and 1's
    n1000s=number/THSND;
    number-=n1000s*THSND;
    n100s=number/HNDRD;
    number-=n100s*HNDRD;
    n10s=number/TEN;
    number-=n10s*TEN;
    n1s=number;
    
    //Output the check value
    
    //Output the 1000s
    switch(n1000s){
        case 3:dollar+="Three Thousand ";break;
        case 2:dollar+="Two Thousand ";break;
        case 1:dollar+="One Thousand ";break;
    }
    
    //Output the 100s
    switch(n100s){
        case 9:dollar+="Nine Hundred ";break;
        case 8:dollar+="Eight Hundred ";break;
        case 7:dollar+="Seven Hundred ";break;
        case 6:dollar+="Six Hundred ";break;
        case 5:dollar+="Five Hundred ";break;
        case 4:dollar+="Four Hundred ";break;
        case 3:dollar+="Three Hundred ";break;
        case 2:dollar+="Two Hundred ";break;
        case 1:dollar+="One Hundred ";break;
    }
        
    //Output the 10's 
    switch(n10s){
        case 9:dollar+="Ninety ";break;
        case 8:dollar+="Eighty ";break;
        case 7:dollar+="Seventy ";break;
        case 6:dollar+="Sixty ";break;
        case 5:dollar+="Fifty ";break;
        case 4:dollar+="Forty ";break;
        case 3:dollar+="Thirty ";
        case 2:dollar+="Twenty ";
        case 1:dollar+="Ten "; 
        }
    
    
    //Output 1's converted
    switch(n1s){
        case 9:dollar+="Nine";break;
        case 8:dollar+="Eight";break;
        case 7:dollar+="Seven";break;
        case 6:dollar+="Six";break;
        case 5:dollar+="Five";break;
        case 4:dollar+="Four";break;
        case 3:dollar+="Three";break;
        case 2:dollar+="Two";break;
        case 1:dollar+="One";break;
    }
    
    cout<<dollar;
    cout<<" and no/100's Dollars"<<endl;
    
    
    //Exit
    return 0;}