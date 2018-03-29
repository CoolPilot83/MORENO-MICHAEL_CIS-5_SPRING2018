/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 29, 2018, 12:05 PM
 * Purpose:  Weight in lbs on earth
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float GRAVITY=6.673e-8f;//cm^3 /gram/sec^2
const float CMMTRS=0.01f;//cm to meters
const float MTRSFT=3.28f;//meters to feet
const float LBSLUGS=32.174f;//lbs per slug

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float myMass, msEarth, rEarth, myWt, myWtCnv;
    
    //Initialize Variables
    myMass=6;//6 slugs
    myWtCnv=myMass*LBSLUGS;
    msEarth=5.972e27f;//grams
    rEarth=6.371e6f;//meters
    
    //Process/Map inputs to outputs
    myWt=GRAVITY*CMMTRS*CMMTRS*CMMTRS
            *myMass*msEarth*MTRSFT
            /(rEarth*rEarth);
    
    //Output Weight
    cout<<fixed<<setprecision(0);
    cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
    
    //Exit stage right!
    return 0;
}