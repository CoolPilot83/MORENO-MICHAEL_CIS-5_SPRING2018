/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on March 13, 2018, 10:07 AM
 * Purpose:  Process inputs into a sum
 * Savitch_9thEd_Chap2_Prob9_Sums_Ternary
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short sumPos, sumNeg, sumTot, x;
    //Input or initialize values Here
    sumPos=sumNeg=sumTot=0;
    //Process/Calculations Here
    cout<<"This program sums 10 positive or negative intergers"<<endl;
    cout<<"Utilize numbers between -100, 100"<<endl;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
   
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;
    
    cout<<"Input an interger    ->   ";
    cin>>x;
    if(x>0)sumPos+=x;
    else sumNeg+=x;
    sumTot+=x;

    cout<<"The positive sum = "<<sumPos<<endl;
    cout<<"The negative sum = "<<sumNeg<<endl;
    cout<<"The Total sum    = "<<sumTot<<endl;
    
    //Exit
    return 0;
}

