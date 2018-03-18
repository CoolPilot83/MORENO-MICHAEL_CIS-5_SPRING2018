/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 22, 2018, 11:33 AM
 * Purpose:  Federal Budget Interest Rate
 */

//System Libraries Here
#include <iostream>
using namespace std;

const float TRLLN=1e12f;
const float BILLN=1e9f;
const float MILLN=1e6f;
const float PERCENT=100;

int main(int argc, char** argv) {
    //Declare all Variables Here
    float fedDebt, //Federal Debt in $'s 
          fedBdgt, //Federal Budget in $'s
          intRate, //Interest rate on the Debt %/yr
          dbtPmnt, //Debt Payment in $'s/yr
          pctPymt; //Percentage of Payment/yr of the Fed Budget
    
    //Input or initialize values Here
    fedDebt=20.7*TRLLN;
    fedBdgt=4.1*TRLLN;
    
    //Input Potential interest rate per yr
    cout<<"This program calculates the impact of the interest"
        <<"rate on the Federal Budget given the current "
        <<"Federal Debt"<<endl;
    cout<<"Input the potential interest rate 1 to 5 percent per year"<<endl;
    cin>>intRate;
    
    //Process/Calculations Here
    dbtPmnt=fedDebt*intRate;
    pctPymt=dbtPmnt/fedBdgt*PERCENT;
    
    //Output Located Here
    cout<<"Federal Debt       = $"<<fedDebt/TRLLN<<endl;
    cout<<"Federal Budget     = $"<<fedBdgt/TRLLN<<endl;
    cout<<"Interest Rate/Year = "<<intRate*PERCENT<<"%"<<endl;
    cout<<"Debt Payment       = "<<dbtPmnt<<"/year"<<endl;
    cout<<"Percentage Payment to the Federal Budget ="<<pctPymt<<"%"<<endl;
   
    return 0;
}

