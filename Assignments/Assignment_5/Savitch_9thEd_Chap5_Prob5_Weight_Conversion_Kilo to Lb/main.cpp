/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 5, 2018, 4:50 PM
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
void Convrt2(int ftInch, float feet, float inches);
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
    cout<<"This program converts Weight from kilograms and grams to pounds and ounces!"<<endl;
    cout<<"To Start out, first input the kilograms, then grams separated by a space!"<<endl;
    cin>>inMtr>>inCenti;
    cout<<endl;
}

void Convrt1(int mtrCeti){
    int inMtr, inCenti;
    mtrCeti=(inMtr*1000)+inCenti;
}

void Convrt2(int ftInch, float feet, float inches){
    int mtrCeti;
    ftInch=(mtrCeti*0.0353);
    feet=ftInch/0.062;
    inches=ftInch%0.062;
}

void Output(int finish){
    int feet, inches;
    feet=finish;
    cout<<finish<<" "<<inches<<endl;
}