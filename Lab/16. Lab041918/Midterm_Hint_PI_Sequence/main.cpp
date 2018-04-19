/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on April 19, 2018, 11:31 AM
 * Purpose:  PI Factorial Midterm hint
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
const float PI=4*atan(1);//Definition of PI
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float apprxPI; //Apprx. value of PI given # terms in sequence
    int nTerms; //# terms used in sequence
    
    apprxPI=0;
    nTerms=10000;
    
    for(int sign=-1, term=1, cntr=1;term<=nTerms; term++, cntr+=2){
        sign*=-1;
        apprxPI+=(static_cast<float>(sign)/cntr); //atan(1)
    }
    apprxPI*=4; //Approximates PI
    
    
    cout<<"After "<<nTerms<<" terms, the Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    //Exit
    return 0;
}

