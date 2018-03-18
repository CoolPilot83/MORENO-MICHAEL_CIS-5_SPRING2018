/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 15, 2018, 12:25 PM
 * Purpose:  Paint Problem
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>  //ceiling funtion
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pntCov,  //Paint Coverage in ft^2/gallon
          fncLnth, //Fence Length in feet
          fncHth,  //Fence Height in feet
          totArea, //Total Area in ft^2
          numGals; //Number of gallons of paint
          
            
    //Initial Variables
    pntCov=340.0f;
    fncHth=6.0f;
    fncLnth=100.0f;
    //Map/Process Inputs to Outputs
    totArea=4*fncHth*fncLnth; //Both sides painted twice
    numGals=ceil(totArea/pntCov);
    //Display Outputs
    cout<<"Paint coverage per gallon = "<<pntCov<<" ft^2"<<endl;
    cout<<"Fence Height = "<<fncHth<<" ft"<<endl;
    cout<<"Fence Length = "<<fncLnth<<" ft"<<endl;
    cout<<"Total Area to Cover = "<<totArea<<" ft^2"<<endl;
    cout<<"Number of Gallons of Paint required = "<<numGals<<endl;
    
    //Exit program!
    return 0;
}