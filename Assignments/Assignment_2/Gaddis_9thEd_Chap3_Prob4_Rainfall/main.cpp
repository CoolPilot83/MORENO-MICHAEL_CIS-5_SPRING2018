/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on February 26, 2018, 3:50 PM
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
    float jun=6.72f, //rain in june 
          jul=6.72f, //rain in july
          aug=6.72f, //rain in august
          totMon, //Total month 
          augMon; //Average month
    
    //Process/Map inputs to outputs
    
    
    totMon=jun+jul+aug;
    augMon=totMon/3;
    
    //Output data
    cout<<"amount of rain total in three month ="<<jun+jul+aug<<endl;
    cout<<"the average of the total amount of rain ="<<(jun+jul+aug)/3<<endl;
    
    //Exit stage right!
    return 0;
}