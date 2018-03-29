/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 27, 2018, 2:40 PM
 * Purpose:  Calculate ASCII key codes
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    
    //Initialize Variables
    out.open("ASCII.out");
    
    //Process/Map inputs to outputs
    for(char cha1=32;cha1<=33;cha1++){
        out<<cha1<<endl;
    }
 
    //Output data
    out.close();
    //Exit stage right!
    return 0;
}