/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 27, 2018, 11:55 AM
 * Purpose: Calculate Transportation Time in Space
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
float lvVelcy, sec, feet, distkm;
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
const float hour = 60.0f;
const float mins = 60.0f;
const float MILE = 5280.0f;
const float METER = 3.2f;
const float KILOMTR = 3280.0f;
const float lityrft = 3.104e+16f;//feet
const float lityrkm = 9460730472580.8f; //km
const float day = 24.0f;
const float yr = 365.25f;
const float sdlight = 3.0e05f;//meters per sec
const float TRLLN=1.0e12f;//Trillion
const float BLLN=1.0e09f; //Billion
const float MILLN=1.0e06f;    // Initial Variables

lvVelcy=16.6f; //km per sec
    // Map/Process Inputs to Outputs
distkm=sdlight*mins*hour*day*yr*lityrkm;

    //Display Outputs
   
    //Exit program!
    return 0;
}

