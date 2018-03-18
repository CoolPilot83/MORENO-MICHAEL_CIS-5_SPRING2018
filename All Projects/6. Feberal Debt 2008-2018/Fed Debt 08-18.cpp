/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 20, 2018, 11:45 AM
 * Purpose:  Federal Debt from 2008 to 2018 (Projected)
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
    const float TRLLN=1.0e12f;//Trillion
    const float BLLN=1.0e09f; //Billion
    const float MILLN=1.0e06f; //Million
    const int   PRCNT=100; 
    
    //Initialize Variables
    //2008
    float Fddbt08, USppl08, Fddbt18, USppl18, pctDt08, pctDt18, pctChD, pctChPP, dtPP08,dtPP18;
    
    Fddbt08=9.9*TRLLN;
    USppl08=304*MILLN;
    Fddbt18=20.7*TRLLN;
    USppl18=326*MILLN;
    //Process/Map inputs to outputs
    pctDt08=Fddbt08/USppl08*PRCNT;
    pctDt18=Fddbt18/USppl18*PRCNT;
    
    pctChD=(Fddbt18-Fddbt08)/Fddbt08*PRCNT;
    
    dtPP08=Fddbt08/USppl08;
    dtPP18=Fddbt18/USppl18;
    pctChPP=(dtPP18-dtPP08)/dtPP08*PRCNT;
    //Output data
    cout<<"Federal Debt of 2008: $"<<Fddbt08/TRLLN<<" Trillion"<<endl;
    cout<<"US National Population 2008: $"<<USppl08/MILLN<<" Million"<<endl;
    cout<<"Federal Debt of 2018: $"<<Fddbt18/TRLLN<<" Trillion"<<endl;
    cout<<"US National Population 2018: $"<<USppl18/MILLN<<" Million"<<endl;
    cout<<"US Percent of Debt 2008: $"<<pctDt08/PRCNT<<endl;
    cout<<"US Percent of Debt 2018: $"<<pctDt18/PRCNT<<endl;
    cout<<"Percent change in Debt from 2008 to 2018: "<<pctChD<<"%"<<endl;
    cout<<"Percent change per person in 2018: "<<pctChPP<<"%"<<endl;
    
    
    //Exit stage right!
    return 0;
}