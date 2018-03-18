/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 13, 2018, 12:16 PM
 * Purpose: Military Budget
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float TRLLN=1.0e12f; //Trillion
const float BLLN=1.0e9f; //Billion
const int PRCNT=100; //Conversion for percent
// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float milbdgt, fedBdgt,prcntMil
    // Initial Variables
    milbdgt=639*BLLN;
    fedBdgt=4.1TRLLN;
    // Map/Process Inputs to Outputs
    prcntMil=milbdgt/fedBdgt*PRCNT;
    //Display Outputs
    cout<<"Military Budget = $"<<milbdgt/BLLN<<"Billion"<<endl;
    cout<<"Federal Budget = $"<<fedBdgt/TRLLN<<"Trillion"<<endl;
    cout<<"Military Percetage = "<<prcntMil<<" % "<<endl;
    
    //Exit program!
    return 0;
}

