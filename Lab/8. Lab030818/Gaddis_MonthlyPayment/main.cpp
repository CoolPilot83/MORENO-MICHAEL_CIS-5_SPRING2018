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
using namespace std;

//User Libraries Here
const float PERCENT, YRMONT, YRDAY;

PERCENT=100.0f;
YRMONT=12.0f;
YRDAY=365.25f;
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float moPaymt, itrt, numMont, loanAmt, totAmt, totInt, tempSub;
   
    itrt=12.0f;
    unsigned char numMont=36.0f;
    loanAmt=10,000.0f;
          
        
    
    //Input or initialize values Here
    tempSub=(1+itrt, numMont);
    moPaymt=(itrt*tempSub)*loanAmt/tempSub-1;
    totAmt=numMont*moPaymt;
    totInt=totAmt-loanAmt;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<moPaymt<<endl;
    cout<<totAmt<<endl;
    cout<<totInt<<endl;
    //Exit
    return 0;
}

