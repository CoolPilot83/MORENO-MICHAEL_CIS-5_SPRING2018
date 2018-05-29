/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 5, 2018, 3:50 PM
 * Purpose:  Convert Meters and Centimeters to Feet and Inches
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void Input(int inMtr, int inCenti);
void Convrt1(int mtrCeti);
void Convrt2(int ftInch, int feet, float inches);
void Output(int finish);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    //Process/Map inputs to outputs
    int inMtr, inCenti, outMtr, outCnti, feet, inches;
    char again;
    //Initialize Variables

        Input;
        Convrt1;
        Convrt2;
        Output;
        cout<<feet<<"    "<<inches;
  
    //Output data
        
    //Exit stage right!
    return 0;
}

void Input(int inMtr, int inCenti){
    cout<<"This program converts Meters and Centimeters to Feet and Inches!"<<endl;
    cout<<"To Start out, first input the meters, then centimeters separated by a space!"<<endl;
    cin>>inMtr>>inCenti;
    cout<<endl;
}

void Convrt1(int mtrCeti){
    int inMtr, inCenti;
    mtrCeti=(inMtr*1000)+inCenti;
}

void Convrt2(int ftInch, int feet, float inches){
    int mtrCeti;
    ftInch=(mtrCeti*0.39);
    feet=ftInch/12;
    inches=ftInch%12;
}

void Output(int finish){
    int feet, inches;
    feet=finish;
    cout<<finish<<" "<<inches<<endl;
}