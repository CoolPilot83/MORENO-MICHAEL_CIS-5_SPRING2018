/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
unsigned char PRCNTS=12; //Conversions to percentage
unsigned char MNYR=12;    //Months per Years

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
  float intRate=1.2e1f,  //interest rate per year
        loanAmt=1e4f,  //Loan Amount of Payments
        totAmts,  //Total Amounts 
        totInts,  //Total of the interest
        monPays;  //Monthly Payments
  unsigned char numMnth=36;  //number of months

    //Process/Calculations Here
    intRate/=(MNYR*PRCNTS);
    float temp=pow(1+intRate,numMnth);
    monPays=intRate*temp*loanAmt/(temp-1); 
    totAmts=numMnth*monPays;
    totInts=totAmts-loanAmt;
    
    //Output Located Here
    cout<<"interest rate per year = "<<setw(6)<<static_cast<int>(intRate*MNYR*PRCNTS)<<"%/year"<<endl;
    cout<<"Number of Months = "<<setw(6)<<static_cast<int>(numMnth)<<endl;
    cout<<"Loan amount of money = $"<<setw(8)<<loanAmt<<endl;
    cout<<"Monthly Payments = $"<<setw(8)<<monPays<<endl;
    cout<<"total Amount = $"<<setw(8)<<totAmts<<endl;
    cout<<"total interest = $"<<setw(8)<<totInts<<endl;
    
    
    //Exit
    return 0;
}

