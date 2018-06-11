/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 8, 2016, 11:56 AM
 * Purpose:  Miles per Gallon
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here and Input Initialize values Here
    float numGals, //Number of gallon will hold
          numMils, //Number of Miles
          drvGals; //Drive per gallon
          
    //Process/Calculations Here
     drvGals=numGals/numMils; 
   
    //Output Located Here
    cout<<"Number of gallon that a car will hold"<<endl;
    cin>>numGals;
    cout<<"Number of mile that a car can travel in a fuel tank"<<endl;
    cin>>numMils;
    cout<<"Drive per gallon of gas = "<<numGals/numMils<<endl;
  
  
    //Exit
    return 0;
}

