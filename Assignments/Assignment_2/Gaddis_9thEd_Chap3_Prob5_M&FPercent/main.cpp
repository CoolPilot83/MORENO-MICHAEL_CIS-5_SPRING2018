/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on February 26, 2018, 1:50 PM
 * Purpose:  Calculation of the percent of male and female
 * 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int PRCNT=100; //Conversion to Percent 
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float Male=8.0f, //male student
          Female=12.0f, //female student
          totStu=20.0f, //total student
          pcntMal, //Percent of male
          pcntFel; //Percent of female
    
    //Process/Map inputs to outputs
    pcntMal=Male/totStu;
    pcntFel=Female/totStu;
    
    //Output data
    cout<<"the percent of male in the class ="<<(Male/totStu)*PRCNT<<"%"<<endl;
    cout<<"the percent of female in the class ="<<(Female/totStu)*PRCNT<<"%"<<endl;
    //Exit stage right!
    return 0;
}