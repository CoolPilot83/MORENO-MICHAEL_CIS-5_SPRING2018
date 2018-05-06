/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 29 @ 0400 HRS
 * Purpose:  MidTerm Problem 5
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate, grsPay;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20){
        grsPay=(payRate*1)*hrsWrkd;
    }
    if(hrsWrkd>20&&hrsWrkd<=40){
        hrsWrkd=hrsWrkd-20;
        grsPay=(payRate*20)+((payRate*1.5)*hrsWrkd);        
    }
    if(hrsWrkd>40){
        hrsWrkd=hrsWrkd-40;
        grsPay=(payRate*20)+((payRate*1.5)*20)+((payRate*2.0)*hrsWrkd);
    }
    //Output the check
    cout<<grsPay<<endl;
    
    //Exit
    return 0;
}