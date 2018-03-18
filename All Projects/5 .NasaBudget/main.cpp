/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 15, 2018, 11:30 AM
 * Purpose:  NASA Budget
 */

//System Libraries 
#include <iostream>   //I/O Library -> cout,endl
using namespace std;  //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float TRLLN=1.0e12f;//Trillion
const float BLLN=1.0e09f; //Billion
const int   PRCNT=100;    //Conversion for percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nasaBgt,fedBdgt,pcntNas;

    //Initial Variables
    nasaBgt=18.4*BLLN;
    fedBdgt=4.1*TRLLN;
    
    //Map/Process Inputs to Outputs
    pcntNas=nasaBgt/fedBdgt*PRCNT;

    //Display Outputs
    cout<<"NASA Budget = $"<<nasaBgt/BLLN<<" Billion"<<endl;
    cout<<"Federal Budget = $"<<fedBdgt/TRLLN<<" Trillion"<<endl;
    cout<<"NASA Percentage = "<<pcntNas<<"%"<<endl;
    
    //Exit program!
    return 0;
}