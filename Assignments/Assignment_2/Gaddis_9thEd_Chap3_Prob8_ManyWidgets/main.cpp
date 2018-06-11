/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on February 26, 2018, 2:00 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float wdgts=12.5f, //widgets weight in pound
            totPal, //total weight of th pallet
            pal=33.0f; //pallet weight in pound
            
    //Process/Map inputs to outputs
    totPal=pal/wdgts;
    
    //Output data
    cout<<"The amount of widgets in a pallet ="<<pal/wdgts<<endl;
    
    //Exit stage right!
    return 0;
}