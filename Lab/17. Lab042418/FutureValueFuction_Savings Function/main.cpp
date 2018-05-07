/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on April 24, 2018, 11:40 AM
 * Purpose:  Future Value Function in Savings
 */

//System Libraries Here
#include <iostream> //
#include <cmath> //Math lib
#include <iomanip>//formating lib
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable
//Like PI, e, Gravity, or conversions
const float CNVPERC=1e2f; //100 percent convert
//Function Prototypes Here
float fva11(float, float, int);//Future Value with Power Function
float fva12(float, float, int);//Future Value with Power Function
float fva13(float, float, int);//Future Value with Power Function
float fva14(float, float, int);//Future Value with Power Function

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal,   //Present Value in $'s
            intRate; //Interest rate in %
    int numCmp;      //Number of compounding periods in years
    
    //Input or initialize values Here
    presVal=1e2f; //$100's
    intRate=6;    //6 per cent
    
    //By the rule of 72
    numCmp=72/intRate;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<presVal<<endl;
    cout<<"Interest Rate = $"<<intRate<<endl;
    cout<<"Number of compounding periods = "<<numCmp<<" years"<<endl;
    cout<<"Savings using FV -> Power     = $"
            <<fva11(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> Log/Exp   = $"
            <<fva12(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> for-loop  = $"
            <<fva13(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> recursion = $"
            <<fva14(presVal,intRate/CNVPERC,numCmp)<<endl;
    //Exit
    return 0;
}

//111111111111111111111111111111111111111111111111111111111111111111111111111111
//111111111111111111111111111111111111111111111111111111111111111111111111111111
//                        FUTURE VALUE FUNCTIONS
//INPUTS:
//    pv -> present value in $'s
//    ir -> interest rate in decimal value
//    n  -> number of compounding periods (yrs)
//OUTPUTS:
//    fv -> future value in $'s
//111111111111111111111111111111111111111111111111111111111111111111111111111111
//111111111111111111111111111111111111111111111111111111111111111111111111111111

float fva11(float pv, float ir, int n){
    return pv*pow((1+ir),n);
}

float fva12(float pv, float ir, int n){
    return pv*exp(n*log(1+ir));
}

float fva13(float pv, float ir, int n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    return pv;
}

float fva14(float pv, float ir, int n){
    if(n<=0)return pv;
    return fva14(pv,ir,n-1)*(1+ir);
}