/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 8, 2016, 9:51 AM
 * Purpose:  Gaddis, Monthly Payment Calc.
 * Prob19 chap 3
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here
unsigned char MNYR=12;
unsigned char PERCENT=100;
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float loanAmt=1e4f, intRate=12, monPymt, totAmt, totInt;
    unsigned char nMnths=36;
   
    //Input or initialize values Here
    intRate/=(MNYR*PERCENT);
    float temp=pow(1+intRate,nMnths);
    monPymt=intRate*temp*loanAmt/(temp-1);
    int pennies=static_cast<int>(monPymt+0.005)*100);
    monPymt=pennies/100.0f;
    totAmt=monPymt*nMnths;
    totInt=totAmt-loanAmt;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount = $"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate = "<<setw(6)<<static_cast<int>(intRate*MNYR*PERCENT)<<"%/yr"<<endl;
    cout<<"Number of Payments = "<<setw(6)<<static_cast<int>(nMnths)<<endl;
    cout<<"Monthly Payment = $"<<setw(8)<<monPymt<<endl;
    cout<<"Total Paid for loan = $"<<setw(8)<<totAmt<<endl;
    cout<<"Total Interest = $"<<setw(8)<<totInt<<endl;
    
    //Exit
    return 0;
}

