/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on April 19, 2018, 11:31 AM
 * Purpose:  Random Sequence used in approximating PI
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
const float PI=4*atan(1);//Definition of PI
const float MXRND=pow(2,31)-1;//2^31-1

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float apprxPI; //Apprx. value of PI given # terms in sequence
    int nDarts; //# of dart in game
    int inCrcl; //Number of darts in circle
    
    //Initialize Variables
    inCrcl=0;apprxPI=0;
    nDarts=10000;
    
    //Process/Map inputs to outputs
    for(int dart=1; dart<=nDarts; dart++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if(x*x+y*y<=1)inCrcl++;
    }
    apprxPI*=4.0f*inCrcl/nDarts; //Approximates PI
    
    
    cout<<"After "<<nDarts
            <<" terms, the Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    //Exit
    return 0;
}

